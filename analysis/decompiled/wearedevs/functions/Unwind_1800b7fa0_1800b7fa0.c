/* Unwind@1800b7fa0 @ 1800b7fa0 */

void Unwind_1800b7fa0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar1 = *(undefined8 *)(param_2 + 0x2e58);
  uVar2 = *(undefined8 *)(param_2 + 0x2e60);
  uVar3 = *(undefined8 *)(param_2 + 0x2e68);
  lVar4 = *(longlong *)(param_2 + 0x2f90);
  *(undefined1 *)(lVar4 + 0x532) = 0;
  if (*(char *)(lVar4 + 0x533) != '\0') {
    *(undefined8 *)(param_2 + 0x2ec0) = uVar3;
    FUN_18000aa80(uVar1,uVar2);
  }
  *(undefined2 *)(lVar4 + 0x533) = 0x200;
  *(undefined8 *)(param_2 + 0x2ec0) = uVar3;
  return;
}


