/* Unwind@18006dfd0 @ 18006dfd0 */

void Unwind_18006dfd0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x440) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x438),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x440) + 0x10));
  }
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x3f8),0x18,8);
  *(undefined1 *)(param_2 + 0x464) = 1;
  *(undefined1 *)(param_2 + 0x463) = 1;
  return;
}


