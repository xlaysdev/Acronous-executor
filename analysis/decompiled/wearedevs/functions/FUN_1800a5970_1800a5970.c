/* FUN_1800a5970 @ 1800a5970 */

void FUN_1800a5970(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  puVar2 = *(undefined8 **)(param_1 + 0x80);
  if ((code *)*puVar2 != (code *)0x0) {
    (*(code *)*puVar2)(uVar1);
  }
  if (puVar2[1] != 0) {
    thunk_FUN_1801d3330(uVar1,puVar2[1],puVar2[2]);
  }
  FUN_1801b2a70(param_1 + 0x90);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x18),*(longlong *)(param_1 + 0x10),1);
  }
  FUN_18007f870();
  if (*(longlong *)(param_1 + 0x30) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x38),*(longlong *)(param_1 + 0x30) * 0x50,8);
  }
  FUN_1800a6c20(param_1 + 0xb8);
  return;
}


