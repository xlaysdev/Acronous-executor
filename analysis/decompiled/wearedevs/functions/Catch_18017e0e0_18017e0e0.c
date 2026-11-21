/* Catch@18017e0e0 @ 18017e0e0 */

undefined * Catch_18017e0e0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = param_2;
  uVar1 = FUN_180200a6f(*(undefined8 *)(param_2 + 0x68));
  *(undefined8 *)(param_2 + 0x40) = uVar1;
  *(longlong *)(param_2 + 0x38) = lVar2;
  return &DAT_18017e023;
}


