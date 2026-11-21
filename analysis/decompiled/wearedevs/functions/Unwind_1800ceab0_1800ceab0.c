/* Unwind@1800ceab0 @ 1800ceab0 */

void Unwind_1800ceab0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x2b30);
  if (*(char *)(lVar1 + 0x10aa) != '\0') {
    FUN_180042b50(lVar1 + 0xd68);
    if (*(char *)(lVar1 + 0x10aa) != '\0') {
      plVar2 = *(longlong **)(lVar1 + 0xdd8);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_18003d670(lVar1 + 0xdd8);
      }
    }
  }
  if (((*(char *)(lVar1 + 0x10ab) != '\0') && (*(char *)(lVar1 + 0xdd0) != '\x02')) &&
     (*(char *)(lVar1 + 0x10af) == '\x01')) {
    (**(code **)(*(longlong *)(lVar1 + 0xdb0) + 0x20))
              (*(undefined8 *)(lVar1 + 0xdc8),*(undefined8 *)(lVar1 + 0xdb8),
               *(undefined8 *)(lVar1 + 0xdc0));
  }
  if (*(char *)(lVar1 + 0x10aa) == '\0') {
    return;
  }
  plVar2 = *(longlong **)(lVar1 + 0xde0);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003dca0(*(longlong *)(param_2 + 0x2b30) + 0xde0);
    }
  }
  return;
}


