/* FUN_180100e20 @ 180100e20 */

longlong FUN_180100e20(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_1801f88d0(param_1 + 0x10);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar1 * 8) = param_2;
  *(longlong *)(param_1 + 0x20) = lVar1 + 1;
  return param_1;
}


