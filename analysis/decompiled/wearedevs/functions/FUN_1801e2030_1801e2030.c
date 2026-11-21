/* FUN_1801e2030 @ 1801e2030 */

void FUN_1801e2030(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  if (lVar2 != 0) {
    plVar6 = (longlong *)(lVar1 + 8);
    lVar5 = 1;
    do {
      lVar3 = plVar6[-1];
      puVar4 = (undefined8 *)*plVar6;
      if ((code *)*puVar4 != (code *)0x0) {
        (*(code *)*puVar4)(lVar3);
      }
      if (puVar4[1] != 0) {
        thunk_FUN_1801d3330(lVar3,puVar4[1],puVar4[2]);
      }
      plVar6 = plVar6 + 2;
      bVar7 = lVar5 != lVar2;
      lVar5 = lVar5 + 1;
    } while (bVar7);
  }
  if (*param_1 == 0) {
    return;
  }
  thunk_FUN_1801d3330(lVar1,*param_1 << 4,8);
  return;
}


