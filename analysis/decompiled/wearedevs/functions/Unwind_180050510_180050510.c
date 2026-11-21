/* Unwind@180050510 @ 180050510 */

void Unwind_180050510(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  FUN_18005a290(param_2 + 0x108);
  FUN_180032b40(param_2 + 0x130);
  lVar4 = *(longlong *)(param_2 + 0x120);
  lVar5 = *(longlong *)(param_2 + 0x128);
  puVar7 = (undefined8 *)(lVar4 + 0x38);
  lVar8 = 0;
  if (lVar5 != 0) {
    do {
      lVar8 = lVar8 + 1;
      uVar6 = *puVar7;
      plVar1 = puVar7 + -3;
      puVar2 = puVar7 + -2;
      puVar3 = puVar7 + -1;
      puVar7 = puVar7 + 9;
      (**(code **)(*plVar1 + 0x20))(uVar6,*puVar2,*puVar3);
    } while (lVar5 != lVar8);
  }
  if (*(longlong *)(param_2 + 0x118) != 0) {
    thunk_FUN_1801d3330(lVar4,*(longlong *)(param_2 + 0x118) * 0x48,8);
  }
  return;
}


