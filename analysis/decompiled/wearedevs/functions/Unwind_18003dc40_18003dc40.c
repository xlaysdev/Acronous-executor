/* Unwind@18003dc40 @ 18003dc40 */

void Unwind_18003dc40(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 8);
  if (lVar2 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x28),lVar2,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x10));
  }
  if (*(longlong *)(param_2 + 0x38) != -1) {
    LOCK();
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x38) + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x38),0x28,8);
    }
  }
  return;
}


