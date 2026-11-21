/* Unwind@180113760 @ 180113760 */

void Unwind_180113760(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x38),0x10,8);
  plVar1 = *(longlong **)(param_2 + 0x30);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003cd00(param_2 + 0x28);
  }
  return;
}


