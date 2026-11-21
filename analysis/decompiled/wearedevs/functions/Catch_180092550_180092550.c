/* Catch@180092550 @ 180092550 */

undefined * Catch_180092550(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = param_2;
  uVar1 = FUN_180200a6f(*(undefined8 *)(param_2 + 0x78));
  *(undefined8 *)(param_2 + 0x60) = uVar1;
  *(longlong *)(param_2 + 0x58) = lVar2;
  return &DAT_1800924ae;
}


