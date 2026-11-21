/* Catch@180110240 @ 180110240 */

undefined * Catch_180110240(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = param_2;
  uVar1 = FUN_180200a6f(*(undefined8 *)(param_2 + 0xd8));
  *(undefined8 *)(param_2 + 0xc0) = uVar1;
  *(longlong *)(param_2 + 0xb8) = lVar2;
  return &DAT_180110045;
}


