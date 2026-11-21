/* Catch@18010fbc0 @ 18010fbc0 */

undefined * Catch_18010fbc0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = param_2;
  uVar1 = FUN_180200a6f(*(undefined8 *)(param_2 + 0xc0));
  *(undefined8 *)(param_2 + 0xa8) = uVar1;
  *(longlong *)(param_2 + 0x98) = lVar2;
  return &DAT_18010fa63;
}


