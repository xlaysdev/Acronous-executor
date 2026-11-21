/* FUN_1801f6120 @ 1801f6120 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1801f6120(void)

{
  int iVar1;
  
  if (DAT_1802fd8c1 == '\0') {
    iVar1 = FUN_1801f6780();
    if (iVar1 == 0) {
      _DAT_1802fd8c8 = 0xffffffffffffffff;
      uRam00000001802fd8d0 = 0xffffffffffffffff;
      _DAT_1802fd8d8 = 0xffffffffffffffff;
      _DAT_1802fd8e0 = 0xffffffffffffffff;
      uRam00000001802fd8e8 = 0xffffffffffffffff;
      _DAT_1802fd8f0 = 0xffffffffffffffff;
    }
    else {
      iVar1 = _initialize_onexit_table(&DAT_1802fd8c8);
      if (iVar1 != 0) {
        return 0;
      }
      iVar1 = _initialize_onexit_table(&DAT_1802fd8e0);
      if (iVar1 != 0) {
        return 0;
      }
    }
    DAT_1802fd8c1 = '\x01';
  }
  return 1;
}


