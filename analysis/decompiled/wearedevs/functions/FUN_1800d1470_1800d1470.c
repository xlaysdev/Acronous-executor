/* FUN_1800d1470 @ 1800d1470 */

void FUN_1800d1470(undefined8 *param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  code *pcVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined4 *puVar12;
  undefined1 uVar13;
  ulonglong *unaff_R14;
  undefined1 uVar14;
  undefined8 unaff_R15;
  bool bVar15;
  undefined1 local_4f8 [272];
  undefined1 local_3e8 [16];
  undefined1 local_3d8 [280];
  undefined *local_2c0;
  ulonglong *local_2b8;
  undefined **local_2b0;
  undefined1 local_2a8 [8];
  undefined8 local_2a0;
  undefined8 local_298;
  undefined *local_198;
  ulonglong *puStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 *local_68;
  undefined *local_60;
  undefined1 local_51;
  undefined4 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_50 = param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((longlong)param_2 + 0x271)) {
  case 0:
    *(undefined1 *)((longlong)param_2 + 0x273) = 0;
    memcpy(param_2 + 0x3a,param_2,0x90);
    *(undefined1 *)(param_2 + 0x9d) = 1;
    *(undefined8 *)(param_2 + 0x5e) = *(undefined8 *)(param_2 + 0x24);
    *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_2 + 0x26);
    *(undefined8 *)(param_2 + 0x62) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_2 + 100) = *(undefined8 *)(param_2 + 0x2a);
    *(undefined8 *)(param_2 + 0x66) = *(undefined8 *)(param_2 + 0x2c);
    *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(param_2 + 0x2e);
    *(undefined8 *)(param_2 + 0x6a) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_2 + 0x6c) = *(undefined8 *)(param_2 + 0x32);
    *(undefined8 *)(param_2 + 0x6e) = *(undefined8 *)(param_2 + 0x34);
    *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_2 + 0x36);
    *(undefined8 *)(param_2 + 0x72) = *(undefined8 *)(param_2 + 0x38);
    *(undefined1 *)((longlong)param_2 + 0x272) = *(undefined1 *)(param_2 + 0x9c);
    *(undefined8 *)(param_2 + 0x74) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 0x76) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_2 + 0xc);
    param_2[0x7e] = param_2[4];
    param_2[0x7f] = param_2[5];
    param_2[0x80] = param_2[6];
    param_2[0x81] = param_2[7];
    param_2[0x7a] = *param_2;
    param_2[0x7b] = param_2[1];
    param_2[0x7c] = param_2[2];
    param_2[0x7d] = param_2[3];
    plVar4 = *(longlong **)(param_2 + 0x74);
    LOCK();
    lVar7 = *plVar4;
    *plVar4 = *plVar4 + 1;
    UNLOCK();
    if (*plVar4 == 0 || SCARRY8(lVar7,1) != *plVar4 < 0) {
LAB_1800d1c47:
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    plVar3 = *(longlong **)(param_2 + 0x76);
    uVar8 = *(undefined8 *)(param_2 + 0x78);
    LOCK();
    lVar7 = *plVar3;
    *plVar3 = *plVar3 + 1;
    UNLOCK();
    if (*plVar3 == 0 || SCARRY8(lVar7,1) != *plVar3 < 0) goto LAB_1800d1c47;
    plVar1 = (longlong *)(param_2 + 0x5e);
    *(longlong **)(param_2 + 0x82) = plVar4;
    *(longlong **)(param_2 + 0x84) = plVar3;
    *(undefined8 *)(param_2 + 0x86) = uVar8;
    *(undefined1 *)((longlong)param_2 + 0x273) = 1;
    puVar12 = param_2;
    if ((*(char *)((longlong)param_2 + 0x171) != '\x01') && ((char)*plVar1 != '\0')) {
      cVar6 = FUN_1801ae3a0(plVar1,&DAT_180214098);
      puVar12 = local_50;
      if (cVar6 != '\0') {
        lVar7 = FUN_1800c9dc0(param_2 + 0x82);
        *(undefined1 *)(lVar7 + 0x7f) = 1;
        puVar12 = local_50;
      }
    }
    local_60 = *(undefined **)(puVar12 + 0x7a);
    bVar15 = local_60 != (undefined *)0x1;
    if (!bVar15) {
      unaff_R14 = (ulonglong *)FUN_1801010f0(puVar12 + 0x7c);
      puVar12 = local_50;
      puStack_190 = unaff_R14;
    }
    puVar10 = (undefined *)(ulonglong)!bVar15;
    local_198 = puVar10;
    uVar8 = FUN_180101140(puVar12 + 0x7e);
    *(undefined1 *)((longlong)puVar12 + 0x273) = 0;
    *(undefined **)(puVar12 + 0x88) = puVar10;
    *(ulonglong **)(puVar12 + 0x8a) = unaff_R14;
    *(undefined8 *)(puVar12 + 0x8c) = uVar8;
    puVar12[0x8e] = puVar12[0x80];
    *(undefined2 *)(puVar12 + 0x8f) = *(undefined2 *)(puVar12 + 0x81);
    *(undefined1 *)(puVar12 + 0x96) = 0;
    uVar8 = *(undefined8 *)(param_2 + 0x84);
    *(undefined8 *)(puVar12 + 0x90) = *(undefined8 *)(param_2 + 0x82);
    *(undefined8 *)(puVar12 + 0x92) = uVar8;
    *(undefined8 *)(puVar12 + 0x94) = *(undefined8 *)(param_2 + 0x86);
    *(undefined1 *)(puVar12 + 0x9d) = 0;
    local_148 = *(undefined8 *)(param_2 + 0x72);
    local_158 = *(undefined8 *)(param_2 + 0x6e);
    uStack_150 = *(undefined8 *)(param_2 + 0x70);
    local_198 = (undefined *)*plVar1;
    puStack_190 = *(ulonglong **)(param_2 + 0x60);
    local_188 = param_2[0x62];
    uStack_184 = param_2[99];
    uStack_180 = param_2[100];
    uStack_17c = param_2[0x65];
    local_178 = param_2[0x66];
    uStack_174 = param_2[0x67];
    uStack_170 = param_2[0x68];
    uStack_16c = param_2[0x69];
    local_168 = param_2[0x6a];
    uStack_164 = param_2[0x6b];
    uStack_160 = param_2[0x6c];
    uStack_15c = param_2[0x6d];
    ppuVar11 = &local_198;
    uVar8 = FUN_1800d5430(puVar12 + 0x88);
    *(undefined8 *)(local_50 + 0x98) = uVar8;
    *(undefined ***)(local_50 + 0x9a) = ppuVar11;
    unaff_R15 = param_3;
    break;
  case 2:
    FUN_180201c80(&PTR_s_C__Users_burne__cargo_registry_s_180214170);
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_180201c60(&PTR_s_C__Users_burne__cargo_registry_s_180214170);
  case 3:
    uVar8 = *(undefined8 *)(param_2 + 0x98);
    ppuVar11 = *(undefined ***)(param_2 + 0x9a);
  }
  uVar14 = (undefined1)unaff_R15;
  (*(code *)ppuVar11[3])(&local_198,uVar8,param_3);
  puVar9 = puStack_190;
  puVar10 = local_198;
  if (local_198 == (undefined *)0x4) {
    *(undefined1 *)((longlong)param_1 + 0x11) = 3;
    uVar14 = 3;
    goto LAB_1800d1c17;
  }
  ppuVar11 = (undefined **)CONCAT44(uStack_184,local_188);
  memcpy(local_4f8,&uStack_180,0x110);
  local_60 = *(undefined **)(local_50 + 0x98);
  local_68 = *(undefined8 **)(local_50 + 0x9a);
  if ((code *)*local_68 != (code *)0x0) {
    (*(code *)*local_68)(local_60);
  }
  if (local_68[1] != 0) {
    thunk_FUN_1801d3330(local_60,local_68[1],local_68[2]);
  }
  if ((int)puVar10 == 3) {
LAB_1800d17f0:
    FUN_180042b50(local_50 + 0x88);
    *(undefined1 *)((longlong)local_50 + 0x273) = 0;
    if (*(longlong *)(local_50 + 0x7a) != 0) {
      FUN_180101100(local_50 + 0x7c);
    }
    FUN_180101150(local_50 + 0x7e);
    plVar4 = *(longlong **)(local_50 + 0x74);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_1800f5960(local_50 + 0x74);
    }
    plVar4 = *(longlong **)(local_50 + 0x76);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_18003cc40(local_50 + 0x76);
    }
    *(undefined1 *)(local_50 + 0x9d) = 0;
    plVar4 = *(longlong **)(local_50 + 0x56);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_18003d670(local_50 + 0x56);
    }
    if (*(char *)(local_50 + 0x54) != '\x02') {
      (**(code **)(*(longlong *)(local_50 + 0x4c) + 0x20))
                (*(undefined8 *)(local_50 + 0x52),*(undefined8 *)(local_50 + 0x4e),
                 *(undefined8 *)(local_50 + 0x50));
    }
    plVar4 = *(longlong **)(local_50 + 0x58);
    uVar13 = 2;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        FUN_18003dca0(local_50 + 0x58);
      }
    }
  }
  else {
    memcpy(local_2a8,local_4f8,0x110);
    puVar12 = local_50;
    local_2c0 = puVar10;
    local_2b8 = puVar9;
    local_60 = puVar10;
    local_2b0 = ppuVar11;
    if (puVar10 == (undefined *)0x2) {
      puVar2 = local_50 + 0x5c;
      ppuVar11 = &local_198;
      memcpy(ppuVar11,&local_2c0,0x128);
      puVar9 = (ulonglong *)FUN_1800d26f0(puVar2);
      uVar14 = *(undefined1 *)((longlong)puVar12 + 0x272);
      uVar13 = 0;
    }
    else {
      memcpy(local_3e8,&local_2c0,0x128);
      if (*(char *)((longlong)local_50 + 0x171) == '\0') {
        local_51 = 1;
        puVar10 = (undefined *)FUN_18016df00(local_3d8,0);
        if (puVar10 != (undefined *)0x0) {
          local_198 = puVar10;
          FUN_180027490();
          puVar9 = (ulonglong *)thunk_FUN_1801d32d0(8,8);
          if (puVar9 == (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_180201705(8,8);
          }
          *puVar9 = (ulonglong)puVar10;
          FUN_1800c7620(local_3e8);
          ppuVar11 = &PTR_FUN_18020ab68;
          if ((int)local_2c0 == 2) {
            FUN_1800c7250(&local_2c0);
          }
          goto LAB_1800d17f0;
        }
      }
      puVar12 = local_50 + 0x5c;
      ppuVar11 = &local_198;
      memcpy(ppuVar11,local_3e8,0x128);
      local_51 = 0;
      puVar9 = (ulonglong *)FUN_1800d2920(puVar12);
      uVar13 = *(undefined1 *)((longlong)local_50 + 0x172);
      uVar14 = *(undefined1 *)((longlong)local_50 + 0x272);
      if ((int)local_2c0 == 2) {
        FUN_18007eeb0(&local_2b8);
        FUN_1800ba880(local_2a0,local_298);
        FUN_1800c8d30(&local_2b8);
      }
    }
    FUN_180042b50(local_50 + 0x88);
    *(undefined1 *)((longlong)local_50 + 0x273) = 0;
    if (*(longlong *)(local_50 + 0x7a) != 0) {
      FUN_180101100(local_50 + 0x7c);
    }
    FUN_180101150(local_50 + 0x7e);
    plVar4 = *(longlong **)(local_50 + 0x74);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_1800f5960(local_50 + 0x74);
    }
    plVar4 = *(longlong **)(local_50 + 0x76);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_18003cc40(local_50 + 0x76);
    }
    *(undefined1 *)(local_50 + 0x9d) = 0;
    plVar4 = *(longlong **)(local_50 + 0x56);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_18003d670(local_50 + 0x56);
    }
    if (*(char *)(local_50 + 0x54) != '\x02') {
      (**(code **)(*(longlong *)(local_50 + 0x4c) + 0x20))
                (*(undefined8 *)(local_50 + 0x52),*(undefined8 *)(local_50 + 0x4e),
                 *(undefined8 *)(local_50 + 0x50));
    }
    plVar4 = *(longlong **)(local_50 + 0x58);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        FUN_18003dca0(local_50 + 0x58);
      }
    }
  }
  *param_1 = puVar9;
  param_1[1] = ppuVar11;
  *(undefined1 *)(param_1 + 2) = uVar14;
  *(undefined1 *)((longlong)param_1 + 0x11) = uVar13;
  uVar14 = 1;
LAB_1800d1c17:
  *(undefined1 *)((longlong)local_50 + 0x271) = uVar14;
  return;
}


