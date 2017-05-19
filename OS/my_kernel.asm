bits 16
section	.text
	align	4
	dd	0x1BADB002
	dd	0x00
	dd	-(0x1BADB002+0x00)
global	start

start:

	mov eax,cr0
	or eax,1
	mov cr0,eax
	cld
bits 32
	extern main				;main() function in C code
	call main
	hlt				;Halt system
