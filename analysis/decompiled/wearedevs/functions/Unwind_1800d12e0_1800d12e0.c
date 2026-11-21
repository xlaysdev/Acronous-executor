/* Unwind@1800d12e0 @ 1800d12e0 */

void Unwind_1800d12e0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  longlong *plVar2;
  
  bVar1 = *(byte *)(param_2 + 0x23e);
  if (*(char *)(param_2 + 0x23f) == '\0') goto LAB_1800d130c;
  FUN_180042b50(param_2 + 0x140);
  plVar2 = *(longlong **)(param_2 + 0x1b0);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_18003d670(param_2 + 0x1b0);
    if (*(char *)(param_2 + 0x1a8) != '\x02') goto LAB_1800d1375;
LAB_1800d1344:
    plVar2 = *(longlong **)(param_2 + 0x1b8);
  }
  else {
    if (*(char *)(param_2 + 0x1a8) == '\x02') goto LAB_1800d1344;
LAB_1800d1375:
    (**(code **)(*(longlong *)(param_2 + 0x188) + 0x20))
              (*(undefined8 *)(param_2 + 0x1a0),*(undefined8 *)(param_2 + 400),
               *(undefined8 *)(param_2 + 0x198));
    plVar2 = *(longlong **)(param_2 + 0x1b8);
  }
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003dca0(param_2 + 0x1b8);
    }
  }
LAB_1800d130c:
  if ((bVar1 & 1) != 0) {
    FUN_1800433d0(*(undefined8 *)(param_2 + 0x218));
  }
  return;
}


