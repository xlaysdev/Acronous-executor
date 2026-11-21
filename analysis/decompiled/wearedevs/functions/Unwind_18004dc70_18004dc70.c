/* Unwind@18004dc70 @ 18004dc70 */

void Unwind_18004dc70(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x1400) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x1430),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x1400) + 0x10));
  }
  *(undefined1 *)(param_2 + 0x1445) = 0;
  *(undefined1 *)(param_2 + 0x1444) = 1;
  return;
}


