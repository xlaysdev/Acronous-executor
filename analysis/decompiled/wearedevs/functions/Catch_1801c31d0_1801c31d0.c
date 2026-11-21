/* Catch@1801c31d0 @ 1801c31d0 */

undefined * Catch_1801c31d0(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = param_2 & 0xffffffffffffff80;
  uVar1 = *(undefined8 *)(param_2 + 0x240);
  *(undefined1 *)(uVar2 + 0x5e) = 0;
  uVar3 = uVar2;
  uVar1 = FUN_180200a6f(uVar1);
  *(undefined8 *)(uVar2 + 0x68) = uVar1;
  *(ulonglong *)(uVar2 + 0x60) = uVar3;
  return &DAT_1801c2f74;
}


