/* Unwind@1801872d0 @ 1801872d0 */

void Unwind_1801872d0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0xc0) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0xd0),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0xc0) + 0x10));
  }
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0xb0),0x18,8);
  return;
}


