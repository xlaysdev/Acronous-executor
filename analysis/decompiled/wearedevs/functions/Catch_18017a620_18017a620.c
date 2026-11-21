/* Catch@18017a620 @ 18017a620 */

undefined * Catch_18017a620(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = param_2;
  uVar1 = FUN_180200a6f(*(undefined8 *)(param_2 + 0xa0));
  *(undefined8 *)(param_2 + 0x58) = uVar1;
  *(longlong *)(param_2 + 0x68) = lVar2;
  return &DAT_18017a320;
}


