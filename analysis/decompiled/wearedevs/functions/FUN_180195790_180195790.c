/* FUN_180195790 @ 180195790 */

void FUN_180195790(longlong *param_1,longlong *param_2,longlong param_3,byte *param_4,byte *param_5)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  longlong lVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  byte *pbVar12;
  byte *local_a0;
  byte *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  longlong local_80;
  byte *local_78;
  undefined *local_70;
  longlong local_68;
  longlong *local_60;
  byte *local_58;
  longlong *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_68 = param_3;
  local_60 = param_1;
  local_50 = param_2;
  if (*(int *)(param_3 + 0x20) == 1) {
    pbVar6 = (byte *)(ulonglong)*(uint *)(param_3 + 0x24);
    pbVar8 = *(byte **)(param_3 + 8);
    if (pbVar6 == (byte *)0x0) {
      local_58 = (byte *)0x0;
    }
    else {
      local_58 = *(byte **)(param_3 + 0x10);
      if (pbVar6 < local_58) {
        if ((char)pbVar8[(longlong)pbVar6] < -0x40) {
LAB_180195b2b:
                    /* WARNING: Subroutine does not return */
          FUN_1802018d0(pbVar8,local_58,0,pbVar6,&PTR_s_C__Users_burne__cargo_registry_s_180267668);
        }
        local_58 = pbVar6;
      }
      else if (local_58 != pbVar6) goto LAB_180195b2b;
    }
  }
  else {
    pbVar8 = *(byte **)(param_3 + 8);
    local_58 = *(byte **)(param_3 + 0x10);
  }
  pbVar6 = (byte *)*param_2;
  lVar5 = param_2[2];
  if (pbVar6 + -lVar5 < param_5 + ((longlong)local_58 - (longlong)param_4)) {
    FUN_1801f6a80(param_2,lVar5,param_5 + ((longlong)local_58 - (longlong)param_4),1,1);
    pbVar6 = (byte *)*local_50;
    lVar5 = local_50[2];
    if (local_58 <= pbVar6 + -lVar5) goto LAB_18019583a;
  }
  else if (local_58 <= pbVar6 + -lVar5) goto LAB_18019583a;
  FUN_1801f6a80(local_50,lVar5,local_58,1,1);
  pbVar6 = (byte *)*local_50;
  lVar5 = local_50[2];
LAB_18019583a:
  plVar10 = local_50;
  pbVar12 = local_58;
  lVar9 = local_50[1];
  memcpy((void *)(lVar9 + lVar5),pbVar8,(size_t)local_58);
  pbVar12 = pbVar12 + lVar5;
  plVar10[2] = (longlong)pbVar12;
  pbVar4 = pbVar12;
  if (pbVar6 == pbVar12) {
    FUN_1801f6a80(plVar10,pbVar6,1,1,1);
    lVar9 = local_50[1];
    pbVar4 = (byte *)local_50[2];
    pbVar8 = pbVar6;
    plVar10 = local_50;
  }
  pbVar4[lVar9] = 0x23;
  pbVar12 = pbVar12 + 1;
  plVar10[2] = (longlong)pbVar12;
  local_a0 = param_4;
  do {
    if (local_a0 == param_5) break;
    bVar1 = *local_a0;
    uVar7 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      pbVar8 = local_a0 + 1;
      if (bVar1 < 0xe0) {
        local_a0 = local_a0 + 2;
        uVar7 = (uVar7 & 0x1f) << 6 | *pbVar8 & 0x3f;
        pbVar8 = (byte *)(ulonglong)uVar7;
      }
      else {
        uVar11 = local_a0[2] & 0x3f | (*pbVar8 & 0x3f) << 6;
        if (bVar1 < 0xf0) {
          local_a0 = local_a0 + 3;
          uVar7 = (uVar7 & 0x1f) << 0xc;
          pbVar8 = (byte *)(ulonglong)uVar7;
          uVar7 = uVar11 | uVar7;
        }
        else {
          pbVar6 = local_a0 + 3;
          local_a0 = local_a0 + 4;
          uVar7 = (uVar7 & 7) << 0x12;
          pbVar8 = (byte *)(ulonglong)uVar7;
          uVar7 = *pbVar6 & 0x3f | uVar11 << 6 | uVar7;
          if (uVar7 == 0x110000) break;
        }
      }
    }
    else {
      local_a0 = local_a0 + 1;
    }
  } while (((uVar7 < 0xe) && ((0x2600U >> (uVar7 & 0x1f) & 1) != 0)) || (uVar7 == 0x110000));
  local_98 = param_5;
  local_90 = (undefined4)plVar10[6];
  uStack_8c = *(undefined4 *)((longlong)plVar10 + 0x34);
  uStack_88 = (undefined4)plVar10[7];
  uStack_84 = *(undefined4 *)((longlong)plVar10 + 0x3c);
  while (lVar5 = FUN_180191ad0(&local_a0), lVar5 != 0) {
    local_70 = &DAT_1802670c0;
    local_80 = lVar5;
    local_78 = pbVar8;
    while (pbVar6 = (byte *)FUN_1801aac60(&local_80), pbVar6 != (byte *)0x0) {
      if ((byte *)(*local_50 - (longlong)pbVar12) < pbVar8) {
        FUN_1801f6a80(local_50,pbVar12,pbVar8,1,1);
        lVar9 = local_50[1];
        pbVar12 = (byte *)local_50[2];
      }
      memcpy(pbVar12 + lVar9,pbVar6,(size_t)pbVar8);
      pbVar12 = pbVar12 + (longlong)pbVar8;
      local_50[2] = (longlong)pbVar12;
      pbVar8 = pbVar6;
    }
  }
  if ((ulonglong)local_58 >> 0x20 == 0) {
    local_60[2] = local_50[2];
    lVar5 = local_50[1];
    *local_60 = *local_50;
    local_60[1] = lVar5;
    lVar5 = *(longlong *)(local_68 + 0x48);
    local_60[8] = *(longlong *)(local_68 + 0x40);
    local_60[9] = lVar5;
    *(undefined1 *)(local_60 + 10) = *(undefined1 *)(local_68 + 0x50);
    uVar2 = *(undefined4 *)(local_68 + 0x3c);
    local_60[3] = *(longlong *)(local_68 + 0x18);
    *(undefined4 *)(local_60 + 4) = 1;
    *(int *)((longlong)local_60 + 0x24) = (int)local_58;
    *(undefined4 *)(local_60 + 5) = *(undefined4 *)(local_68 + 0x28);
    uVar3 = *(undefined8 *)(local_68 + 0x34);
    *(undefined8 *)((longlong)local_60 + 0x2c) = *(undefined8 *)(local_68 + 0x2c);
    *(undefined8 *)((longlong)local_60 + 0x34) = uVar3;
    *(undefined4 *)((longlong)local_60 + 0x3c) = uVar2;
  }
  else {
    lVar5 = *local_50;
    lVar9 = local_50[1];
    *(undefined1 *)(local_60 + 1) = 9;
    *local_60 = -0x8000000000000000;
    if (lVar5 != 0) {
      thunk_FUN_1801d3330(lVar9,lVar5,1);
    }
  }
  return;
}


