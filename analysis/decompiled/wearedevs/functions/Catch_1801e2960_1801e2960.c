/* Catch@1801e2960 @ 1801e2960 */

undefined * Catch_1801e2960(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = param_2;
  uVar1 = FUN_180200a6f(*(undefined8 *)(param_2 + 0x60));
  *(undefined8 *)(param_2 + 0x48) = uVar1;
  *(longlong *)(param_2 + 0x38) = lVar2;
  return &DAT_1801e28b6;
}


