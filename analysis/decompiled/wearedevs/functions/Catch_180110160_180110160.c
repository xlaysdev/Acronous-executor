/* Catch@180110160 @ 180110160 */

undefined * Catch_180110160(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = param_2;
  uVar1 = FUN_180200a6f(*(undefined8 *)(param_2 + 0xe0));
  *(undefined8 *)(param_2 + 0xc0) = uVar1;
  *(longlong *)(param_2 + 0xb8) = lVar2;
  return &DAT_180110037;
}


