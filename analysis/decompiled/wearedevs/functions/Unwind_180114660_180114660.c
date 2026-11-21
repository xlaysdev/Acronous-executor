/* Unwind@180114660 @ 180114660 */

void Unwind_180114660(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x40);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180113f90(*(undefined8 *)(param_2 + 0x30));
  }
  return;
}


