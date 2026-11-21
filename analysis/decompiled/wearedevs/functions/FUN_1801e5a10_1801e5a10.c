/* FUN_1801e5a10 @ 1801e5a10 */

longlong FUN_1801e5a10(ulonglong param_1,int param_2,ulonglong param_3,int param_4)

{
  longlong lVar1;
  
  lVar1 = param_1 + param_3;
  if (CARRY8(param_1,param_3)) {
LAB_1801e5a47:
                    /* WARNING: Subroutine does not return */
    FUN_180201b60("overflow when adding duration to instantlibrary\\std\\src\\time.rs",0x28,
                  &DAT_180291350);
  }
  if (999999999 < (uint)(param_4 + param_2)) {
    if (lVar1 == -1) goto LAB_1801e5a47;
    lVar1 = lVar1 + 1;
  }
  return lVar1;
}


