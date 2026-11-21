/* FUN_18007d3c0 @ 18007d3c0 */

void FUN_18007d3c0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  undefined1 uVar8;
  longlong *plVar9;
  void *pvVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char cVar14;
  undefined8 unaff_R13;
  undefined8 uVar15;
  undefined8 unaff_R15;
  longlong local_6d8;
  longlong lStack_6d0;
  undefined8 local_6c8;
  longlong lStack_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined8 local_698;
  undefined8 local_690;
  longlong *plStack_688;
  longlong local_680;
  longlong *plStack_678;
  undefined8 local_670;
  undefined8 uStack_668;
  undefined8 local_660;
  undefined4 local_658;
  undefined4 uStack_654;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  undefined1 local_648;
  undefined4 local_647;
  undefined3 uStack_643;
  longlong *local_640;
  longlong local_138;
  longlong lStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  longlong local_108;
  ulonglong uStack_100;
  undefined8 local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8;
  undefined7 uStack_a7;
  longlong *local_a0;
  longlong *local_98;
  undefined4 local_90;
  undefined3 uStack_8c;
  undefined4 local_88;
  undefined3 uStack_84;
  undefined8 local_80;
  longlong *local_78;
  ulonglong local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  char local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  plVar3 = *(longlong **)(param_1 + 0xd0);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    lVar1 = *plVar3;
    *plVar3 = *plVar3 + 1;
    UNLOCK();
    if (*plVar3 == 0 || SCARRY8(lVar1,1) != *plVar3 < 0) goto LAB_18007d9a2;
  }
  local_6d8 = 1;
  lStack_6d0 = 1;
  local_6c8 = (longlong *)0x0;
  local_6b8 = local_6b8 & 0xffffffffffffff00;
  uStack_6b0 = 0;
  uStack_6a0 = uStack_6a0 & 0xffffffffffffff00;
  local_698 = local_698 & 0xffffffffff000000;
  local_98 = plVar3;
  FUN_180027490();
  uVar13 = 0;
  plVar9 = (longlong *)thunk_FUN_1801d32d0(0x48,8);
  local_68 = param_2;
  if (plVar9 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x48);
  }
  plVar9[8] = local_698;
  *(undefined4 *)(plVar9 + 6) = (undefined4)local_6a8;
  *(undefined4 *)((longlong)plVar9 + 0x34) = local_6a8._4_4_;
  *(undefined4 *)(plVar9 + 7) = (undefined4)uStack_6a0;
  *(undefined4 *)((longlong)plVar9 + 0x3c) = uStack_6a0._4_4_;
  *(undefined4 *)(plVar9 + 4) = (undefined4)local_6b8;
  *(undefined4 *)((longlong)plVar9 + 0x24) = local_6b8._4_4_;
  *(undefined4 *)(plVar9 + 5) = (undefined4)uStack_6b0;
  *(undefined4 *)((longlong)plVar9 + 0x2c) = uStack_6b0._4_4_;
  plVar9[2] = (longlong)local_6c8;
  plVar9[3] = lStack_6c0;
  *plVar9 = local_6d8;
  plVar9[1] = lStack_6d0;
  LOCK();
  lVar1 = *plVar9;
  *plVar9 = *plVar9 + 1;
  UNLOCK();
  if (*plVar9 == 0 || SCARRY8(lVar1,1) != *plVar9 < 0) goto LAB_18007d9a2;
  local_a0 = plVar9;
  local_78 = plVar9;
  if (*(char *)(param_2 + 0xd) == '\0') {
    if (*(char *)((longlong)param_2 + 0x69) != '\0') {
      uVar11 = (undefined4)CONCAT71((int7)(local_698 >> 8),1);
      uVar12 = 0;
      uVar13 = CONCAT71((int7)((ulonglong)unaff_R15 >> 8),1);
      goto LAB_18007d4dd;
    }
    local_c8 = param_2[9];
    uStack_c0 = param_2[10];
    local_b8 = *(undefined4 *)(param_2 + 0xb);
    uStack_b4 = *(undefined4 *)((longlong)param_2 + 0x5c);
    uStack_b0 = *(undefined4 *)(param_2 + 0xc);
    uStack_ac = *(undefined4 *)((longlong)param_2 + 100);
    uStack_e0 = *(undefined4 *)(param_2 + 6);
    uStack_dc = *(undefined4 *)((longlong)param_2 + 0x34);
    uStack_d8 = *(undefined4 *)(param_2 + 7);
    uStack_d4 = *(undefined4 *)((longlong)param_2 + 0x3c);
    uStack_d0 = param_2[8];
    local_a8 = 0;
    local_e8 = CONCAT31(local_e8._1_3_,2);
    uVar13 = param_3;
    local_70 = FUN_180093fd0(&local_108);
    local_60 = uVar13;
    if ((local_70 & 1) == 0) {
      local_54 = 1;
      uVar11 = (undefined4)CONCAT71((int7)((ulonglong)param_3 >> 8),1);
      FUN_18007cb20(&local_108);
    }
    else {
      uVar8 = 2;
      if (*(char *)(param_1 + 0x80) != '\x02') {
        local_53 = 1;
        FUN_1800acad0(&local_6d8,param_1 + 0x70);
        local_138 = local_6d8;
        lStack_130 = lStack_6d0;
        uStack_8c = (undefined3)((ulonglong)local_6c8 >> 0x28);
        uVar8 = (undefined1)local_6c8;
        local_90 = local_6c8._1_4_;
      }
      local_128 = local_138;
      lVar1 = local_128;
      uStack_120 = lStack_130;
      lVar6 = uStack_120;
      local_88 = local_90;
      uStack_84 = uStack_8c;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        lVar2 = *plVar3;
        *plVar3 = *plVar3 + 1;
        UNLOCK();
        if (*plVar3 == 0 || SCARRY8(lVar2,1) != *plVar3 < 0) goto LAB_18007d9a2;
      }
      local_660 = CONCAT71(uStack_a7,local_a8);
      local_670 = CONCAT44(uStack_b4,local_b8);
      uStack_668 = CONCAT44(uStack_ac,uStack_b0);
      local_680 = local_c8;
      plStack_678 = (longlong *)uStack_c0;
      local_690 = CONCAT44(uStack_d4,uStack_d8);
      plStack_688 = (longlong *)uStack_d0;
      uStack_6a0 = CONCAT44(uStack_e4,local_e8);
      local_698 = CONCAT44(uStack_dc,uStack_e0);
      uStack_6b0 = local_f8;
      lStack_6c0 = local_108;
      local_6b8 = uStack_100;
      local_128._0_4_ = (undefined4)local_138;
      local_128._4_4_ = (undefined4)((ulonglong)local_138 >> 0x20);
      uStack_120._0_4_ = (undefined4)lStack_130;
      uStack_120._4_4_ = (undefined4)((ulonglong)lStack_130 >> 0x20);
      local_658 = (undefined4)local_128;
      uStack_654 = local_128._4_4_;
      uStack_650 = (undefined4)uStack_120;
      uStack_64c = uStack_120._4_4_;
      local_647 = local_90;
      uStack_643 = uStack_8c;
      lStack_6d0 = 1;
      local_640 = local_78;
      local_6d8 = 3;
      lVar2 = *(longlong *)(param_1 + 0x90);
      lVar4 = *(longlong *)(param_1 + 0x98);
      local_6c8 = plVar3;
      local_648 = uVar8;
      local_128 = lVar1;
      uStack_120 = lVar6;
      FUN_180027490();
      pvVar10 = (void *)thunk_FUN_1801d32d0(0x5a0,8);
      if (pvVar10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201705(8,0x5a0);
      }
      lVar1 = *(longlong *)(lVar4 + 0x10);
      memcpy(pvVar10,&local_6d8,0x5a0);
      local_53 = 0;
      (**(code **)(lVar4 + 0x18))
                (lVar2 + (lVar1 - 1U & 0xfffffffffffffff0) + 0x10,pvVar10,&PTR_FUN_18020cda0);
      uVar11 = 0;
    }
    local_49 = (char)uVar11;
    local_4a = 0;
    local_4b = 0;
    local_4c = 1;
    FUN_180050d00(local_70,local_60);
    local_70 = CONCAT44(local_70._4_4_,uVar11);
    uVar15 = 0;
    uVar12 = 0;
    uVar13 = 0;
  }
  else {
    uVar12 = param_2[6];
    local_118 = param_2[7];
    uStack_110 = param_2[8];
    uVar11 = (undefined4)CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
    uVar13 = 0;
LAB_18007d4dd:
    local_70 = CONCAT44(local_70._4_4_,uVar11);
    uVar15 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
  }
  local_f8 = local_68[5];
  local_108 = local_68[3];
  uStack_100 = local_68[4];
  plVar5 = *(longlong **)(param_1 + 0x90);
  lVar6 = *(longlong *)(param_1 + 0x98);
  LOCK();
  lVar1 = *plVar5;
  *plVar5 = *plVar5 + 1;
  UNLOCK();
  if (*plVar5 != 0 && SCARRY8(lVar1,1) == *plVar5 < 0) {
    uStack_6b0 = local_118;
    local_6a8 = uStack_110;
    local_670 = *local_68;
    uStack_668 = local_68[1];
    local_660 = local_68[2];
    lStack_6d0 = 1;
    lStack_6c0 = 1;
    local_6d8 = 4;
    local_6c8 = plVar3;
    local_6b8 = uVar12;
    uStack_6a0 = local_108;
    local_698 = uStack_100;
    local_690 = local_f8;
    plStack_688 = plVar5;
    local_680 = lVar6;
    plStack_678 = plVar9;
    FUN_180027490();
    pvVar10 = (void *)thunk_FUN_1801d32d0(0x5a0,8);
    local_60 = uVar15;
    if (pvVar10 == (void *)0x0) {
      local_80 = uVar13;
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x5a0);
    }
    lVar1 = *(longlong *)(lVar6 + 0x10);
    memcpy(pvVar10,&local_6d8,0x5a0);
    cVar14 = (char)local_70;
    local_4a = (undefined1)uVar13;
    local_4b = (undefined1)uVar15;
    local_4c = 0;
    local_49 = cVar14;
    (**(code **)(lVar6 + 0x18))
              ((longlong)plVar5 + (lVar1 - 1U & 0xfffffffffffffff0) + 0x10,pvVar10,
               &PTR_FUN_18020cda0);
    plVar3 = local_78;
    if (cVar14 != '\0') {
      LOCK();
      *(undefined1 *)((longlong)local_78 + 0x42) = 1;
      UNLOCK();
      LOCK();
      lVar1 = local_78[4];
      *(char *)(local_78 + 4) = '\x01';
      UNLOCK();
      local_80 = uVar13;
      if ((char)lVar1 == '\0') {
        lVar1 = local_78[2];
        local_78[2] = 0;
        LOCK();
        *(undefined1 *)(local_78 + 4) = 0;
        UNLOCK();
        if (lVar1 != 0) {
          (**(code **)(lVar1 + 0x18))(local_78[3]);
        }
      }
      LOCK();
      lVar1 = plVar3[7];
      *(char *)(plVar3 + 7) = '\x01';
      UNLOCK();
      if ((char)lVar1 == '\0') {
        lVar1 = plVar3[5];
        plVar3[5] = 0;
        LOCK();
        lVar6 = plVar3[7];
        *(undefined1 *)(plVar3 + 7) = 0;
        UNLOCK();
        if (lVar1 != 0) {
          (**(code **)(lVar1 + 8))(plVar3[6],(char)lVar6);
        }
      }
      uVar13 = local_80;
      LOCK();
      *local_78 = *local_78 + -1;
      UNLOCK();
      if (*local_78 == 0) {
        local_4d = (undefined1)local_80;
        local_4e = (undefined1)local_60;
        local_4f = 0;
        FUN_18003cda0(&local_78);
      }
    }
    if ((char)uVar13 != '\0') {
      FUN_1800755d0(local_68 + 6);
    }
    if ((char)local_60 != '\0') {
      if (local_68[9] == 0) {
        local_60 = local_68[10];
        local_68 = (undefined8 *)local_68[0xb];
        if ((code *)*local_68 != (code *)0x0) {
          (*(code *)*local_68)(local_60);
        }
        if (local_68[1] != 0) {
          thunk_FUN_1801d3330(local_60,local_68[1],local_68[2]);
        }
      }
      else {
        (**(code **)(local_68[9] + 0x20))(local_68[0xc],local_68[10],local_68[0xb]);
      }
    }
    return;
  }
LAB_18007d9a2:
                    /* WARNING: Does not return */
  pcVar7 = (code *)invalidInstructionException();
  (*pcVar7)();
}


