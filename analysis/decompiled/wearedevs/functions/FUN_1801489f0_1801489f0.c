/* FUN_1801489f0 @ 1801489f0 */

void FUN_1801489f0(ulonglong *param_1,void *param_2,undefined8 param_3)

{
  bool bVar1;
  ulonglong *puVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong local_388 [3];
  undefined *local_370;
  longlong local_2a0 [20];
  ulonglong *local_200;
  ulonglong local_1f8;
  undefined1 local_1f0 [8];
  undefined1 local_1e8 [104];
  void *local_180;
  longlong local_178;
  longlong *local_170 [2];
  undefined8 local_160;
  undefined8 local_158;
  undefined1 *local_90;
  undefined4 local_84;
  ulonglong *local_78;
  undefined1 local_59;
  undefined8 local_58;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_180 = param_2;
  local_58 = param_3;
  if (*(longlong *)PTR_DAT_1802fd448 == 0) {
    uVar5 = (uint)DAT_1802fcd40;
    if (1 < uVar5 - 1) {
      if (uVar5 != 0) {
        local_4b = 1;
        uVar5 = FUN_1801faaf0(&PTR_DAT_1802fcd30);
        if ((char)uVar5 != '\0') goto LAB_180148af2;
      }
      goto LAB_180148a3a;
    }
LAB_180148af2:
    local_4b = 1;
    cVar3 = FUN_1801601d0(PTR_DAT_1802fcd30,uVar5);
    if (cVar3 == '\0') goto LAB_180148a3a;
    local_370 = PTR_DAT_1802fcd30 + 0x30;
    local_388[0] = 1;
    local_388[1] = 8;
    local_388[2] = 0;
    local_4b = 1;
    FUN_180160410(&local_178,PTR_DAT_1802fcd30,local_388);
    if (local_178 != 2) {
      local_59 = 1;
      FUN_180161780(&local_178,&local_160);
    }
  }
  else {
LAB_180148a3a:
    local_178 = 2;
    local_158 = 0;
  }
  uVar7 = *param_1;
  uVar8 = param_1[1];
  uVar6 = param_1[2];
  *param_1 = 2;
  local_78 = param_1;
  if (uVar7 != 2) {
    local_4a = 1;
    FUN_18015d590(param_1 + 3,uVar8);
    if ((uVar7 & 1) == 0) {
      if (uVar8 < 0x1f) {
        local_388[0] = CONCAT71(local_388[0]._1_7_,(char)uVar8) | 0x20;
        local_4a = 1;
        FUN_1801b2af0(local_58,local_388,1);
      }
      else {
        local_388[0] = CONCAT71(local_388[0]._1_7_,0x3f);
        local_4a = 1;
        FUN_1801b2af0(local_58,local_388,1);
        uVar8 = uVar8 - 0x1f;
        if (0x7f < uVar8) {
          uVar7 = uVar8;
          do {
            local_388[0] = CONCAT71(local_388[0]._1_7_,(char)uVar7) | 0x80;
            local_4a = 1;
            FUN_1801b2af0(local_58,local_388,1);
            uVar8 = uVar7 >> 7;
            bVar1 = 0x3fff < uVar7;
            uVar7 = uVar8;
          } while (bVar1);
        }
        local_388[0] = CONCAT71(local_388[0]._1_7_,(char)uVar8);
        local_4a = 1;
        FUN_1801b2af0(local_58,local_388,1);
      }
    }
    else {
      local_4a = 1;
      FUN_18015d590(param_1 + 3,uVar6);
      if (uVar8 < 0x1f) {
        local_388[0] = CONCAT71(local_388[0]._1_7_,(char)uVar8) | 0x20;
        local_4a = 1;
        FUN_1801b2af0(local_58,local_388,1);
      }
      else {
        local_388[0] = CONCAT71(local_388[0]._1_7_,0x3f);
        local_4a = 1;
        FUN_1801b2af0(local_58,local_388,1);
        uVar8 = uVar8 - 0x1f;
        if (0x7f < uVar8) {
          uVar7 = uVar8;
          do {
            local_388[0] = CONCAT71(local_388[0]._1_7_,(char)uVar7) | 0x80;
            local_4a = 1;
            FUN_1801b2af0(local_58,local_388,1);
            uVar8 = uVar7 >> 7;
            bVar1 = 0x3fff < uVar7;
            uVar7 = uVar8;
          } while (bVar1);
        }
        local_388[0] = CONCAT71(local_388[0]._1_7_,(char)uVar8);
        local_4a = 1;
        FUN_1801b2af0(local_58,local_388,1);
      }
      if (uVar6 < 0x1f) {
        local_388[0] = CONCAT71(local_388[0]._1_7_,(char)uVar6) | 0x20;
        local_4a = 1;
        FUN_1801b2af0(local_58,local_388,1);
      }
      else {
        local_388[0] = CONCAT71(local_388[0]._1_7_,0x3f);
        local_4a = 1;
        FUN_1801b2af0(local_58,local_388,1);
        uVar6 = uVar6 - 0x1f;
        if (0x7f < uVar6) {
          uVar7 = uVar6;
          do {
            local_388[0] = CONCAT71(local_388[0]._1_7_,(char)uVar7) | 0x80;
            local_4a = 1;
            FUN_1801b2af0(local_58,local_388,1);
            uVar6 = uVar7 >> 7;
            bVar1 = 0x3fff < uVar7;
            uVar7 = uVar6;
          } while (bVar1);
        }
        local_388[0] = CONCAT71(local_388[0]._1_7_,(char)uVar6);
        local_4a = 1;
        FUN_1801b2af0(local_58,local_388,1);
      }
    }
  }
  puVar2 = local_78;
  local_90 = local_1f0;
  local_1f8 = 5;
  memcpy(local_388,local_180,0xe8);
  local_200 = puVar2 + 3;
  local_84 = SUB84(local_200,0);
  FUN_180136a40(local_2a0,local_388);
  if (local_2a0[0] != 8) {
    lVar4 = local_2a0[0] + -1;
    if (local_2a0[0] == 0) {
      lVar4 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x000180148ef9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((longlong)&DAT_1802554cc + (longlong)(int)(&DAT_1802554cc)[lVar4]))
              ((code *)((longlong)&DAT_1802554cc + (longlong)(int)(&DAT_1802554cc)[lVar4]));
    return;
  }
  FUN_18014af70(local_388);
  if (local_1f8 < 6) {
    if ((0x2cUL >> (local_1f8 & 0x3f) & 1) != 0) goto LAB_180149e73;
    if ((3UL >> (local_1f8 & 0x3f) & 1) != 0) {
      local_90 = local_1e8;
    }
  }
  local_4a = 0;
  FUN_18014b170(local_90);
LAB_180149e73:
  if ((int)local_178 != 2) {
    local_59 = 0;
    FUN_180161750(&local_178,&local_160);
    lVar4 = local_178;
    if ((local_178 != 2) && (FUN_1801617b0(&local_178,local_160), lVar4 != 0)) {
      LOCK();
      *local_170[0] = *local_170[0] + -1;
      UNLOCK();
      if (*local_170[0] == 0) {
        local_4b = 0;
        FUN_18003cc40(local_170);
      }
    }
  }
  return;
}


