/* FUN_180070d90 @ 180070d90 */

undefined8 * FUN_180070d90(undefined8 *param_1,longlong *param_2,char *param_3,byte param_4)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  char cVar13;
  bool bVar14;
  undefined *local_c8;
  char ***local_c0;
  undefined **local_b8;
  undefined *local_b0;
  char *local_a8;
  char **local_a0;
  code *local_98;
  undefined ***local_90;
  undefined ***local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar3 = *param_2;
  cVar13 = lVar3 != 0;
  local_a8 = param_3;
  if ((param_4 & cVar13) == 0) {
    cVar8 = *param_3;
    pppuVar12 = (undefined ***)param_1;
    if (cVar8 != '\0') {
      if (cVar8 == '\x01') {
        cVar13 = param_3[1];
      }
      else {
        puVar4 = *(undefined8 **)(param_3 + 8);
        FUN_180027490();
        local_88 = (undefined ***)thunk_FUN_1801d32d0(0x20,8);
        if (local_88 == (undefined ***)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_180201705(8,0x20);
        }
        cVar13 = (**(code **)*puVar4)(&local_80,puVar4 + 3,puVar4[1],puVar4[2]);
        *(undefined4 *)(local_88 + 2) = (undefined4)local_70;
        *(undefined4 *)((longlong)local_88 + 0x14) = local_70._4_4_;
        *(undefined4 *)(local_88 + 3) = (undefined4)uStack_68;
        *(undefined4 *)((longlong)local_88 + 0x1c) = uStack_68._4_4_;
        *(undefined4 *)local_88 = (undefined4)local_80;
        *(undefined4 *)((longlong)local_88 + 4) = local_80._4_4_;
        *(undefined4 *)(local_88 + 1) = (undefined4)uStack_78;
        *(undefined4 *)((longlong)local_88 + 0xc) = uStack_78._4_4_;
        pppuVar12 = local_88;
      }
    }
    local_80._0_2_ = CONCAT11(cVar13,cVar8);
    uStack_78 = pppuVar12;
    (*(code *)**(undefined8 **)(param_3 + 0x10))
              (&local_70,param_3 + 0x28,*(undefined8 *)(param_3 + 0x18),
               *(undefined8 *)(param_3 + 0x20));
    param_1[4] = local_60;
    param_1[5] = uStack_58;
    param_1[2] = local_70;
    param_1[3] = uStack_68;
    *param_1 = local_80;
    param_1[1] = uStack_78;
    param_1[6] = 0;
  }
  else {
    pppuVar12 = (undefined ***)(lVar3 + 0x10);
    pppuVar11 = (undefined ***)CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    LOCK();
    bVar14 = *(char *)(lVar3 + 0x10) == '\0';
    if (bVar14) {
      *(char *)(lVar3 + 0x10) = '\x01';
    }
    UNLOCK();
    if (!bVar14) {
      pppuVar11 = pppuVar12;
      FUN_180200390();
    }
    puVar7 = PTR_DAT_1802fd600;
    local_88 = pppuVar12;
    if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
      local_4c = 0;
      cVar13 = *(char *)(lVar3 + 0x11);
    }
    else {
      local_4c = FUN_180200a50();
      local_4c = local_4c ^ 1;
      cVar13 = *(char *)(lVar3 + 0x11);
    }
    if (cVar13 != '\0') {
      uVar5 = (ulonglong)uStack_78 >> 8;
      uStack_78 = (undefined ***)CONCAT71((int7)uVar5,(char)local_4c);
      local_80 = local_88;
                    /* WARNING: Subroutine does not return */
      FUN_180201bc0(&DAT_18020ce58,0x2b,&local_80,&PTR_FUN_18020ce38,
                    &PTR_s_C__Users_burne__cargo_registry_s_18020c920);
    }
    cVar13 = *param_3;
    if (cVar13 == '\0') {
      cVar8 = '\0';
    }
    else if (cVar13 == '\x02') {
      puVar4 = *(undefined8 **)(param_3 + 8);
      FUN_180027490();
      local_90 = (undefined ***)thunk_FUN_1801d32d0(0x20,8);
      if (local_90 == (undefined ***)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201705(8,0x20);
      }
      cVar8 = (**(code **)*puVar4)(&local_80,puVar4 + 3,puVar4[1],puVar4[2]);
      local_90[2] = local_70;
      local_90[3] = uStack_68;
      *(undefined4 *)local_90 = (undefined4)local_80;
      *(undefined4 *)((longlong)local_90 + 4) = local_80._4_4_;
      *(undefined4 *)(local_90 + 1) = (undefined4)uStack_78;
      *(undefined4 *)((longlong)local_90 + 0xc) = uStack_78._4_4_;
      pppuVar11 = local_90;
    }
    else {
      cVar8 = param_3[1];
    }
    local_80._0_2_ = CONCAT11(cVar8,cVar13);
    uStack_78 = pppuVar11;
    (*(code *)**(undefined8 **)(param_3 + 0x10))
              (&local_70,param_3 + 0x28,*(undefined8 *)(param_3 + 0x18),
               *(undefined8 *)(param_3 + 0x20));
    pppuVar12 = (undefined ***)(lVar3 + 0x28);
    cVar13 = FUN_1800a1c60(pppuVar12,&local_80);
    puVar6 = PTR_PTR_1802fb568;
    if (cVar13 == '\0') {
      cVar13 = *param_3;
      if (cVar13 == '\0') {
        cVar8 = '\0';
      }
      else if (cVar13 == '\x02') {
        puVar4 = *(undefined8 **)(param_3 + 8);
        FUN_180027490();
        local_90 = (undefined ***)thunk_FUN_1801d32d0(0x20,8);
        if (local_90 == (undefined ***)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_180201705(8,0x20);
        }
        cVar8 = (**(code **)*puVar4)(&local_80,puVar4 + 3,puVar4[1],puVar4[2]);
        local_90[2] = local_70;
        local_90[3] = uStack_68;
        *(undefined4 *)local_90 = (undefined4)local_80;
        *(undefined4 *)((longlong)local_90 + 4) = local_80._4_4_;
        *(undefined4 *)(local_90 + 1) = (undefined4)uStack_78;
        *(undefined4 *)((longlong)local_90 + 0xc) = uStack_78._4_4_;
        pppuVar12 = local_90;
      }
      else {
        cVar8 = param_3[1];
      }
      local_80._0_2_ = CONCAT11(cVar8,cVar13);
      uStack_78 = pppuVar12;
      (*(code *)**(undefined8 **)(param_3 + 0x10))
                (&local_70,param_3 + 0x28,*(undefined8 *)(param_3 + 0x18),
                 *(undefined8 *)(param_3 + 0x20));
      do {
        lVar10 = *(longlong *)(lVar3 + 8);
        while (lVar10 != -1) {
          if (lVar10 < 0) {
            local_a0 = (char **)&DAT_1802071f8;
            local_98 = (code *)&LAB_1800a5660;
                    /* WARNING: Subroutine does not return */
            FUN_180201ee0(&DAT_180207208,&local_a0,&PTR_s_C__Users_burne__rustup_toolchain_180207280
                         );
          }
          LOCK();
          lVar1 = *(longlong *)(lVar3 + 8);
          bVar14 = lVar10 == lVar1;
          if (bVar14) {
            *(longlong *)(lVar3 + 8) = lVar10 + 1;
          }
          else {
            lVar10 = lVar1;
          }
          UNLOCK();
          if (bVar14) {
            param_1[4] = local_60;
            param_1[5] = uStack_58;
            param_1[2] = local_70;
            param_1[3] = uStack_68;
            *(undefined4 *)param_1 = (undefined4)local_80;
            *(undefined4 *)((longlong)param_1 + 4) = local_80._4_4_;
            *(undefined4 *)(param_1 + 1) = (undefined4)uStack_78;
            *(undefined4 *)((longlong)param_1 + 0xc) = uStack_78._4_4_;
            param_1[6] = lVar3;
            goto joined_r0x00018007110a;
          }
        }
      } while( true );
    }
    if (*(longlong *)PTR_DAT_1802fd448 == 0) {
      bVar2 = PTR_PTR_1802fb568[0x10];
      uVar9 = (uint)bVar2;
      if (((bVar2 - 1 < 2) ||
          ((bVar2 != 0 && (uVar9 = FUN_1801faaf0(PTR_PTR_1802fb568), (char)uVar9 != '\0')))) &&
         (cVar13 = FUN_1801601d0(*(undefined8 *)puVar6,uVar9), cVar13 != '\0')) {
        lVar10 = *(longlong *)puVar6;
        uStack_68 = (undefined **)(lVar10 + 0x30);
        local_a0 = &local_a8;
        local_98 = FUN_180041870;
        local_c8 = &DAT_18020c938;
        local_c0 = &local_a0;
        local_b8 = &local_c8;
        local_b0 = &DAT_18020c968;
        local_80 = (undefined ***)0x1;
        uStack_78 = &local_b8;
        local_70 = (undefined **)0x1;
        FUN_180160ae0(lVar10,&local_80);
      }
    }
    *(undefined1 *)param_1 = 3;
joined_r0x00018007110a:
    if ((((char)local_4c == '\0') && ((*(ulonglong *)puVar7 & 0x7fffffffffffffff) != 0)) &&
       (cVar13 = FUN_180200a50(), cVar13 == '\0')) {
      *(undefined1 *)(lVar3 + 0x11) = 1;
    }
    LOCK();
    cVar13 = *(char *)local_88;
    *(char *)local_88 = '\0';
    UNLOCK();
    if (cVar13 == '\x02') {
      WakeByAddressSingle();
    }
  }
  return param_1;
}


