/* FUN_1801f62e0 @ 1801f62e0 */

/* WARNING: Removing unreachable block (ram,0x0001801f6366) */
/* WARNING: Enum "SectionFlags": Some values do not have unique names */

ulonglong FUN_1801f62e0(longlong param_1)

{
  IMAGE_SECTION_HEADER *pIVar1;
  
  pIVar1 = &IMAGE_SECTION_HEADER_180000208;
  while( true ) {
    if (pIVar1 == (IMAGE_SECTION_HEADER *)&DAT_1800002d0) {
      return 0x180000200;
    }
    if (((ulonglong)(uint)pIVar1->VirtualAddress <= param_1 - 0x180000000U) &&
       (param_1 - 0x180000000U <
        (ulonglong)((pIVar1->Misc).PhysicalAddress + pIVar1->VirtualAddress))) break;
    pIVar1 = pIVar1 + 1;
  }
  if ((int)pIVar1->Characteristics < 0) {
    return (ulonglong)pIVar1 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)((ulonglong)pIVar1 >> 8),1);
}


