/* Unwind@18010da60 @ 18010da60 */

void Unwind_18010da60(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x80);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003cd00((undefined8 *)(param_2 + 0x80));
  }
  return;
}


