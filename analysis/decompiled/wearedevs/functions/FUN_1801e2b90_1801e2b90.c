/* FUN_1801e2b90 @ 1801e2b90 */

void FUN_1801e2b90(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*param_1 == 0) {
    return;
  }
  lVar1 = *param_1;
  if (((uint)lVar1 & 3) != 1) {
    return;
  }
  uVar2 = *(undefined8 *)(lVar1 + -1);
  puVar3 = *(undefined8 **)(lVar1 + 7);
  if ((code *)*puVar3 != (code *)0x0) {
    (*(code *)*puVar3)(uVar2);
  }
  if (puVar3[1] != 0) {
    thunk_FUN_1801d3330(uVar2,puVar3[1],puVar3[2]);
  }
  thunk_FUN_1801d3330(lVar1 + -1,0x18,8);
  return;
}


