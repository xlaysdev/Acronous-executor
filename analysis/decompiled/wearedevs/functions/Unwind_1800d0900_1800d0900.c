/* Unwind@1800d0900 @ 1800d0900 */

void Unwind_1800d0900(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  longlong *plVar2;
  
  if (*(char *)(param_2 + 0xd8) != '\x02') {
    pcVar1 = *(code **)(*(longlong *)(param_2 + 0x98) + 0x20);
    *(undefined1 *)(param_2 + 0xf7) = 0;
    (*pcVar1)(*(undefined8 *)(param_2 + 0x90),*(undefined8 *)(param_2 + 0x88),
              *(undefined8 *)(param_2 + 200));
  }
  plVar2 = *(longlong **)(param_2 + 0xe0);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    *(undefined1 *)(param_2 + 0xf7) = 0;
    FUN_18003d670(param_2 + 0x80);
  }
  *(undefined1 *)(param_2 + 0xf7) = 0;
  FUN_18000b230(param_2 + 0x60);
  *(undefined1 *)(param_2 + 0xf7) = 0;
  FUN_180041bb0(param_2 + 0xa0);
  *(undefined1 *)(param_2 + 0xf7) = 0;
  return;
}


