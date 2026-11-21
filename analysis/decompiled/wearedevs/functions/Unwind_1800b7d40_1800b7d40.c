/* Unwind@1800b7d40 @ 1800b7d40 */

void Unwind_1800b7d40(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar1 = *(undefined8 *)(param_2 + 0x2ee8);
  uVar2 = *(undefined8 *)(param_2 + 0x2ef0);
  uVar3 = *(undefined8 *)(param_2 + 0x2ef8);
  lVar4 = *(longlong *)(param_2 + 0x2f90);
  if (*(char *)(lVar4 + 0x530) == '\0') {
    *(undefined8 *)(param_2 + 0x2ed8) = uVar3;
    *(undefined8 *)(param_2 + 0x2ed0) = uVar2;
    *(undefined8 *)(param_2 + 0x2ec8) = uVar1;
    return;
  }
  plVar5 = *(longlong **)(lVar4 + 0x448);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      FUN_18003cc40(lVar4 + 0x448);
    }
  }
  *(undefined8 *)(param_2 + 0x2ed8) = uVar3;
  *(undefined8 *)(param_2 + 0x2ed0) = uVar2;
  *(undefined8 *)(param_2 + 0x2ec8) = uVar1;
  return;
}


