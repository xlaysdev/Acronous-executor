/* Unwind@1800f1680 @ 1800f1680 */

void Unwind_1800f1680(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *(longlong *)(param_2 + 0x4c8);
  if (*(char *)(lVar2 + 0x274) != '\0') {
    FUN_18000adf0(lVar2 + 0x178);
  }
  *(undefined1 *)(lVar2 + 0x274) = 0;
  plVar3 = *(longlong **)(lVar2 + 0x158);
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    FUN_18003d670(lVar2 + 0x158);
    cVar1 = *(char *)(lVar2 + 0x150);
  }
  else {
    cVar1 = *(char *)(lVar2 + 0x150);
  }
  if (cVar1 == '\x02') {
    plVar3 = *(longlong **)(lVar2 + 0x160);
  }
  else {
    (**(code **)(*(longlong *)(lVar2 + 0x130) + 0x20))
              (*(undefined8 *)(lVar2 + 0x148),*(undefined8 *)(lVar2 + 0x138),
               *(undefined8 *)(lVar2 + 0x140));
    plVar3 = *(longlong **)(lVar2 + 0x160);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_18003dca0(*(longlong *)(param_2 + 0x4c8) + 0x160);
    }
  }
  return;
}


