/* FUN_1800996e0 @ 1800996e0 */

void FUN_1800996e0(int *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 2) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x1e);
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  if ((code *)*puVar2 != (code *)0x0) {
    (*(code *)*puVar2)(uVar1);
  }
  if (puVar2[1] != 0) {
    thunk_FUN_1801d3330(uVar1,puVar2[1],puVar2[2]);
  }
  FUN_1801b2a70(param_1 + 0x24);
  if (*(longlong *)(param_1 + 4) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 6),*(longlong *)(param_1 + 4),1);
  }
  FUN_18007f870();
  if (*(longlong *)(param_1 + 0xc) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0xe),*(longlong *)(param_1 + 0xc) * 0x50,8);
  }
  FUN_18009a810(param_1 + 0x2e);
  if (param_1[0x80] != 2) {
    FUN_1800991d0(param_1 + 0x80);
  }
  FUN_1800777b0(param_1 + 0x86);
  FUN_180124e90();
  FUN_18007c1d0(param_1 + 0x8c);
  FUN_180076020(*(undefined8 *)(param_1 + 0x96));
  return;
}


