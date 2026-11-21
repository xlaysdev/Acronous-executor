/* Unwind@1800dd9f0 @ 1800dd9f0 */

void Unwind_1800dd9f0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18f8);
  uVar2 = *(undefined8 *)(param_2 + 0x1900);
  uVar3 = *(undefined8 *)(param_2 + 0x1908);
  uVar4 = *(undefined8 *)(param_2 + 0x1910);
  lVar5 = *(longlong *)(param_2 + 0x19a8);
  if (*(char *)(lVar5 + 0xbe7) != '\0') {
    *(undefined8 *)(param_2 + 0x1890) = uVar4;
    *(undefined8 *)(param_2 + 0x1888) = uVar3;
    *(undefined8 *)(param_2 + 0x1880) = uVar2;
    *(undefined8 *)(param_2 + 0x1878) = uVar1;
    FUN_18007c8d0(lVar5 + 0x900);
  }
  *(undefined1 *)(lVar5 + 0xbe7) = 0;
  *(undefined1 *)(lVar5 + 0xbe0) = 2;
  *(undefined8 *)(param_2 + 0x1890) = uVar4;
  *(undefined8 *)(param_2 + 0x1888) = uVar3;
  *(undefined8 *)(param_2 + 0x1880) = uVar2;
  *(undefined8 *)(param_2 + 0x1878) = uVar1;
  return;
}


