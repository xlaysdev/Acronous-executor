/* FUN_1801049f0 @ 1801049f0 */

void FUN_1801049f0(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong local_40;
  longlong local_30;
  
  if (*param_1 == 4) {
    return;
  }
  if ((int)*param_1 == 3) {
    lVar5 = param_1[1];
    if (lVar5 != 0) {
      puVar9 = (undefined8 *)param_1[2];
      if ((code *)*puVar9 != (code *)0x0) {
        (*(code *)*puVar9)(lVar5);
      }
      if (puVar9[1] != 0) {
        thunk_FUN_1801d3330(lVar5,puVar9[1],puVar9[2]);
      }
    }
    FUN_180067d30(param_1 + 3);
    return;
  }
  if (param_1[10] != 0) {
    thunk_FUN_1801d3330(param_1[9],param_1[10] << 2,2);
  }
  lVar5 = param_1[4];
  lVar6 = param_1[5];
  local_40 = 0;
  while (local_40 != lVar6) {
    lVar8 = local_40 * 0x68;
    lVar4 = lVar5 + lVar8;
    local_40 = local_40 + 1;
    lVar8 = *(longlong *)(lVar5 + 0x40 + lVar8);
    if (lVar8 != 0) {
      (**(code **)(lVar8 + 0x20))
                (*(undefined8 *)(lVar4 + 0x58),*(undefined8 *)(lVar4 + 0x48),
                 *(undefined8 *)(lVar4 + 0x50));
    }
    (**(code **)(*(longlong *)(lVar4 + 0x18) + 0x20))
              (*(undefined8 *)(lVar4 + 0x30),*(undefined8 *)(lVar4 + 0x20),
               *(undefined8 *)(lVar4 + 0x28));
  }
  if (param_1[3] != 0) {
    thunk_FUN_1801d3330(param_1[4],param_1[3] * 0x68,8);
  }
  lVar5 = param_1[8];
  puVar9 = (undefined8 *)(param_1[7] + 0x38);
  local_30 = 0;
  while (lVar5 != local_30) {
    local_30 = local_30 + 1;
    uVar7 = *puVar9;
    plVar1 = puVar9 + -3;
    puVar2 = puVar9 + -2;
    puVar3 = puVar9 + -1;
    puVar9 = puVar9 + 9;
    (**(code **)(*plVar1 + 0x20))(uVar7,*puVar2,*puVar3);
  }
  if (param_1[6] != 0) {
    thunk_FUN_1801d3330(param_1[7],param_1[6] * 0x48,8);
  }
  lVar5 = param_1[0xc];
  if (lVar5 != 0) {
    FUN_18002a190();
    thunk_FUN_1801d3330(lVar5,0x20,8);
  }
  FUN_180104ed0(param_1 + 0xe);
  return;
}


