/* Unwind@1800dc870 @ 1800dc870 */

void Unwind_1800dc870(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x19a0);
  *(undefined8 *)(param_2 + 0x1928) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x1990);
  *(undefined8 *)(param_2 + 0x1920) = uVar2;
  uVar3 = *(undefined8 *)(param_2 + 0x1988);
  *(undefined8 *)(param_2 + 0x1918) = uVar3;
  FUN_18007a9b0(*(undefined1 *)(param_2 + 0x13f0),*(undefined8 *)(param_2 + 0x13f8));
  *(undefined8 *)(param_2 + 0x1928) = uVar1;
  *(undefined8 *)(param_2 + 0x1920) = uVar2;
  *(undefined8 *)(param_2 + 0x1918) = uVar3;
  return;
}


