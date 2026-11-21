/* FUN_1800651a0 @ 1800651a0 */

ulonglong FUN_1800651a0(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined *puVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined *puVar14;
  undefined8 unaff_R14;
  undefined7 uVar16;
  undefined *puVar15;
  uint *local_1f8;
  undefined7 *local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  int local_1d0;
  undefined4 uStack_1cc;
  uint uStack_1c8;
  undefined4 uStack_1c4;
  undefined1 uStack_1c0;
  undefined4 uStack_1bf;
  undefined4 uStack_1bb;
  undefined7 uStack_1b7;
  undefined4 *local_c0;
  undefined7 local_b8;
  undefined1 uStack_b1;
  undefined7 uStack_b0;
  undefined1 uStack_a9;
  undefined7 uStack_a8;
  int iStack_a1;
  undefined4 uStack_9d;
  uint uStack_99;
  undefined4 uStack_95;
  undefined4 local_91;
  undefined4 uStack_8d;
  undefined4 uStack_89;
  undefined4 uStack_85;
  longlong local_80;
  longlong *local_78 [2];
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  uint local_54;
  longlong *local_50;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  lVar10 = *param_2;
  uVar16 = (undefined7)((ulonglong)unaff_R14 >> 8);
  if (lVar10 == 0) {
    uVar8 = param_2[3];
    unaff_R14 = CONCAT71(uVar16,2);
    if (uVar8 < 0x80000000) goto LAB_180065235;
LAB_1800651f4:
    uVar8 = CONCAT71(uVar16,2);
  }
  else {
    if ((int)lVar10 == 1) {
      uVar8 = 0;
      if ((ulonglong)param_2[3] <= (ulonglong)param_2[2]) {
        uVar8 = param_2[2] - param_2[3];
      }
      unaff_R14 = CONCAT71(uVar16,2);
      if (0x7fffffff < uVar8) goto LAB_1800651f4;
    }
    else {
      uVar8 = 0;
    }
LAB_180065235:
    local_54 = (uint)uVar8;
    local_42 = 1;
    local_50 = param_2;
    lVar9 = FUN_180152e90(param_4);
    iVar13 = 6;
    if (3 < *(uint *)(lVar9 + 0x40)) {
      iVar13 = *(uint *)(lVar9 + 0x40) - 4;
    }
    if (((iVar13 == 5) || (iVar13 == 3)) && (*(char *)(lVar9 + 0x44) != '\0')) {
      uVar8 = (ulonglong)local_54;
      local_42 = 1;
      lVar10 = FUN_180152f00(param_4);
      *(longlong *)(lVar10 + 0x90) = *(longlong *)(lVar10 + 0x90) + uVar8;
      puVar5 = PTR_DAT_1802fd448;
      puVar15 = PTR_PTR_1802fbc48;
      if (*(longlong *)PTR_DAT_1802fd448 == 0) {
        bVar1 = PTR_PTR_1802fbc48[0x10];
        uVar7 = (uint)bVar1;
        if (1 < bVar1 - 1) {
          if (bVar1 != 0) {
            local_42 = 1;
            uVar7 = FUN_1801faaf0(PTR_PTR_1802fbc48);
            if ((char)uVar7 != '\0') goto LAB_1800654e0;
          }
          goto LAB_1800652aa;
        }
LAB_1800654e0:
        local_42 = 1;
        cVar6 = FUN_1801601d0(*(undefined8 *)puVar15,uVar7);
        if (cVar6 == '\0') goto LAB_1800652aa;
        lVar9 = *(longlong *)puVar15;
        local_42 = 1;
        uStack_1e8 = FUN_180152e90(param_4);
        lVar10 = lVar9 + 0x30;
        uStack_1e8 = uStack_1e8 + 0x130;
        local_1f8 = &local_54;
        local_1f0 = (undefined7 *)&DAT_18020a2c8;
        local_1e0._0_4_ = 0x8020a2c8;
        local_1e0._4_4_ = 1;
        local_b8 = 1;
        uStack_b1 = 0;
        uStack_b0 = SUB87(&local_1f8,0);
        uStack_a9 = (undefined1)((ulonglong)&local_1f8 >> 0x38);
        uStack_a8 = 2;
        iStack_a1._1_3_ = (uint3)lVar10;
        iStack_a1 = (uint)iStack_a1._1_3_ << 8;
        uStack_9d = (undefined4)((ulonglong)lVar10 >> 0x18);
        uStack_99._0_1_ = (undefined1)((ulonglong)lVar10 >> 0x38);
        local_42 = 1;
        FUN_180160410(&local_80,lVar9,&local_b8);
        if (local_80 != 2) {
          local_43 = 1;
          FUN_180161780(&local_80,&local_68);
        }
      }
      else {
LAB_1800652aa:
        local_80 = 2;
        local_60 = 0;
      }
      puVar15 = PTR_PTR_1802fbc50;
      local_1e0 = CONCAT44(local_1e0._4_4_,(undefined4)local_1e0);
      if (*(longlong *)puVar5 == 0) {
        bVar1 = PTR_PTR_1802fbc50[0x10];
        uVar7 = (uint)bVar1;
        if (bVar1 - 1 < 2) {
LAB_1800655be:
          local_41 = 1;
          cVar6 = FUN_1801601d0(*(undefined8 *)puVar15,uVar7);
          local_1e0 = CONCAT44(local_1e0._4_4_,(undefined4)local_1e0);
          if (cVar6 != '\0') {
            lVar10 = *(longlong *)puVar15;
            local_41 = 1;
            lVar9 = FUN_180152e90(param_4);
            local_1e0 = lVar10 + 0x30;
            local_b8 = (undefined7)(lVar9 + 0x90);
            uStack_b1 = (undefined1)((ulonglong)(lVar9 + 0x90) >> 0x38);
            uStack_b0 = 0x180209c20;
            uStack_a9 = 0;
            local_1f8 = (uint *)0x1;
            local_1f0 = &local_b8;
            uStack_1e8._0_4_ = 1;
            uStack_1e8._4_4_ = 0;
            local_41 = 1;
            FUN_180160ae0(*(undefined8 *)puVar15,&local_1f8);
          }
        }
        else {
          local_1e0 = CONCAT44(local_1e0._4_4_,(undefined4)local_1e0);
          if (bVar1 != 0) {
            local_41 = 1;
            uVar7 = FUN_1801faaf0(PTR_PTR_1802fbc50);
            if ((char)uVar7 != '\0') goto LAB_1800655be;
          }
        }
      }
      local_41 = 1;
      lVar10 = FUN_180152e90(param_4);
      puVar15 = (undefined *)(ulonglong)*(uint *)(lVar10 + 0x130);
      local_41 = 1;
      lVar10 = FUN_180152e90(param_4);
      if (puVar15 < *(undefined **)(lVar10 + 0x90)) {
        local_41 = 1;
        lVar10 = FUN_180152e90(param_4);
        puVar15 = *(undefined **)(lVar10 + 0x90);
        local_41 = 1;
        lVar10 = FUN_180152f00(param_4);
        puVar14 = (undefined *)0xffffffff;
        if (puVar15 < (undefined *)0xffffffff) {
          puVar14 = puVar15;
        }
        *(int *)(lVar10 + 0x130) = (int)puVar14;
        local_41 = 1;
        FUN_18012f440(param_1,param_4);
      }
      if ((*(byte *)((longlong)local_50 + 0x2e) & 1) != 0) {
        local_41 = 1;
        lVar10 = FUN_180152f00(param_4);
        local_41 = 1;
        FUN_180137f70(lVar10 + 0x40);
        local_41 = 1;
        FUN_18012ec50(param_1,0,param_4,param_5);
      }
      puVar14 = PTR_PTR_1802fbc58;
      if (*(longlong *)puVar5 == 0) {
        bVar1 = PTR_PTR_1802fbc58[0x10];
        uVar7 = (uint)bVar1;
        puVar15 = puVar14;
        if (bVar1 - 1 < 2) {
LAB_180065658:
          local_41 = 1;
          cVar6 = FUN_1801601d0(*(undefined8 *)puVar14,uVar7);
          if (cVar6 != '\0') {
            lVar10 = *(longlong *)puVar14;
            local_41 = 1;
            lVar9 = FUN_180152e90(param_4);
            local_58 = *(undefined4 *)(lVar9 + 0x8c);
            local_c0 = &local_58;
            local_41 = 1;
            lVar9 = FUN_180152e90(param_4);
            local_1e0 = lVar10 + 0x30;
            local_b8 = SUB87(&local_c0,0);
            uStack_b1 = (undefined1)((ulonglong)&local_c0 >> 0x38);
            uStack_b0 = 0x18020a340;
            uStack_a9 = 0;
            uStack_a8 = (undefined7)(lVar9 + 0x90);
            iStack_a1 = CONCAT31(0x209c20,(char)((ulonglong)(lVar9 + 0x90) >> 0x38));
            uStack_9d = 0x180;
            uStack_99 = uStack_99 & 0xffffff00;
            local_1f8 = (uint *)0x1;
            local_1f0 = &local_b8;
            uStack_1e8._0_4_ = 2;
            uStack_1e8._4_4_ = 0;
            local_41 = 1;
            FUN_180160ae0(*(undefined8 *)puVar14,&local_1f8);
          }
        }
        else if (bVar1 != 0) {
          local_41 = 1;
          uVar7 = FUN_1801faaf0(PTR_PTR_1802fbc58);
          if ((char)uVar7 != '\0') goto LAB_180065658;
        }
      }
      local_41 = 1;
      lVar10 = FUN_180152e90(param_4);
      if (*(int *)(lVar10 + 0x8c) < 1) {
        local_41 = 1;
        lVar10 = FUN_180152e90(param_4);
        if (*(longlong *)(lVar10 + 0x90) == 0) goto LAB_1800653b5;
        local_41 = 1;
        piVar11 = (int *)FUN_180152f00(param_4);
        lVar10 = *local_50;
        lVar9 = local_50[1];
        local_1d0 = (int)local_50[2];
        uStack_1cc = *(undefined4 *)((longlong)local_50 + 0x14);
        uStack_1c8 = *(uint *)(local_50 + 3);
        uStack_1c4 = *(undefined4 *)((longlong)local_50 + 0x1c);
        lVar4 = local_50[4];
        uStack_8d = *(undefined4 *)((longlong)local_50 + 0x24);
        uStack_89 = (undefined4)local_50[5];
        uStack_85 = *(undefined4 *)((longlong)local_50 + 0x2c);
        lVar3 = local_50[5];
        uStack_b1 = (undefined1)lVar10;
        uStack_b0 = (undefined7)((ulonglong)lVar10 >> 8);
        uStack_a9 = (undefined1)lVar9;
        uStack_a8 = (undefined7)((ulonglong)lVar9 >> 8);
        uStack_1e8._1_3_ = (uint3)local_b8;
        uStack_1e8._0_4_ = (uint)uStack_1e8._1_3_ << 8;
        uStack_1e8._4_4_ = (undefined4)((uint7)local_b8 >> 0x18);
        local_1e0._0_4_ = (undefined4)lVar10;
        local_1e0._4_4_ = (undefined4)((ulonglong)lVar10 >> 0x20);
        uStack_1d8 = (undefined4)lVar9;
        uStack_1d4 = (undefined4)((ulonglong)lVar9 >> 0x20);
        local_91._0_1_ = (undefined1)lVar4;
        local_91._1_3_ = (undefined3)((ulonglong)lVar4 >> 8);
        uStack_1bf = CONCAT13((undefined1)uStack_8d,local_91._1_3_);
        uStack_1c0 = (undefined1)local_91;
        uStack_1bb._0_3_ = (undefined3)((uint)uStack_8d >> 8);
        uStack_1bb._3_1_ = (undefined1)lVar3;
        uStack_1b7 = (undefined7)((ulonglong)lVar3 >> 8);
        local_1f8 = (uint *)0x0;
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        local_41 = 0;
        iStack_a1 = local_1d0;
        uStack_9d = uStack_1cc;
        uStack_99 = uStack_1c8;
        uStack_95 = uStack_1c4;
        local_91 = (int)lVar4;
        FUN_1800920e0(param_3,uVar2,&local_1f8);
        if (*piVar11 == 1) {
          if (*(ulonglong *)(param_3 + 0x10) <= *(ulonglong *)(piVar11 + 4)) {
LAB_1800658b5:
            local_41 = 0;
                    /* WARNING: Subroutine does not return */
            FUN_180201ec0("invalid key",0xb,&PTR_s_C__Users_burne__cargo_registry_s_18020d9b8);
          }
          lVar10 = *(ulonglong *)(piVar11 + 4) * 0x138;
          if (*(int *)(*(longlong *)(param_3 + 8) + lVar10) == 2) goto LAB_1800658b5;
          puVar12 = (undefined8 *)(*(longlong *)(param_3 + 8) + lVar10);
          *puVar12 = 1;
          puVar12[1] = uVar2;
        }
        else {
          piVar11[0] = 1;
          piVar11[1] = 0;
          *(undefined8 *)(piVar11 + 2) = uVar2;
        }
        *(undefined8 *)(piVar11 + 4) = uVar2;
      }
      else {
LAB_1800653b5:
        local_1f0 = (undefined7 *)*local_50;
        uStack_1e8._0_4_ = (int)local_50[1];
        uStack_1e8._4_4_ = *(undefined4 *)((longlong)local_50 + 0xc);
        local_1e0._0_4_ = (undefined4)local_50[2];
        local_1e0._4_4_ = *(undefined4 *)((longlong)local_50 + 0x14);
        uStack_1d8 = (undefined4)local_50[3];
        uStack_1d4 = *(undefined4 *)((longlong)local_50 + 0x1c);
        local_1d0 = (int)local_50[4];
        uStack_1cc = *(undefined4 *)((longlong)local_50 + 0x24);
        uStack_1c8 = *(uint *)(local_50 + 5);
        uStack_1c4 = *(undefined4 *)((longlong)local_50 + 0x2c);
        local_1f8 = (uint *)((ulonglong)local_1f8 & 0xffffffffffffff00);
        local_41 = 0;
        FUN_180061f80(param_1,&local_1f8,param_3,param_4,param_6);
      }
      if ((int)local_80 != 2) {
        local_43 = 0;
        FUN_180161750(&local_80,&local_68);
        lVar10 = local_80;
        if ((local_80 != 2) && (FUN_1801617b0(&local_80,local_68), lVar10 != 0)) {
          LOCK();
          *local_78[0] = *local_78[0] + -1;
          UNLOCK();
          if (*local_78[0] == 0) {
            local_42 = 0;
            FUN_18003cc40(local_78);
          }
        }
      }
      uVar8 = CONCAT71((int7)((ulonglong)puVar15 >> 8),0xd);
      goto LAB_1800658a0;
    }
    local_42 = 1;
    lVar9 = FUN_180152e90(param_4);
    uVar8 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),3 < *(uint *)(lVar9 + 0x40));
    param_2 = local_50;
  }
  if ((int)lVar10 == 1) {
    if (param_2[2] != 0) {
      thunk_FUN_1801d3330(param_2[1],param_2[2],1);
    }
  }
  else if (lVar10 == 0) {
    (**(code **)(param_2[1] + 0x20))(param_2[4],param_2[2],param_2[3]);
  }
LAB_1800658a0:
  return uVar8 & 0xffffffff;
}


