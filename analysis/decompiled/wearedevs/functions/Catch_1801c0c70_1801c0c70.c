/* Catch@1801c0c70 @ 1801c0c70 */

undefined * Catch_1801c0c70(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = param_2;
  uVar1 = FUN_180200a6f(*(undefined8 *)(param_2 + 0x188));
  *(undefined8 *)(param_2 + 0x150) = uVar1;
  *(longlong *)(param_2 + 0x170) = lVar2;
  return &DAT_1801c0c28;
}


