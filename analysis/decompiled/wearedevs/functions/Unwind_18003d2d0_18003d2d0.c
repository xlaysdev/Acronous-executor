/* Unwind@18003d2d0 @ 18003d2d0 */

void Unwind_18003d2d0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_2 + 0x38) != -1) {
    LOCK();
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x38) + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x38),0xe8,8);
    }
  }
  return;
}


