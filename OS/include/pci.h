#ifndef PCI_H
#define PCI_H

#ifndef TYPES_H
#include"types.h"
#endif

typedef struct
{
	uint8 reg_num;
	uint8 dev_and_func;
	uint8 bus_num;
	uint8 reserved=0x01;
}pci;

uint8 read_pci()
{
	
