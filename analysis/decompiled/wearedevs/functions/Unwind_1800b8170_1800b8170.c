/* Unwind@1800b8170 @ 1800b8170 */

void Unwind_1800b8170(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x2f90);
  if (*(char *)(lVar1 + 0x53d) != '\0') {
    FUN_18000aa80(*(undefined8 *)(lVar1 + 0x248),*(undefined8 *)(lVar1 + 0x250));
  }
  if (*(char *)(lVar1 + 0x53c) != '\0') {
    plVar2 = *(longlong **)(lVar1 + 0x260);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003cc40(lVar1 + 0x260);
    }
  }
  if ((*(char *)(lVar1 + 0x53b) != '\0') &&
     (plVar2 = *(longlong **)(lVar1 + 0x270), plVar2 != (longlong *)0x0)) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003cc40(lVar1 + 0x270);
    }
  }
  *(undefined1 *)(lVar1 + 0x538) = 2;
  return;
}


