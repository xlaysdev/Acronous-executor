/* FUN_18008bc80 @ 18008bc80 */

char * FUN_18008bc80(char *param_1,undefined8 *param_2,void *param_3,undefined1 param_4,
                    longlong param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  undefined *puVar8;
  char cVar9;
  char cVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 local_580 [48];
  undefined8 local_550;
  undefined4 local_454;
  longlong *local_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined1 local_408 [240];
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined1 uStack_228;
  undefined7 uStack_227;
  undefined1 uStack_220;
  undefined7 uStack_21f;
  undefined1 uStack_218;
  undefined7 uStack_217;
  undefined8 local_210;
  undefined1 local_208 [288];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  void *local_70;
  uint local_64;
  longlong *local_60;
  uint local_54;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  char local_4a;
  char local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  plVar1 = (longlong *)((longlong)param_3 + 0xd0);
  local_4d = 1;
  plVar13 = plVar1;
  local_70 = param_3;
  FUN_1800a06e0(&local_98,plVar1);
  puVar3 = (undefined8 *)*plVar1;
  if ((puVar3 != (undefined8 *)0x0) && (puVar3[3] != 0)) {
    local_60 = puVar3;
    FUN_1800a2ea0();
    plVar1 = local_60;
    uVar4 = local_60[1];
    if (uVar4 == 0) {
      uVar11 = 0;
    }
    else {
      memset((void *)*local_60,(int)CONCAT71((int7)((ulonglong)plVar13 >> 8),0xff),uVar4 + 0x11);
      uVar11 = (uVar4 + 1 & 0xfffffffffffffff8) - (uVar4 + 1 >> 3);
      if (uVar4 < 8) {
        uVar11 = uVar4;
      }
    }
    plVar1[3] = 0;
    plVar1[2] = uVar11;
  }
  plVar13 = (longlong *)*param_2;
  plVar1 = plVar13 + 2;
  LOCK();
  bVar14 = (char)plVar13[2] == '\0';
  if (bVar14) {
    *(char *)(plVar13 + 2) = '\x01';
  }
  UNLOCK();
  if (!bVar14) {
    local_49 = '\x01';
    FUN_180200390(plVar1);
  }
  puVar8 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_64 = 0;
    cVar9 = *(char *)((longlong)plVar13 + 0x11);
  }
  else {
    local_49 = '\x01';
    local_64 = FUN_180200a50();
    local_64 = local_64 ^ 1;
    cVar9 = *(char *)((longlong)plVar13 + 0x11);
  }
  if (cVar9 != '\0') {
    uStack_230._1_3_ = (undefined3)((uint)uStack_230 >> 8);
    uStack_230 = CONCAT31(uStack_230._1_3_,(char)local_64);
    local_238 = plVar1;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_238,&PTR_FUN_18020e6e0,
                  &PTR_s_C__Users_burne__cargo_registry_s_18020dcd8);
  }
  plVar5 = (longlong *)param_2[1];
  local_60 = plVar5 + 2;
  LOCK();
  bVar14 = (char)plVar5[2] == '\0';
  if (bVar14) {
    *(char *)(plVar5 + 2) = '\x01';
  }
  UNLOCK();
  local_78 = plVar1;
  if (!bVar14) {
    local_4a = '\x01';
    FUN_180200390(local_60);
  }
  if ((*(ulonglong *)puVar8 & 0x7fffffffffffffff) == 0) {
    local_54 = 0;
    cVar9 = *(char *)((longlong)plVar5 + 0x11);
  }
  else {
    local_4a = '\x01';
    local_54 = FUN_180200a50();
    local_54 = local_54 ^ 1;
    cVar9 = *(char *)((longlong)plVar5 + 0x11);
  }
  if (cVar9 != '\0') {
    local_238._0_4_ = SUB84(local_60,0);
    local_238._4_4_ = (undefined4)((ulonglong)local_60 >> 0x20);
    uStack_230._1_3_ = (undefined3)((uint)uStack_230 >> 8);
    uStack_230 = CONCAT31(uStack_230._1_3_,(char)local_54);
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_238,&PTR_FUN_18020e730,
                  &PTR_s_C__Users_burne__cargo_registry_s_18020dcf0);
  }
  local_4b = 1;
  FUN_180139f40(&local_238,plVar13 + 0x11);
  plVar1 = (longlong *)CONCAT44(local_238._4_4_,(undefined4)local_238);
  if ((char)local_238 == '\x03') {
    local_238 = plVar1;
    if ((int)plVar13[0x25] != 1) {
      if (param_5 != 0) {
        local_238 = plVar13 + 0x3b;
        uStack_230 = (undefined4)*(undefined8 *)(param_5 + 8);
        uStack_22c = (undefined4)((ulonglong)*(undefined8 *)(param_5 + 8) >> 0x20);
        local_4b = 1;
        lVar12 = FUN_180152e90(&local_238);
        if (*(char *)(lVar12 + 0x13c) == '\x01') {
          param_1[0] = '\x03';
          param_1[1] = '\x03';
          plVar1 = local_238;
          goto LAB_18008be20;
        }
      }
      if ((char)plVar13[0x10] != '\0') {
        param_1[0] = '\x03';
        param_1[1] = '\x01';
        plVar1 = local_238;
        goto LAB_18008be20;
      }
      if ((char)plVar13[0x25] == '\0') {
        iVar2 = *(int *)((longlong)plVar13 + 300);
        *(uint *)(plVar13 + 0x25) = iVar2 + 2U >> 0x1f;
        *(uint *)((longlong)plVar13 + 300) = iVar2 + 2U;
        local_4b = 1;
        FUN_180132460(local_580,iVar2,*(undefined4 *)((longlong)plVar13 + 0x194),
                      *(undefined4 *)((longlong)plVar13 + 0x114));
        if (*(char *)((longlong)local_70 + 0xb8) == '\x05') {
          local_550 = 1;
        }
        local_a0 = plVar13 + 0x25;
        memcpy(&local_318,local_70,0xe0);
        local_d8 = local_88;
        uStack_d4 = uStack_84;
        uStack_d0 = uStack_80;
        uStack_cc = uStack_7c;
        local_e8 = local_98;
        uStack_e4 = uStack_94;
        uStack_e0 = uStack_90;
        uStack_dc = uStack_8c;
        local_4e = 1;
        FUN_18014a740(&local_238,iVar2,&local_318,&local_e8,param_4);
        plVar1 = local_238;
        local_c8 = CONCAT44(uStack_22c,uStack_230);
        uStack_c0 = CONCAT71(uStack_227,uStack_228);
        local_b8 = CONCAT71(uStack_21f,uStack_220);
        uStack_b0 = CONCAT71(uStack_217,uStack_218);
        local_a8 = local_210;
        if (local_238 == (longlong *)0x3) {
          *(undefined8 *)(param_1 + 0x20) = local_210;
          uStack_c0._4_4_ = (undefined4)((uint7)uStack_227 >> 0x18);
          local_b8._4_4_ = (undefined4)((uint7)uStack_21f >> 0x18);
          uStack_b0._4_4_ = (undefined4)((uint7)uStack_217 >> 0x18);
          *(undefined4 *)(param_1 + 0x10) = (undefined4)local_b8;
          *(undefined4 *)(param_1 + 0x14) = local_b8._4_4_;
          *(undefined4 *)(param_1 + 0x18) = (undefined4)uStack_b0;
          *(undefined4 *)(param_1 + 0x1c) = uStack_b0._4_4_;
          *(undefined4 *)param_1 = uStack_230;
          *(undefined4 *)(param_1 + 4) = uStack_22c;
          *(undefined4 *)(param_1 + 8) = (undefined4)uStack_c0;
          *(undefined4 *)(param_1 + 0xc) = uStack_c0._4_4_;
          local_4b = 0;
          FUN_18008f310(local_580);
        }
        else {
          memcpy(local_408,local_208,0xf0);
          local_430 = local_c8;
          uStack_428 = uStack_c0;
          local_420 = local_b8;
          uStack_418 = uStack_b0;
          local_410 = local_a8;
          local_438 = plVar1;
          memcpy(&local_238,local_580,0x148);
          local_4c = 1;
          FUN_180152990(&local_318,plVar13 + 0x3b,local_454,&local_238);
          memcpy(&local_238,&local_438,0x120);
          local_4c = 0;
          cVar9 = FUN_1800964a0(local_a0,&local_238,plVar5 + 3,&local_318,plVar13 + 3,plVar13 + 0x39
                               );
          if (cVar9 == '\r') {
            plVar13[0x49] = plVar13[0x49] + 1;
            uVar4 = plVar13[5];
            lVar6 = plVar13[6];
            LOCK();
            lVar12 = *plVar13;
            *plVar13 = *plVar13 + 1;
            UNLOCK();
            if (*plVar13 != 0 && SCARRY8(lVar12,1) == *plVar13 < 0) {
              local_4c = 0;
              FUN_180139790(&local_238,plVar13,&local_318);
              LOCK();
              lVar12 = *plVar5;
              *plVar5 = *plVar5 + 1;
              UNLOCK();
              if (*plVar5 != 0 && SCARRY8(lVar12,1) == *plVar5 < 0) {
                *(longlong **)(param_1 + 8) = local_238;
                *(undefined4 *)(param_1 + 0x10) = uStack_230;
                *(undefined4 *)(param_1 + 0x14) = uStack_22c;
                *(longlong **)(param_1 + 0x18) = plVar5;
                param_1[0x20] = uVar4 <= lVar6 + 1U;
                *param_1 = '\x04';
                local_4a = 0;
                FUN_180075a40(local_60,local_54);
                local_49 = 0;
                FUN_180075a40(local_78,local_64);
                return param_1;
              }
            }
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          local_4c = 0;
          FUN_180152550(&local_318);
          local_238._0_4_ = local_318;
          local_238._4_4_ = uStack_314;
          uStack_230 = uStack_310;
          uStack_22c = uStack_30c;
          local_4c = 0;
          FUN_180152420(&local_238);
          *param_1 = '\x03';
          param_1[1] = cVar9;
        }
        cVar9 = '\0';
        cVar10 = (char)local_54;
        goto joined_r0x00018008be2a;
      }
    }
    param_1[0] = '\x03';
    param_1[1] = '\x05';
    plVar1 = local_238;
  }
  else {
    *(ulonglong *)(param_1 + 0x20) = CONCAT71(uStack_217,uStack_218);
    *(ulonglong *)(param_1 + 0x11) = CONCAT17(uStack_220,uStack_227);
    *(ulonglong *)(param_1 + 0x19) = CONCAT17(uStack_218,uStack_21f);
    *(uint *)(param_1 + 1) = CONCAT13(local_238._4_1_,local_238._1_3_);
    *(uint *)(param_1 + 5) = CONCAT13((undefined1)uStack_230,local_238._5_3_);
    *(uint *)(param_1 + 9) = CONCAT13((undefined1)uStack_22c,uStack_230._1_3_);
    *(uint *)(param_1 + 0xd) = CONCAT13(uStack_228,uStack_22c._1_3_);
    *param_1 = (char)local_238;
  }
LAB_18008be20:
  cVar9 = '\x01';
  cVar10 = (char)local_54;
  local_238 = plVar1;
joined_r0x00018008be2a:
  if ((cVar10 == '\0') && ((*(ulonglong *)puVar8 & 0x7fffffffffffffff) != 0)) {
    local_4a = cVar9;
    cVar10 = FUN_180200a50();
    if (cVar10 == '\0') {
      *(undefined1 *)((longlong)plVar5 + 0x11) = 1;
    }
  }
  LOCK();
  lVar12 = *local_60;
  *(char *)local_60 = '\0';
  UNLOCK();
  if ((char)lVar12 == '\x02') {
    local_4a = cVar9;
    WakeByAddressSingle(local_60);
  }
  plVar1 = local_78;
  if (((char)local_64 == '\0') && ((*(ulonglong *)puVar8 & 0x7fffffffffffffff) != 0)) {
    local_49 = cVar9;
    cVar10 = FUN_180200a50();
    if (cVar10 == '\0') {
      *(undefined1 *)((longlong)plVar13 + 0x11) = 1;
    }
  }
  LOCK();
  lVar12 = *plVar1;
  *(char *)plVar1 = '\0';
  UNLOCK();
  if ((char)lVar12 == '\x02') {
    local_49 = cVar9;
    WakeByAddressSingle(plVar1);
  }
  if (cVar9 != '\0') {
    if (CONCAT44(uStack_94,local_98) != 0) {
      local_4d = 1;
      (**(code **)(CONCAT44(uStack_94,local_98) + 0x20))
                (CONCAT44(uStack_7c,uStack_80),CONCAT44(uStack_8c,uStack_90),
                 CONCAT44(uStack_84,local_88));
    }
    FUN_18008ed30(local_70);
  }
  return param_1;
}


