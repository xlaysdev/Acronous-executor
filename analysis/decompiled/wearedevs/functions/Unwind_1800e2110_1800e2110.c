/* Unwind@1800e2110 @ 1800e2110 */

void Unwind_1800e2110(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x40);
  *(undefined1 *)(lVar1 + 0x530) = 0;
  plVar2 = *(longlong **)(lVar1 + 0x438);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_18003cc40(*(longlong *)(param_2 + 0x40) + 0x438);
  }
  return;
}


