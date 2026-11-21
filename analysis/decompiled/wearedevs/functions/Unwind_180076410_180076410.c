/* Unwind@180076410 @ 180076410 */

void Unwind_180076410(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x48) + 0x580);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180114260(*(longlong *)(param_2 + 0x48) + 0x580);
  }
  return;
}


