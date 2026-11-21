/* FUN_18005d670 @ 18005d670 */

void FUN_18005d670(undefined8 *param_1,int param_2,longlong *param_3,undefined1 param_4)

{
  byte bVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  char cVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *local_f0;
  undefined8 ******local_e8;
  undefined *local_e0;
  undefined4 **local_d8;
  undefined *local_d0;
  undefined8 ******local_c8;
  undefined *local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined4 local_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_3b = 1;
  local_70 = param_3;
  (**(code **)*param_3)(&local_68,param_3 + 3,param_3[1],param_3[2]);
  puVar5 = PTR_DAT_1802fd448;
  puVar4 = PTR_PTR_1802fbf88;
  uStack_80 = (undefined4)local_58;
  uStack_7c = local_58._4_4_;
  uStack_78 = (undefined4)uStack_50;
  uStack_74 = uStack_50._4_4_;
  uStack_90 = (undefined4)local_68;
  uStack_8c = local_68._4_4_;
  uStack_88 = (undefined4)uStack_60;
  uStack_84 = uStack_60._4_4_;
  local_98 = CONCAT31(CONCAT21(local_98._2_2_,param_4),1);
  iStack_94 = param_2;
  if (*(ulonglong *)PTR_DAT_1802fd448 < 2) {
    bVar1 = PTR_PTR_1802fbf88[0x10];
    uVar8 = (uint)bVar1;
    if (bVar1 - 1 < 2) {
LAB_18005d703:
      local_39 = 1;
      local_3a = 1;
      cVar6 = FUN_1801601d0(*(undefined8 *)puVar4,uVar8);
      if (cVar6 != '\0') {
        lVar2 = *(longlong *)puVar4;
        uStack_50 = lVar2 + 0x30;
        local_c8 = (undefined8 ******)0x180209fc8;
        local_c0 = (undefined *)0x45;
        local_e8 = &local_c8;
        local_e0 = &DAT_180209b90;
        local_d8 = &local_f0;
        local_d0 = &DAT_180209ff0;
        local_68 = 1;
        uStack_60 = &local_e8;
        local_58 = 2;
        local_39 = 1;
        local_3a = 1;
        local_f0 = &local_98;
        FUN_180160ae0(lVar2,&local_68);
      }
    }
    else if (bVar1 != 0) {
      local_39 = 1;
      local_3a = 1;
      uVar8 = FUN_1801faaf0(PTR_PTR_1802fbf88);
      if ((char)uVar8 != '\0') goto LAB_18005d703;
    }
  }
  puVar4 = PTR_PTR_1802fbf80;
  if ((*(char *)(param_1[1] + 0x28) == '\0') || (*(int *)(param_1[1] + 0x30) != param_2)) {
    local_48 = CONCAT44(uStack_74,uStack_78);
    local_58 = CONCAT44(uStack_84,uStack_88);
    uStack_50 = CONCAT44(uStack_7c,uStack_80);
    local_68 = CONCAT44(iStack_94,local_98);
    uStack_60 = (undefined8 ******)CONCAT44(uStack_8c,uStack_90);
    local_39 = 0;
    local_3a = 1;
    FUN_180087b60(param_1 + 4,&local_68);
    local_b8 = *local_70;
    local_b0 = local_70[1];
    local_a8 = local_70[2];
    local_a0 = local_70[3];
    local_3c = 1;
    uVar7 = FUN_180089890(param_1 + 4);
    local_48 = CONCAT44(param_2,uVar7);
    local_68 = local_b8;
    uStack_60 = (undefined8 ******)local_b0;
    local_58 = local_a8;
    uStack_50 = local_a0;
    local_3c = 0;
    FUN_180136d10(param_1[1],&local_68);
    return;
  }
  if (*(longlong *)puVar5 != 0) goto LAB_18005d7b0;
  bVar1 = PTR_PTR_1802fbf80[0x10];
  uVar8 = (uint)bVar1;
  if (1 < bVar1 - 1) {
    if (bVar1 == 0) goto LAB_18005d7b0;
    local_39 = 1;
    local_3a = 1;
    uVar8 = FUN_1801faaf0(PTR_PTR_1802fbf80);
    if ((char)uVar8 == '\0') goto LAB_18005d7b0;
  }
  local_39 = 1;
  local_3a = 1;
  cVar6 = FUN_1801601d0(*(undefined8 *)puVar4,uVar8);
  if (cVar6 != '\0') {
    lVar2 = *(longlong *)puVar4;
    uStack_50 = lVar2 + 0x30;
    local_e8 = (undefined8 ******)0x18020a010;
    local_e0 = (undefined *)0x33;
    local_c8 = &local_e8;
    local_c0 = &DAT_180209b90;
    local_68 = 1;
    uStack_60 = &local_c8;
    local_58 = 1;
    local_39 = 1;
    local_3a = 1;
    FUN_180160ae0(lVar2,&local_68);
  }
LAB_18005d7b0:
  puVar3 = (undefined1 *)*param_1;
  *puVar3 = 1;
  puVar3[1] = param_4;
  *(int *)(puVar3 + 4) = param_2;
  if ((char)local_98 != '\0') {
    if ((char)local_98 == '\x01') {
      local_3b = 1;
      (**(code **)(CONCAT44(uStack_8c,uStack_90) + 0x20))
                (CONCAT44(uStack_74,uStack_78),CONCAT44(uStack_84,uStack_88),
                 CONCAT44(uStack_7c,uStack_80));
    }
    else {
      lVar2 = CONCAT44(uStack_8c,uStack_90);
      if ((!SBORROW8(0,lVar2)) && (lVar2 != 0)) {
        thunk_FUN_1801d3330(CONCAT44(uStack_84,uStack_88),lVar2,1);
      }
    }
  }
  (**(code **)(*local_70 + 0x20))(local_70[3],local_70[1],local_70[2]);
  return;
}


