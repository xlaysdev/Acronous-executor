/* Unwind@18003fe70 @ 18003fe70 */

void Unwind_18003fe70(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x248) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x240),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x248) + 0x10));
  }
  return;
}


