/* FUN_18007fd00 @ 18007fd00 */

void FUN_18007fd00(char *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  char cVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  code *pcVar11;
  bool bVar12;
  longlong **local_118;
  undefined *local_110;
  undefined8 local_108;
  code *local_100;
  undefined1 local_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  longlong *local_98;
  code *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  char local_58;
  char cStack_57;
  undefined4 uStack_56;
  undefined2 uStack_52;
  longlong *local_50;
  undefined8 *local_48;
  undefined4 local_40;
  undefined1 local_3b;
  undefined1 local_3a;
  char local_39;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  cStack_57 = param_1[0x61];
  param_1[0x61] = '\x02';
  if (cStack_57 == '\x02') {
    return;
  }
  local_58 = param_1[0x60];
  local_88 = *(undefined4 *)(param_1 + 0x30);
  uStack_84 = *(undefined4 *)(param_1 + 0x34);
  uStack_80 = *(undefined4 *)(param_1 + 0x38);
  uStack_7c = *(undefined4 *)(param_1 + 0x3c);
  local_78 = *(undefined4 *)(param_1 + 0x40);
  uStack_74 = *(undefined4 *)(param_1 + 0x44);
  uStack_70 = *(undefined4 *)(param_1 + 0x48);
  uStack_6c = *(undefined4 *)(param_1 + 0x4c);
  local_68 = *(undefined4 *)(param_1 + 0x50);
  uStack_64 = *(undefined4 *)(param_1 + 0x54);
  uStack_60 = *(undefined4 *)(param_1 + 0x58);
  uStack_5c = *(undefined4 *)(param_1 + 0x5c);
  uStack_56 = *(undefined4 *)(param_1 + 0x62);
  uStack_52 = *(undefined2 *)(param_1 + 0x66);
  local_39 = '\x01';
  cVar7 = FUN_18010cd90(&uStack_60);
  if (cVar7 == '\0') {
    lVar10 = *(longlong *)(CONCAT44(uStack_84,local_88) + 0x10);
    bVar12 = lVar10 == 1;
    if ((char)local_78 == '\x02') {
      bVar12 = lVar10 != 3;
    }
    if (bVar12) {
      plVar4 = *(longlong **)(param_1 + 0x68);
      if ((undefined *)((longlong)plVar4 + 1) < (undefined *)0x2) {
LAB_18007fdb5:
        puVar6 = PTR_PTR_1802fb5e8;
        if (((char)local_78 != '\x02') && (*(longlong *)PTR_DAT_1802fd448 == 0)) {
          bVar3 = PTR_PTR_1802fb5e8[0x10];
          uVar9 = (uint)bVar3;
          if (bVar3 - 1 < 2) {
LAB_18007fdec:
            local_39 = '\x01';
            cVar7 = FUN_1801601d0(*(undefined8 *)puVar6,uVar9);
            if (cVar7 != '\0') {
              lVar10 = *(longlong *)puVar6;
              uStack_c0 = lVar10 + 0x30;
              local_100 = FUN_1800463d0;
              local_50 = (longlong *)&DAT_18020d428;
              local_48 = &local_108;
              local_118 = &local_50;
              local_110 = &DAT_18020c968;
              local_d8 = (undefined *)0x1;
              uStack_d0 = &local_118;
              local_c8 = 1;
              local_39 = '\x01';
              local_108 = param_1;
              FUN_180160ae0(lVar10,&local_d8);
            }
          }
          else if (bVar3 != 0) {
            local_39 = '\x01';
            uVar9 = FUN_1801faaf0(PTR_PTR_1802fb5e8);
            if ((char)uVar9 != '\0') goto LAB_18007fdec;
          }
        }
      }
      else {
        lVar10 = *plVar4;
        do {
          if (lVar10 == 0) goto LAB_18007fdb5;
          if (lVar10 < 0) {
            local_d8 = &DAT_1802071f8;
            uStack_d0 = (longlong ***)&LAB_1800a5660;
            local_39 = 1;
                    /* WARNING: Subroutine does not return */
            FUN_180201ee0(&DAT_180207208,&local_d8,&PTR_s_C__Users_burne__rustup_toolchain_180207298
                         );
          }
          LOCK();
          lVar2 = *plVar4;
          bVar12 = lVar10 == lVar2;
          if (bVar12) {
            *plVar4 = lVar10 + 1;
          }
          else {
            lVar10 = lVar2;
          }
          UNLOCK();
        } while (!bVar12);
        plVar1 = plVar4 + 2;
        LOCK();
        bVar12 = (char)plVar4[2] == '\0';
        if (bVar12) {
          *(undefined1 *)(plVar4 + 2) = 1;
        }
        UNLOCK();
        local_50 = plVar4;
        if (!bVar12) {
          local_3a = 1;
          FUN_180200390();
        }
        puVar6 = PTR_DAT_1802fd600;
        if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
          pcVar11 = (code *)0x0;
          if (*(char *)((longlong)plVar4 + 0x11) == '\0') goto LAB_18007ff94;
LAB_18007fed5:
          if (((char)pcVar11 == '\0') && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) {
            local_3a = 1;
            cVar7 = FUN_180200a50();
            if (cVar7 == '\0') {
              *(undefined1 *)((longlong)plVar4 + 0x11) = 1;
            }
          }
          LOCK();
          lVar10 = *plVar1;
          *(undefined1 *)plVar1 = 0;
          UNLOCK();
          cVar7 = '\x01';
          if ((char)lVar10 == '\x02') {
            local_3a = 1;
            WakeByAddressSingle(plVar1);
          }
LAB_18008006a:
          LOCK();
          *local_50 = *local_50 + -1;
          lVar10 = *local_50;
          UNLOCK();
        }
        else {
          local_3a = 1;
          uVar9 = FUN_180200a50();
          pcVar11 = (code *)((ulonglong)uVar9 ^ 1);
          if (*(char *)((longlong)plVar4 + 0x11) != '\0') goto LAB_18007fed5;
LAB_18007ff94:
          cVar8 = '\0';
          cVar7 = *param_1;
          local_40 = SUB84(pcVar11,0);
          local_98 = plVar1;
          if (cVar7 != '\0') {
            if (cVar7 == '\x01') {
              cVar8 = param_1[1];
            }
            else {
              puVar5 = *(undefined8 **)(param_1 + 8);
              local_3b = 1;
              local_90 = (code *)FUN_180068160();
              cVar8 = (**(code **)*puVar5)(&local_d8,puVar5 + 3,puVar5[1],puVar5[2]);
              *(undefined8 *)(local_90 + 0x10) = local_c8;
              *(longlong *)(local_90 + 0x18) = uStack_c0;
              *(undefined4 *)local_90 = (undefined4)local_d8;
              *(undefined4 *)(local_90 + 4) = local_d8._4_4_;
              *(undefined4 *)(local_90 + 8) = (undefined4)uStack_d0;
              *(undefined4 *)(local_90 + 0xc) = uStack_d0._4_4_;
              pcVar11 = local_90;
            }
          }
          local_108._0_2_ = CONCAT11(cVar8,cVar7);
          local_100 = pcVar11;
          (*(code *)**(undefined8 **)(param_1 + 0x10))
                    (local_f8,param_1 + 0x28,*(undefined8 *)(param_1 + 0x18),
                     *(undefined8 *)(param_1 + 0x20));
          local_a8 = CONCAT26(uStack_52,CONCAT42(uStack_56,CONCAT11(cStack_57,local_58)));
          local_b8 = local_68;
          uStack_b4 = uStack_64;
          uStack_b0 = uStack_60;
          uStack_ac = uStack_5c;
          local_c8 = CONCAT44(uStack_74,local_78);
          uStack_c0 = CONCAT44(uStack_6c,uStack_70);
          local_d8 = (undefined *)CONCAT44(uStack_84,local_88);
          uStack_d0 = (longlong ***)CONCAT44(uStack_7c,uStack_80);
          local_3b = 0;
          FUN_180073450(plVar4 + 3,&local_108,&local_d8,&local_50);
          if (((char)local_40 == '\0') && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) {
            local_3a = 0;
            cVar7 = FUN_180200a50();
            if (cVar7 == '\0') {
              *(undefined1 *)((longlong)plVar4 + 0x11) = 1;
            }
          }
          cVar7 = '\0';
          LOCK();
          lVar10 = *local_98;
          *(undefined1 *)local_98 = 0;
          UNLOCK();
          if ((char)lVar10 != '\x02') goto LAB_18008006a;
          local_3a = 0;
          WakeByAddressSingle();
          cVar7 = '\0';
          LOCK();
          *local_50 = *local_50 + -1;
          lVar10 = *local_50;
          UNLOCK();
        }
        if (lVar10 == 0) {
          local_39 = cVar7;
          FUN_18003cf20(&local_50);
        }
        if (cVar7 == '\0') {
          return;
        }
      }
      FUN_18003c220(&uStack_70);
      goto LAB_18008008f;
    }
  }
  FUN_18003c220(&uStack_70);
LAB_18008008f:
  FUN_180075690(&local_88);
  return;
}


