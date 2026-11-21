/* Unwind@1800e0ec0 @ 1800e0ec0 */

void Unwind_1800e0ec0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  if (*(longlong *)(lVar1 + 0x38) == 0) {
    lVar2 = *(longlong *)(lVar1 + 0x58);
  }
  else {
    thunk_FUN_1801d3330(*(undefined8 *)(lVar1 + 0x40),*(longlong *)(lVar1 + 0x38),1);
    lVar2 = *(longlong *)(lVar1 + 0x58);
  }
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(lVar1 + 0x78);
  }
  else {
    thunk_FUN_1801d3330(*(undefined8 *)(lVar1 + 0x60),lVar2,1);
    lVar2 = *(longlong *)(lVar1 + 0x78);
  }
  if (lVar2 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(lVar1 + 0x80),lVar2,1);
  }
  FUN_1800baa20(lVar1 + 0xb0);
  thunk_FUN_1801d3330(lVar1,0x120,8);
  return;
}


