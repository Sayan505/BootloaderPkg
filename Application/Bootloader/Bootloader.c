#include "Bootloader.h"


EFI_STATUS EFIAPI UefiMain(IN EFI_HANDLE ImageHandle, IN EFI_SYSTEM_TABLE *SystemTable) {
    Print(L"Hello World!");
    
    for(;;) { __asm__ volatile("hlt"); }

    return EFI_SUCCESS;
}
