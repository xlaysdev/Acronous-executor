/* Catch@180092f00 @ 180092f00 */

undefined * Catch_180092f00(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = param_2;
  uVar1 = FUN_180200a6f(*(undefined8 *)(param_2 + 0xb0));
  *(undefined8 *)(param_2 + 0x88) = uVar1;
  *(longlong *)(param_2 + 0x78) = lVar2;
  return &DAT_180092da5;
}


