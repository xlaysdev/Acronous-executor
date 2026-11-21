/* Catch_All@1801c30d0 @ 1801c30d0 */

undefined * Catch_All_1801c30d0(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  param_2 = param_2 & 0xffffffffffffff80;
  *(undefined1 *)(param_2 + 0x5e) = 1;
  uVar2 = param_2;
  uVar1 = FUN_180200a6f(0);
  *(undefined8 *)(param_2 + 0x60) = uVar1;
  *(ulonglong *)(param_2 + 0x78) = uVar2;
  return &DAT_1801c2faa;
}


