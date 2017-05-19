rm *.o
nasm -f elf32 my_kernel.asm -o kernel.o
nasm -f elf32 include/int32.asm -o int32.o
gcc -m32 -c kernel.c -o kc.o -ffreestanding
gcc -m32 -c include/display.c -o display.o -ffreestanding -I./include
gcc -m32 -c include/util.c -o util.o -ffreestanding
gcc -m32 -c include/idt.c -o idt.o -ffreestanding
gcc -m32 -c include/isr.c -o isr.o -ffreestanding
gcc -m32 -c include/default_mem_defs.c -o default_mem_defs.o -ffreestanding
ld -m elf_i386 -T my_link.ld -o kernel.bin kernel.o int32.o display.o default_mem_defs.o isr.o idt.o util.o kc.o
qemu-system-i386 -kernel kernel.bin

