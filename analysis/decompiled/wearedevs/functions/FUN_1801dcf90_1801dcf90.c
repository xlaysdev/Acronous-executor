/* FUN_1801dcf90 @ 1801dcf90 */

void FUN_1801dcf90(undefined8 *param_1,byte *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  char cVar8;
  code *pcVar9;
  code **ppcVar10;
  code *local_d8;
  code **ppcStack_d0;
  undefined1 *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong local_98 [2];
  longlong *local_88;
  code *local_80;
  code **ppcStack_78;
  undefined1 *local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  *(undefined1 *)*param_1 = 1;
  if (*(char *)param_1[1] != '\0') goto LAB_1801dcfc8;
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  FUN_1801f2ab0(&local_88,uVar4,uVar5);
  if ((int)local_88 == 1) {
LAB_1801dd0c9:
    FUN_1801f2ab0(&local_88,uVar4,uVar5);
    if ((char)local_88 != '\0') goto LAB_1801dcfc8;
    pcVar9 = local_80;
    ppcVar10 = ppcStack_78;
  }
  else {
    FUN_1801e6c7a(&local_88,local_80,ppcStack_78);
    if ((int)local_88 == 2) goto LAB_1801dd0c9;
    pcVar9 = (code *)CONCAT44(uStack_64,uStack_68);
    if (pcVar9 == (code *)0x0) goto LAB_1801dcfc8;
    ppcVar10 = (code **)CONCAT44(uStack_5c,local_60);
  }
  cVar8 = FUN_1801e2ce0(&DAT_180290048,0x1a,pcVar9,ppcVar10);
  pcVar3 = (char *)param_1[2];
  if (cVar8 != '\0') {
    *pcVar3 = '\x01';
    return;
  }
  if (*pcVar3 != '\0') {
    cVar8 = FUN_1801e2ce0(&DAT_180290062,0x1c,pcVar9,ppcVar10);
    if (cVar8 != '\0') {
      *pcVar3 = '\0';
      return;
    }
    if (*pcVar3 != '\0') goto LAB_1801dcfc8;
  }
  *(longlong *)param_1[3] = *(longlong *)param_1[3] + 1;
LAB_1801dcfc8:
  if (*(char *)param_1[2] != '\0') {
    plVar1 = (longlong *)param_1[3];
    lVar2 = *plVar1;
    if (lVar2 != 0) {
      pcVar3 = (char *)param_1[4];
      if (*pcVar3 == '\0') {
        local_d8 = (code *)&DAT_18029007e;
        if (lVar2 == 1) {
          local_d8 = (code *)0x1;
        }
        ppcStack_d0 = (code **)(ulonglong)(lVar2 != 1);
        local_80 = FUN_1801ee720;
        ppcStack_78 = &local_d8;
        local_70 = &LAB_1801e1670;
        local_88 = plVar1;
        FUN_1801ef150(**(undefined8 **)param_1[5],(*(undefined8 **)param_1[5])[1],&DAT_18029007f,
                      &local_88);
      }
      *pcVar3 = '\0';
      *plVar1 = 0;
    }
    local_98[0] = param_1[5];
    local_98[1] = 0;
    uVar4 = *(undefined8 *)(param_1[7] + 0x10);
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    uVar6 = *(undefined8 *)(param_2 + 0x28);
    FUN_1801f2ab0(&local_88,uVar5,uVar6);
    if ((int)local_88 == 1) {
      local_88 = (longlong *)0x2;
    }
    else {
      FUN_1801e6c7a(&local_88,local_80,ppcStack_78);
      if (local_88 != (longlong *)0x2) {
        local_a8 = local_50;
        uStack_c0 = CONCAT44(uStack_64,uStack_68);
        local_b8 = CONCAT44(uStack_5c,local_60);
        uStack_b0 = CONCAT44(uStack_54,uStack_58);
        local_c8 = local_70;
        local_d8 = local_80;
        ppcStack_d0 = ppcStack_78;
      }
    }
    local_80 = local_d8;
    ppcStack_78 = ppcStack_d0;
    local_70 = local_c8;
    uStack_68 = (undefined4)uStack_c0;
    uStack_64 = uStack_c0._4_4_;
    local_60 = (undefined4)local_b8;
    uStack_5c = local_b8._4_4_;
    uStack_58 = (undefined4)uStack_b0;
    uStack_54 = uStack_b0._4_4_;
    local_50 = local_a8;
    local_d8 = (code *)0x2;
    if ((*param_2 & 1) != 0) {
      ppcStack_d0 = *(code ***)(param_2 + 8);
      local_c8 = *(undefined1 **)(param_2 + 0x10);
      local_d8 = (code *)0x1;
    }
    local_48 = uVar5;
    local_40 = uVar6;
    uVar7 = FUN_1801d3ac0(local_98,uVar4,&local_88,&local_d8,*(undefined4 *)(param_2 + 0x18),
                          *(undefined4 *)(param_2 + 0x1c),0);
    *(undefined1 *)param_1[6] = uVar7;
    *(longlong *)(local_98[0] + 0x18) = *(longlong *)(local_98[0] + 0x18) + 1;
  }
  return;
}


