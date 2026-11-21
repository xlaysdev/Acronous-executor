/* FUN_1801cbc30 @ 1801cbc30 */

void FUN_1801cbc30(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*param_1 == 1) {
    lVar1 = param_1[1];
    if (((uint)lVar1 & 3) == 1) {
      uVar2 = *(undefined8 *)(lVar1 + -1);
      puVar3 = *(undefined8 **)(lVar1 + 7);
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)(uVar2);
      }
      if (puVar3[1] != 0) {
        thunk_FUN_1801d3330(uVar2,puVar3[1],puVar3[2]);
      }
      thunk_FUN_1801d3330(lVar1 + -1,0x18,8);
    }
  }
  else if ((*param_1 == 0) && (param_1[2] != 0)) {
    thunk_FUN_1801d3330(param_1[1],param_1[2],1);
  }
  thunk_FUN_1801d3330(param_1,0x28,8);
  return;
}


