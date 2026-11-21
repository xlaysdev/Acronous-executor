/* Unwind@1800d0320 @ 1800d0320 */

void Unwind_1800d0320(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *(longlong *)(param_2 + 0x858);
  *(undefined1 *)(lVar2 + 0x3e2) = 0;
  if (*(char *)(lVar2 + 0x3e3) != '\0') {
    FUN_18000adf0(param_2 + 0x7c0);
  }
  *(undefined1 *)(lVar2 + 0x3e3) = 0;
  FUN_180041bb0(lVar2 + 0x308);
  if (*(char *)(lVar2 + 0x3e4) != '\0') {
    FUN_18000b230(lVar2 + 0x2e8);
  }
  plVar3 = *(longlong **)(lVar2 + 0x358);
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    FUN_18003d670(lVar2 + 0x358);
    cVar1 = *(char *)(lVar2 + 0x350);
  }
  else {
    cVar1 = *(char *)(lVar2 + 0x350);
  }
  if (cVar1 == '\x02') {
    plVar3 = *(longlong **)(lVar2 + 0x360);
  }
  else {
    (**(code **)(*(longlong *)(lVar2 + 0x330) + 0x20))
              (*(undefined8 *)(lVar2 + 0x348),*(undefined8 *)(lVar2 + 0x338),
               *(undefined8 *)(lVar2 + 0x340));
    plVar3 = *(longlong **)(lVar2 + 0x360);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_18003dca0(*(longlong *)(param_2 + 0x858) + 0x360);
    }
  }
  return;
}


