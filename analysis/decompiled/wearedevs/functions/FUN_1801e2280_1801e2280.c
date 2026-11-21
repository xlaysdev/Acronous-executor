/* FUN_1801e2280 @ 1801e2280 */

void FUN_1801e2280(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar3 = param_1[3] - param_1[1];
  if (uVar3 != 0) {
    lVar5 = param_1[1] + 0x18;
    lVar4 = 1 - (uVar3 >> 4);
    do {
      uVar1 = *(undefined8 *)(lVar5 + -0x18);
      puVar2 = *(undefined8 **)(lVar5 + -0x10);
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(uVar1);
      }
      if (puVar2[1] != 0) {
        thunk_FUN_1801d3330(uVar1,puVar2[1],puVar2[2]);
      }
      lVar5 = lVar5 + 0x10;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 1);
  }
  if (param_1[2] == 0) {
    return;
  }
  thunk_FUN_1801d3330(*param_1,param_1[2] << 4,8);
  return;
}


