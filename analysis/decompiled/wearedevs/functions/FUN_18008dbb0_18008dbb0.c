/* FUN_18008dbb0 @ 18008dbb0 */

undefined8 FUN_18008dbb0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint6 uStack_56;
  
  uVar1 = FUN_180139890(0,param_1);
  FUN_180027490();
  puVar2 = (undefined8 *)thunk_FUN_1801d32d0(0x40,8);
  if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x40);
  }
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[4] = 8;
  puVar2[5] = 0;
  puVar2[2] = (ulonglong)uStack_56 << 0x10;
  puVar2[3] = 0;
  *puVar2 = 1;
  puVar2[1] = 1;
  return uVar1;
}


