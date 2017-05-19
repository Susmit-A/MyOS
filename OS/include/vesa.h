#ifndef VESA_H
#define VESA_H

#include"types.h"

typedef struct
{
	uint8 VESASignature[4];
	uint16 VESAVersion;
	uint32 OEMStrPtr;
	uint8 capabalities[4];
	uint32 VidPtr;
	uint16 TotalMemory;
	uint16 OemSwRev;
	uint32 OemVendorNamePtr;
	uint32 OemProductNamePtr;
	uint32 OemProductRevPtr;
	uint8 reserved[222];
	uint8 OemData[256];
}__attribute__((packed)) VESA_INFO;


typedef struct
{
	uint16 ModeAttributes;       
      	uint8  WinAAttributes;       
      	uint8  WinBAttributes;       
      	uint16 WinGranularity;       
      	uint16 WinSize        ;      
     	uint16 WinASegment     ;     
      	uint16 WinBSegment      ;    
      	uint32  WinFuncPtr       ;    
      	uint16 BytesPerScanLine   ;  
      	uint16 XResolution         ; 
      	uint16 YResolution        ;  
     	uint8  XCharSize           ; 
      	uint8  YCharSize            ;
      	uint8  NumberOfPlanes       ;
      	uint8  BitsPerPixel         ;
      	uint8  NumberOfBanks        ;
      	uint8  MemoryModel          ;
      	uint8  BankSize             ;
      	uint8  NumberOfImagePages   ;
      	uint8  Reserved_page        ;
      	uint8  RedMaskSize          ;
      	uint8  RedMaskPos           ;
      	uint8  GreenMaskSize        ;
      	uint8  GreenMaskPos         ;
      	uint8  BlueMaskSize         ;
      	uint8  BlueMaskPos          ;
      	uint8  ReservedMaskSize     ;
      	uint8  ReservedMaskPos      ;
      	uint8  DirectColorModeInfo  ;
      	uint32  PhysBasePtr          ;
      	uint32  OffScreenMemOffset   ;
      	uint16 OffScreenMemSize;
      	uint8  Reserved[206];
}__attribute__((packed)) MODE_INFO; 

#endif
