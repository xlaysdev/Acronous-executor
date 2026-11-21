/* Catch@1800927c0 @ 1800927c0 */

undefined * Catch_1800927c0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = param_2;
  uVar1 = FUN_180200a6f(*(undefined8 *)(param_2 + 0x78));
  *(undefined8 *)(param_2 + 0x60) = uVar1;
  *(longlong *)(param_2 + 0x58) = lVar2;
  return &DAT_18009271e;
}


