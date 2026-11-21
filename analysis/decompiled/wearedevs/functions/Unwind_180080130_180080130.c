/* Unwind@180080130 @ 180080130 */

void Unwind_180080130(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0xfe);
  plVar2 = *(longlong **)(param_2 + 0xe8);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_18003cf20(param_2 + 0xe8);
  }
  *(undefined1 *)(param_2 + 0xff) = uVar1;
  return;
}


