/* Catch@1801c0030 @ 1801c0030 */

undefined * Catch_1801c0030(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = param_2;
  uVar1 = FUN_180200a6f(*(undefined8 *)(param_2 + 0x180));
  *(undefined8 *)(param_2 + 0x140) = uVar1;
  *(longlong *)(param_2 + 0x148) = lVar2;
  return &DAT_1801bffd3;
}


