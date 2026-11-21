/* Unwind@1800b7e10 @ 1800b7e10 */

void Unwind_1800b7e10(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar1 = *(undefined8 *)(param_2 + 0x2ec8);
  uVar2 = *(undefined8 *)(param_2 + 0x2ed0);
  uVar3 = *(undefined8 *)(param_2 + 0x2ed8);
  lVar4 = *(longlong *)(param_2 + 0x2f90);
  *(undefined1 *)(lVar4 + 0x530) = 0;
  if (*(char *)(lVar4 + 0x531) == '\0') {
    *(undefined8 *)(param_2 + 0x2e80) = uVar3;
    *(undefined8 *)(param_2 + 0x2e78) = uVar2;
    *(undefined8 *)(param_2 + 0x2e70) = uVar1;
    return;
  }
  plVar5 = *(longlong **)(lVar4 + 0x438);
  LOCK();
  *plVar5 = *plVar5 + -1;
  UNLOCK();
  if (*plVar5 == 0) {
    FUN_18003cc40(lVar4 + 0x438);
  }
  *(undefined8 *)(param_2 + 0x2e80) = uVar3;
  *(undefined8 *)(param_2 + 0x2e78) = uVar2;
  *(undefined8 *)(param_2 + 0x2e70) = uVar1;
  return;
}


