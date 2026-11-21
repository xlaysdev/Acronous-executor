/* FUN_180043680 @ 180043680 */

void FUN_180043680(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  FUN_180042b50();
  plVar1 = *(longlong **)(param_1 + 0x70);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003d670(param_1 + 0x70);
  }
  if (*(char *)(param_1 + 0x68) != '\x02') {
    (**(code **)(*(longlong *)(param_1 + 0x48) + 0x20))
              (*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x50),
               *(undefined8 *)(param_1 + 0x58),param_4,param_1,uVar2);
  }
  plVar1 = *(longlong **)(param_1 + 0x78);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003dca0(param_1 + 0x78);
      return;
    }
  }
  return;
}


