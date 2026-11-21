/* Catch@18017a500 @ 18017a500 */

undefined * Catch_18017a500(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = param_2;
  uVar1 = FUN_180200a6f(*(undefined8 *)(param_2 + 0xa8));
  *(undefined8 *)(param_2 + 0x80) = uVar1;
  *(longlong *)(param_2 + 0x88) = lVar2;
  return &DAT_18017a2ee;
}


