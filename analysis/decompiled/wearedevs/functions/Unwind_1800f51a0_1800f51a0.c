/* Unwind@1800f51a0 @ 1800f51a0 */

void Unwind_1800f51a0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x1340);
  if (*(char *)(lVar1 + 0x5aa) != '\0') {
    FUN_180042b50(lVar1 + 0x268);
    if (*(char *)(lVar1 + 0x5aa) != '\0') {
      plVar2 = *(longlong **)(lVar1 + 0x2d8);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_18003d670(lVar1 + 0x2d8);
      }
    }
  }
  if (((*(char *)(lVar1 + 0x5ab) != '\0') && (*(char *)(lVar1 + 0x2d0) != '\x02')) &&
     (*(char *)(lVar1 + 0x5af) == '\x01')) {
    (**(code **)(*(longlong *)(lVar1 + 0x2b0) + 0x20))
              (*(undefined8 *)(lVar1 + 0x2c8),*(undefined8 *)(lVar1 + 0x2b8),
               *(undefined8 *)(lVar1 + 0x2c0));
  }
  if (*(char *)(lVar1 + 0x5aa) == '\0') {
    return;
  }
  plVar2 = *(longlong **)(lVar1 + 0x2e0);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003dca0(lVar1 + 0x2e0);
    }
  }
  return;
}


