/* Unwind@1800f2760 @ 1800f2760 */

void Unwind_1800f2760(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *(longlong *)(param_2 + 1000);
  *(undefined1 *)(lVar2 + 0x252) = 0;
  if (*(char *)(lVar2 + 0x253) != '\0') {
    FUN_18000adf0(param_2 + 0x370);
  }
  *(undefined1 *)(lVar2 + 0x253) = 0;
  FUN_180041bb0(lVar2 + 0x178);
  if (*(char *)(lVar2 + 0x254) != '\0') {
    FUN_18000b230(lVar2 + 0x158);
  }
  plVar3 = *(longlong **)(lVar2 + 0x1c8);
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    FUN_18003d670(lVar2 + 0x1c8);
    cVar1 = *(char *)(lVar2 + 0x1c0);
  }
  else {
    cVar1 = *(char *)(lVar2 + 0x1c0);
  }
  if (cVar1 == '\x02') {
    plVar3 = *(longlong **)(lVar2 + 0x1d0);
  }
  else {
    (**(code **)(*(longlong *)(lVar2 + 0x1a0) + 0x20))
              (*(undefined8 *)(lVar2 + 0x1b8),*(undefined8 *)(lVar2 + 0x1a8),
               *(undefined8 *)(lVar2 + 0x1b0));
    plVar3 = *(longlong **)(lVar2 + 0x1d0);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_18003dca0(lVar2 + 0x1d0);
    }
  }
  return;
}


