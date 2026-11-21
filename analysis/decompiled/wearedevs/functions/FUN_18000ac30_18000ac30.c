/* FUN_18000ac30 @ 18000ac30 */

void FUN_18000ac30(int *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*param_1 != 4) {
    FUN_18002f100();
    if (*(longlong *)(param_1 + 0x18) != 0) {
      thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x1a),*(longlong *)(param_1 + 0x18) << 5,8);
    }
    if (*param_1 != 3) {
      FUN_18000b470(param_1);
    }
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = *(undefined8 **)(param_1 + 0x22);
  if ((code *)*puVar2 != (code *)0x0) {
    (*(code *)*puVar2)(uVar1);
  }
  if (puVar2[1] == 0) {
    return;
  }
  thunk_FUN_1801d3330(uVar1,puVar2[1],puVar2[2]);
  return;
}


