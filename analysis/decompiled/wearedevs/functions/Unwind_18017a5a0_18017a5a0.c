/* Unwind@18017a5a0 @ 18017a5a0 */

void Unwind_18017a5a0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x88) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x80),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x10));
  }
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined1 *)(param_2 + 0x97) = 0;
  *(undefined1 *)(param_2 + 0x96) = 0;
  *(undefined1 *)(param_2 + 0x95) = 1;
  return;
}


