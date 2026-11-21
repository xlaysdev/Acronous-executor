/* Unwind@1800e7230 @ 1800e7230 */

void Unwind_1800e7230(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)(param_2 + 0x32f);
  FUN_1800ef820(param_2 + 0x2b8);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_2 + 0x32e) = 0;
    return;
  }
  plVar2 = *(longlong **)(param_2 + 0x318);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_18003d7f0(param_2 + 0x310);
  }
  *(undefined1 *)(param_2 + 0x32e) = 1;
  return;
}


