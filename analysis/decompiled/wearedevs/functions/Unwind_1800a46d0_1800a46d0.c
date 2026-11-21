/* Unwind@1800a46d0 @ 1800a46d0 */

void Unwind_1800a46d0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x510) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x508),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x510) + 0x10));
  }
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x518),0x18,8);
  *(undefined1 *)(param_2 + 0x527) = 1;
  return;
}


