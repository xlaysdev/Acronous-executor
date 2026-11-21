/* Unwind@1800af490 @ 1800af490 */

void Unwind_1800af490(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)**(undefined8 **)(param_2 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18013bb80(*(undefined8 *)(param_2 + 0x20));
  }
  return;
}


