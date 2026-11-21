/* FUN_18002f100 @ 18002f100 */

void FUN_18002f100(ulonglong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_40;
  undefined8 *local_38;
  longlong local_30;
  
  uVar4 = param_1[3];
  if (uVar4 == 0) {
    local_30 = 0;
    uVar6 = 0;
    lVar9 = 0;
  }
  else {
    uVar6 = *param_1;
    uVar7 = 0;
    if (uVar6 <= param_1[2]) {
      uVar7 = uVar6;
    }
    lVar9 = param_1[2] - uVar7;
    local_30 = uVar4 - (uVar6 - lVar9);
    if (uVar4 < uVar6 - lVar9 || local_30 == 0) {
      uVar6 = uVar4 + lVar9;
      local_30 = 0;
    }
  }
  uVar4 = param_1[1];
  puVar8 = (undefined8 *)(lVar9 * 0x20 + uVar4 + 0x18);
  local_40 = 0;
  while (uVar6 - lVar9 != local_40) {
    local_40 = local_40 + 1;
    uVar5 = *puVar8;
    plVar1 = puVar8 + -3;
    puVar2 = puVar8 + -2;
    puVar3 = puVar8 + -1;
    puVar8 = puVar8 + 4;
    (**(code **)(*plVar1 + 0x20))(uVar5,*puVar2,*puVar3);
  }
  local_38 = (undefined8 *)(uVar4 + 0x18);
  while (bVar10 = local_30 != 0, local_30 = local_30 + -1, bVar10) {
    uVar5 = *local_38;
    plVar1 = local_38 + -3;
    puVar8 = local_38 + -2;
    puVar2 = local_38 + -1;
    local_38 = local_38 + 4;
    (**(code **)(*plVar1 + 0x20))(uVar5,*puVar8,*puVar2);
  }
  return;
}


