/* Unwind@1800dd090 @ 1800dd090 */

void Unwind_1800dd090(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_2 + 0x17a8);
  uVar2 = *(undefined8 *)(param_2 + 0x17b0);
  uVar3 = *(undefined8 *)(param_2 + 0x17b8);
  uVar4 = *(undefined8 *)(param_2 + 0x17c0);
  if (*(char *)(*(longlong *)(param_2 + 0x19a8) + 0xbe2) == '\0') {
    *(undefined8 *)(param_2 + 0x17a0) = uVar4;
    *(undefined8 *)(param_2 + 0x1798) = uVar3;
    *(undefined8 *)(param_2 + 0x1790) = uVar2;
    *(undefined8 *)(param_2 + 0x1788) = uVar1;
    return;
  }
  FUN_1800dfe30(param_2 + 0x13f0);
  *(undefined8 *)(param_2 + 0x17a0) = uVar4;
  *(undefined8 *)(param_2 + 0x1798) = uVar3;
  *(undefined8 *)(param_2 + 0x1790) = uVar2;
  *(undefined8 *)(param_2 + 0x1788) = uVar1;
  return;
}


