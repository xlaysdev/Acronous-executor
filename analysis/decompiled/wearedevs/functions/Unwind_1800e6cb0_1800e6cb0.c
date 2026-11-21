/* Unwind@1800e6cb0 @ 1800e6cb0 */

void Unwind_1800e6cb0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)(param_2 + 0x53f);
  FUN_1800ef820(param_2 + 0x4c8);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_2 + 0x53e) = 0;
    return;
  }
  plVar2 = *(longlong **)(param_2 + 0x528);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_18003d7f0(param_2 + 0x520);
  }
  *(undefined1 *)(param_2 + 0x53e) = 1;
  return;
}


