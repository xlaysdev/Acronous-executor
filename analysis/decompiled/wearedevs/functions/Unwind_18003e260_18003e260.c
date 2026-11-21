/* Unwind@18003e260 @ 18003e260 */

void Unwind_18003e260(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_2 + 0x138) != -1) {
    LOCK();
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x138) + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x138),0x200,0x80);
    }
  }
  return;
}


