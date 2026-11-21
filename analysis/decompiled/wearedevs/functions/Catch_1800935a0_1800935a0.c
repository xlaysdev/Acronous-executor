/* Catch@1800935a0 @ 1800935a0 */

undefined * Catch_1800935a0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = param_2;
  uVar1 = FUN_180200a6f(*(undefined8 *)(param_2 + 0x80));
  *(undefined8 *)(param_2 + 0x68) = uVar1;
  *(longlong *)(param_2 + 0x60) = lVar2;
  return &DAT_180093510;
}


