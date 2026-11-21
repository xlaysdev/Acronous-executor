/* Catch@18010fd80 @ 18010fd80 */

undefined * Catch_18010fd80(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = param_2;
  uVar1 = FUN_180200a6f(*(undefined8 *)(param_2 + 0x88));
  *(undefined8 *)(param_2 + 0x70) = uVar1;
  *(longlong *)(param_2 + 0x68) = lVar2;
  return &DAT_18010fcd6;
}


