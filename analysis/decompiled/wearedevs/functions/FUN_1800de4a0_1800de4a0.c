/* FUN_1800de4a0 @ 1800de4a0 */

longlong * FUN_1800de4a0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  longlong local_88;
  longlong lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*(longlong *)PTR_DAT_1802fd4b8 == 0) {
    if (*(longlong *)PTR_DAT_1802fd4b0 == 2) {
      uVar5 = *param_2;
      lStack_50 = *param_2;
      local_48 = param_2[1];
      if (param_2[2] == 0) {
        local_60 = 0;
      }
      else {
        local_60 = 2;
        local_58 = param_2[2];
      }
      puVar7 = PTR_DAT_1802fd4c0;
    }
    else {
      uVar5 = *param_2;
      lStack_50 = *param_2;
      local_48 = param_2[1];
      if (param_2[2] == 0) {
        local_60 = 0;
      }
      else {
        local_60 = 2;
        local_58 = param_2[2];
      }
      puVar7 = PTR_DAT_1802fd4c8;
    }
    FUN_180160970(param_1,uVar5,&local_60,puVar7);
    return param_1;
  }
  puVar4 = (ulonglong *)FUN_180160ac0();
  if ((char)puVar4[5] == '\x01') {
LAB_1800de59f:
    uVar3 = puVar4[4];
    *(undefined1 *)(puVar4 + 4) = 0;
    if ((char)uVar3 == '\0') {
      lVar1 = param_2[2];
      param_2[2] = 0;
      uVar5 = *param_2;
      uVar6 = param_2[1];
      if (lVar1 == 0) {
        local_88 = 0;
      }
      else {
        local_88 = 2;
        lStack_80 = lVar1;
      }
      local_78 = uVar5;
      uStack_70 = uVar6;
      FUN_180160970(&local_60,uVar5,&local_88,PTR_DAT_1802fd4c8);
    }
    else {
      local_38 = puVar4;
      if (0x7ffffffffffffffe < *puVar4) {
        FUN_180201940(&DAT_180215870);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      *puVar4 = *puVar4 + 1;
      if ((int)puVar4[1] == 2) {
        if (*(longlong *)PTR_DAT_1802fd4b0 == 2) {
          puVar4 = (ulonglong *)PTR_DAT_1802fd4c0;
        }
        else {
          puVar4 = (ulonglong *)PTR_DAT_1802fd4c8;
        }
      }
      else {
        puVar4 = puVar4 + 1;
      }
      lVar1 = param_2[2];
      param_2[2] = 0;
      uVar5 = *param_2;
      uVar6 = param_2[1];
      if (lVar1 == 0) {
        local_88 = 0;
      }
      else {
        local_88 = 2;
        lStack_80 = lVar1;
      }
      local_78 = uVar5;
      uStack_70 = uVar6;
      FUN_180160970(&local_60,uVar5,&local_88,puVar4);
      *local_38 = *local_38 - 1;
      *(undefined1 *)(local_38 + 4) = 1;
    }
    local_88 = local_58;
    lStack_80 = lStack_50;
    uStack_70 = CONCAT44(uStack_3c,uStack_40);
    if (local_60 != 3) {
      *param_1 = local_60;
      param_1[1] = local_58;
      param_1[2] = lStack_50;
      param_1[3] = local_48;
      param_1[4] = uStack_70;
      return param_1;
    }
  }
  else {
    if ((char)puVar4[5] != '\x02') {
      FUN_1801d8880(puVar4,FUN_180075510);
      *(undefined1 *)(puVar4 + 5) = 1;
      goto LAB_1800de59f;
    }
    uVar5 = *param_2;
    uVar6 = param_2[1];
    if (param_2[2] != 0) {
      local_60 = 2;
      local_58 = param_2[2];
      goto LAB_1800de6ad;
    }
  }
  local_60 = 0;
LAB_1800de6ad:
  lStack_50 = uVar5;
  local_48 = uVar6;
  FUN_180160970(param_1,uVar5,&local_60,PTR_DAT_1802fd4c8);
  return param_1;
}


