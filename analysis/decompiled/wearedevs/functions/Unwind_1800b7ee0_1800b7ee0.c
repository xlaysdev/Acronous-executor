/* Unwind@1800b7ee0 @ 1800b7ee0 */

void Unwind_1800b7ee0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar1 = *(undefined8 *)(param_2 + 0x2e70);
  uVar2 = *(undefined8 *)(param_2 + 0x2e78);
  uVar3 = *(undefined8 *)(param_2 + 0x2e80);
  lVar4 = *(longlong *)(param_2 + 0x2f90);
  *(undefined1 *)(lVar4 + 0x531) = 0;
  if (*(char *)(lVar4 + 0x532) == '\0') {
    *(undefined8 *)(param_2 + 0x2e68) = uVar3;
    *(undefined8 *)(param_2 + 0x2e60) = uVar2;
    *(undefined8 *)(param_2 + 0x2e58) = uVar1;
    return;
  }
  FUN_1800777b0(lVar4 + 0x428);
  *(undefined8 *)(param_2 + 0x2e68) = uVar3;
  *(undefined8 *)(param_2 + 0x2e60) = uVar2;
  *(undefined8 *)(param_2 + 0x2e58) = uVar1;
  return;
}


