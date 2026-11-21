/* Unwind@1801d72a0 @ 1801d72a0 */

void Unwind_1801d72a0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  FUN_1801e2520(*(undefined8 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x5c));
  plVar1 = *(longlong **)(param_2 + 0x40);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1801e37a0(param_2 + 0x28);
  }
  return;
}


