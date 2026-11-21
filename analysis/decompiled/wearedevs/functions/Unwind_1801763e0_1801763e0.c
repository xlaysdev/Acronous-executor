/* Unwind@1801763e0 @ 1801763e0 */

void Unwind_1801763e0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x78) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0xc0),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x78) + 0x10));
  }
  *(char *)(param_2 + 0xdf) = (char)*(undefined4 *)(param_2 + 0xd4);
  *(undefined1 *)(param_2 + 0xde) = 0;
  *(undefined1 *)(param_2 + 0xdd) = 0;
  return;
}


