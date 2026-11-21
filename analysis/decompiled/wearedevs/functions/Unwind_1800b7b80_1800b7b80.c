/* Unwind@1800b7b80 @ 1800b7b80 */

void Unwind_1800b7b80(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar1 = *(undefined8 *)(param_2 + 0x2f18);
  uVar2 = *(undefined8 *)(param_2 + 0x2f20);
  uVar3 = *(undefined8 *)(param_2 + 0x2f28);
  lVar4 = *(longlong *)(param_2 + 0x2f90);
  if (*(char *)(lVar4 + 0x411) == '\0') {
    *(undefined8 *)(param_2 + 0x2e98) = uVar3;
    *(undefined8 *)(param_2 + 0x2e90) = uVar2;
    *(undefined8 *)(param_2 + 0x2e88) = uVar1;
    return;
  }
  FUN_18000aa80(*(undefined8 *)(lVar4 + 0x340),*(undefined8 *)(lVar4 + 0x348));
  *(undefined8 *)(param_2 + 0x2e98) = uVar3;
  *(undefined8 *)(param_2 + 0x2e90) = uVar2;
  *(undefined8 *)(param_2 + 0x2e88) = uVar1;
  return;
}


