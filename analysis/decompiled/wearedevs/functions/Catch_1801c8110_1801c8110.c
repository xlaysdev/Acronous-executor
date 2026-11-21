/* Catch@1801c8110 @ 1801c8110 */

undefined8 Catch_1801c8110(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = param_2;
  uVar1 = FUN_180200a6f(*(undefined8 *)(param_2 + 0x1e8));
  *(undefined8 *)(param_2 + 0x1c8) = uVar1;
  *(longlong *)(param_2 + 0x1b8) = lVar2;
  return 0x1801c7ff8;
}


