/* Unwind@180049870 @ 180049870 */

void Unwind_180049870(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0xdaf);
  if (*(char *)(param_2 + 0xdae) == '\0') {
    *(undefined1 *)(param_2 + 0xdc8) = 0;
    *(undefined1 *)(param_2 + 0xdc7) = 1;
    *(undefined1 *)(param_2 + 0xdc6) = uVar1;
    *(undefined1 *)(param_2 + 0xdc5) = 1;
    *(undefined1 *)(param_2 + 0xdc4) = 1;
    *(undefined1 *)(param_2 + 0xdc3) = 1;
    *(undefined1 *)(param_2 + 0xdc2) = 1;
    return;
  }
  plVar2 = *(longlong **)(param_2 + 0xb90);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_18003cc40(param_2 + 0xb90);
  }
  *(undefined1 *)(param_2 + 0xdc8) = 1;
  *(undefined1 *)(param_2 + 0xdc7) = 1;
  *(undefined1 *)(param_2 + 0xdc6) = uVar1;
  *(undefined1 *)(param_2 + 0xdc5) = 1;
  *(undefined1 *)(param_2 + 0xdc4) = 1;
  *(undefined1 *)(param_2 + 0xdc3) = 1;
  *(undefined1 *)(param_2 + 0xdc2) = 1;
  return;
}


