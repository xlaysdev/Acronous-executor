/* Catch@18017ff40 @ 18017ff40 */

undefined * Catch_18017ff40(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = param_2;
  uVar1 = FUN_180200a6f(*(undefined8 *)(param_2 + 0xa8));
  *(undefined8 *)(param_2 + 0x90) = uVar1;
  *(longlong *)(param_2 + 0x98) = lVar2;
  return &DAT_18017fe1a;
}


