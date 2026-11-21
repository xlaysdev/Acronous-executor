/* FUN_18014c490 @ 18014c490 */

void FUN_18014c490(longlong param_1)

{
  longlong lVar1;
  
  if ((10 < *(byte *)(param_1 + 0xb8)) && (*(longlong *)(param_1 + 200) != 0)) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0xc0),*(longlong *)(param_1 + 200),1);
  }
  FUN_18000adf0(param_1 + 0x60);
  FUN_18000b470(param_1);
  lVar1 = *(longlong *)(param_1 + 0xd0);
  if (lVar1 == 0) {
    return;
  }
  FUN_18002a190();
  thunk_FUN_1801d3330(lVar1,0x20,8);
  return;
}


