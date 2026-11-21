/* Unwind@18004a010 @ 18004a010 */

void Unwind_18004a010(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0xd98);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003dbb0(param_2 + 0xb30);
  }
  return;
}


