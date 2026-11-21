/* Catch@18017a3e0 @ 18017a3e0 */

undefined * Catch_18017a3e0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = param_2;
  uVar1 = FUN_180200a6f(*(undefined8 *)(param_2 + 0xb0));
  *(undefined8 *)(param_2 + 0x60) = uVar1;
  *(longlong *)(param_2 + 0x50) = lVar2;
  return &DAT_18017a364;
}


