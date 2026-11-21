/* FUN_1801f6c00 @ 1801f6c00 */

longlong FUN_1801f6c00(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar1 = FUN_1801f6b90(param_2,param_1);
    thunk_FUN_1801d3330(param_1,0x28,8);
    return lVar1;
  }
  return param_1;
}


