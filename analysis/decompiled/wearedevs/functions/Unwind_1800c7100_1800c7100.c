/* Unwind@1800c7100 @ 1800c7100 */

void Unwind_1800c7100(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *(longlong *)(param_2 + 0x30);
  *(undefined1 *)(lVar2 + 0x274) = 0;
  plVar3 = *(longlong **)(lVar2 + 0x158);
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    FUN_18003d670(*(longlong *)(param_2 + 0x30) + 0x158);
    cVar1 = *(char *)(*(longlong *)(param_2 + 0x30) + 0x150);
  }
  else {
    cVar1 = *(char *)(*(longlong *)(param_2 + 0x30) + 0x150);
  }
  if (cVar1 == '\x02') {
    plVar3 = *(longlong **)(*(longlong *)(param_2 + 0x30) + 0x160);
  }
  else {
    lVar2 = *(longlong *)(param_2 + 0x30);
    (**(code **)(*(longlong *)(lVar2 + 0x130) + 0x20))
              (*(undefined8 *)(lVar2 + 0x148),*(undefined8 *)(lVar2 + 0x138),
               *(undefined8 *)(lVar2 + 0x140));
    plVar3 = *(longlong **)(*(longlong *)(param_2 + 0x30) + 0x160);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_18003dca0(*(longlong *)(param_2 + 0x30) + 0x160);
    }
  }
  return;
}


