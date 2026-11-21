/* Catch@18017d780 @ 18017d780 */

undefined8 Catch_18017d780(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = param_2;
  uVar1 = FUN_180200a6f(*(undefined8 *)(param_2 + 0xf8));
  *(undefined8 *)(param_2 + 0xd8) = uVar1;
  *(longlong *)(param_2 + 200) = lVar2;
  return 0x18017d699;
}


