/* FUN_1800b0580 @ 1800b0580 */

void FUN_1800b0580(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x168);
  puVar2 = *(undefined8 **)(param_1 + 0x170);
  if ((code *)*puVar2 != (code *)0x0) {
    (*(code *)*puVar2)(uVar1);
  }
  if (puVar2[1] != 0) {
    thunk_FUN_1801d3330(uVar1,puVar2[1],puVar2[2]);
  }
  FUN_1800af6f0(param_1);
  return;
}


