/* FUN_180166410 @ 180166410 */

ulonglong FUN_180166410(undefined8 *param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  char *pcVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  code *pcVar7;
  char cVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined7 uVar15;
  ulonglong *puVar16;
  bool bVar17;
  ulonglong *local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  undefined8 local_b0;
  ulonglong *local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  uint local_8c;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong *local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  puVar2 = (ulonglong *)*param_1;
  pcVar3 = (char *)param_1[1];
  puVar4 = (ulonglong *)param_1[2];
  puVar5 = (ulonglong *)param_1[3];
  local_78 = puVar2 + 1;
  puVar1 = puVar2 + 2;
  puVar9 = param_2;
  puVar16 = (ulonglong *)PTR_DAT_1802fd600;
LAB_180166466:
  while( true ) {
    uVar15 = (undefined7)((ulonglong)puVar1 >> 8);
    if (*pcVar3 != '\0') break;
    if (*puVar2 >> 2 != *puVar4) {
LAB_180166920:
      *pcVar3 = '\x02';
      goto LAB_180166924;
    }
    uVar12 = *puVar2 & 0xfffffffffffffffc;
    LOCK();
    bVar17 = uVar12 + 2 == *puVar2;
    if (bVar17) {
      *puVar2 = uVar12;
    }
    UNLOCK();
    if (bVar17) goto LAB_180166920;
    if (param_2 == (ulonglong *)0x0) {
      local_98 = 0;
    }
    else {
      local_98 = (**(code **)*param_2)(param_2[1]);
      puVar16 = (ulonglong *)PTR_DAT_1802fd600;
      local_a8 = puVar9;
    }
    puVar9 = (ulonglong *)CONCAT71((int7)((ulonglong)puVar9 >> 8),1);
    LOCK();
    bVar17 = (char)*local_78 == '\0';
    if (bVar17) {
      *(undefined1 *)local_78 = 1;
    }
    UNLOCK();
    if (!bVar17) {
      local_63 = 1;
      FUN_180200390(local_78);
      puVar16 = (ulonglong *)PTR_DAT_1802fd600;
    }
    if ((*puVar16 & 0x7fffffffffffffff) == 0) {
      local_8c = 0;
    }
    else {
      local_63 = 1;
      local_8c = FUN_180200a50();
      local_8c = local_8c ^ 1;
      puVar16 = (ulonglong *)PTR_DAT_1802fd600;
    }
    uVar12 = *puVar2;
    if (uVar12 >> 2 == *puVar4) {
LAB_180166500:
      uVar11 = (uint)uVar12 & 3;
      uVar13 = (longlong)&switchD_18016650c::switchdataD_180260b58 +
               (longlong)(int)(&switchD_18016650c::switchdataD_180260b58)[uVar11];
      switch(uVar11) {
      case 0:
        uVar12 = uVar12 & 0xfffffffffffffffc;
        uVar13 = uVar12 + 1;
        LOCK();
        uVar10 = *puVar2;
        bVar17 = uVar12 == uVar10;
        if (bVar17) {
          *puVar2 = uVar13;
        }
        else {
          uVar12 = uVar10;
        }
        UNLOCK();
        if (!bVar17) {
          local_c8 = (ulonglong)((uint)uVar12 & 3);
          if (local_c8 != 2) {
            local_64 = 1;
            local_65 = 1;
                    /* WARNING: Subroutine does not return */
            FUN_180201c9f(0,&local_c8,&DAT_180260790,0);
          }
          goto LAB_180166500;
        }
      case 1:
        if (local_98 == 0) {
          local_70 = CONCAT44(local_70._4_4_,1);
          local_a0 = 0;
        }
        else {
          local_a0 = puVar5[2];
          uVar13 = puVar5[3];
          puVar5[2] = local_98;
          puVar5[3] = (ulonglong)local_a8;
          local_70 = (ulonglong)local_70._4_4_ << 0x20;
          local_c0 = uVar13;
        }
        puVar4 = (ulonglong *)*puVar1;
        local_68 = puVar4 == puVar5;
        local_d8 = puVar5;
        if ((bool)local_68) {
          local_66 = 1;
          FUN_1801fb0d2(CONCAT71((int7)(uVar13 >> 8),1),puVar1,&local_d8,0);
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        puVar5[1] = (ulonglong)puVar4;
        *puVar5 = 0;
        if (puVar4 != (ulonglong *)0x0) {
          *puVar4 = (ulonglong)puVar5;
        }
        puVar2[2] = (ulonglong)puVar5;
        if (puVar2[3] == 0) {
          puVar2[3] = (ulonglong)puVar5;
          *pcVar3 = '\x01';
        }
        else {
          *pcVar3 = '\x01';
        }
        if (((char)local_8c == '\0') && ((*puVar16 & 0x7fffffffffffffff) != 0)) {
          local_66 = 1;
          cVar8 = FUN_180200a50();
          if (cVar8 == '\0') {
            *(undefined1 *)((longlong)puVar2 + 9) = 1;
          }
        }
        uVar13 = local_a0;
        LOCK();
        uVar12 = *local_78;
        *(undefined1 *)local_78 = 0;
        UNLOCK();
        if ((char)uVar12 == '\x02') {
          local_66 = 1;
          WakeByAddressSingle(local_78);
        }
        if (uVar13 != 0) {
          local_66 = 0;
          (**(code **)(uVar13 + 0x18))(local_c0);
        }
        uVar12 = CONCAT71(uVar15,1);
        if ((char)local_70 == '\x01' && local_98 != 0) {
          (**(code **)(local_98 + 0x18))(local_a8);
        }
        goto LAB_180166926;
      case 2:
        puVar9 = (ulonglong *)(uVar12 & 0xfffffffffffffffc);
        uVar12 = (longlong)puVar9 + 2;
        LOCK();
        uVar13 = *puVar2;
        bVar17 = uVar12 == uVar13;
        if (bVar17) {
          *puVar2 = (ulonglong)puVar9;
        }
        else {
          uVar12 = uVar13;
        }
        UNLOCK();
        if (!bVar17) goto code_r0x000180166555;
        break;
      case 3:
        local_64 = 1;
        local_65 = 1;
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("internal error: entered unreachable codeC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.53.1\\src\\runtime\\blocking\\schedule.rs"
                      ,0x28,&PTR_s_C__Users_burne__cargo_registry_s_1802607d0);
      }
    }
    *pcVar3 = '\x02';
    if (((char)local_8c == '\0') && ((*puVar16 & 0x7fffffffffffffff) != 0)) {
      local_63 = 1;
      cVar8 = FUN_180200a50();
      puVar16 = (ulonglong *)PTR_DAT_1802fd600;
      if (cVar8 == '\0') {
        *(undefined1 *)((longlong)puVar2 + 9) = 1;
      }
    }
    LOCK();
    uVar12 = *local_78;
    *(undefined1 *)local_78 = 0;
    UNLOCK();
    if ((char)uVar12 == '\x02') {
      local_63 = 1;
      WakeByAddressSingle(local_78);
      puVar16 = (ulonglong *)PTR_DAT_1802fd600;
    }
    if (local_98 != 0) {
      (**(code **)(local_98 + 0x18))(local_a8);
      puVar16 = (ulonglong *)PTR_DAT_1802fd600;
    }
  }
  if (*pcVar3 != '\x01') {
LAB_180166924:
    uVar12 = 0;
    goto LAB_180166926;
  }
  uVar12 = puVar5[4];
  if (uVar12 - 1 < 2) {
LAB_180166900:
    uVar12 = puVar5[2];
    puVar5[2] = 0;
    if (uVar12 != 0) {
      (**(code **)(uVar12 + 0x18))(puVar5[3]);
    }
    puVar5[4] = 0;
    goto LAB_180166920;
  }
  if (uVar12 != 0) {
    if (uVar12 != 5) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("internal error: entered unreachable codeC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.53.1\\src\\runtime\\blocking\\schedule.rs"
                    ,0x28,&PTR_s_C__Users_burne__cargo_registry_s_1802607e8);
    }
    goto LAB_180166900;
  }
  LOCK();
  bVar17 = (char)*local_78 == '\0';
  if (bVar17) {
    *(undefined1 *)local_78 = 1;
  }
  UNLOCK();
  if (!bVar17) {
    local_b0 = 0;
    local_b8 = local_70;
    local_67 = 1;
    FUN_180200390(local_78);
    puVar16 = (ulonglong *)PTR_DAT_1802fd600;
  }
  if ((*puVar16 & 0x7fffffffffffffff) == 0) {
    puVar9 = (ulonglong *)0x0;
  }
  else {
    local_b0 = 0;
    local_b8 = local_70;
    local_67 = 1;
    uVar11 = FUN_180200a50();
    puVar9 = (ulonglong *)((ulonglong)uVar11 ^ 1);
    puVar16 = (ulonglong *)PTR_DAT_1802fd600;
  }
  uVar12 = puVar5[4];
  local_98 = CONCAT44(local_98._4_4_,(int)puVar9);
  if (uVar12 - 1 < 2) {
LAB_18016694a:
    uVar12 = puVar5[2];
    uVar13 = puVar5[3];
    puVar5[2] = 0;
    puVar5[4] = 0;
    if (((char)puVar9 == '\0') && ((*puVar16 & 0x7fffffffffffffff) != 0)) {
      local_61 = 0;
      local_62 = 1;
      local_88 = uVar13;
      local_80 = uVar12;
      cVar8 = FUN_180200a50();
      if (cVar8 == '\0') {
        *(undefined1 *)((longlong)puVar2 + 9) = 1;
      }
    }
    LOCK();
    uVar10 = *local_78;
    *(undefined1 *)local_78 = 0;
    UNLOCK();
    if ((char)uVar10 == '\x02') {
      local_61 = 0;
      local_62 = 1;
      local_88 = uVar13;
      local_80 = uVar12;
      WakeByAddressSingle(local_78);
    }
    if (uVar12 != 0) {
      local_61 = 0;
      local_62 = 0;
      local_88 = uVar13;
      local_80 = uVar12;
      (**(code **)(uVar12 + 0x18))();
    }
    goto LAB_180166920;
  }
  if (uVar12 != 0) {
    if (uVar12 != 5) {
      local_80 = 0;
      local_88 = local_70;
      local_61 = 1;
      local_62 = 1;
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("internal error: entered unreachable codeC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.53.1\\src\\runtime\\blocking\\schedule.rs"
                    ,0x28,&PTR_s_C__Users_burne__cargo_registry_s_1802607e8);
    }
    goto LAB_18016694a;
  }
  if (*puVar2 >> 2 != *puVar4) {
    uVar12 = puVar5[2];
    local_70 = puVar5[3];
    puVar5[2] = 0;
    if (*puVar5 == 0) {
      if ((ulonglong *)*puVar1 == puVar5) {
        puVar6 = (ulonglong *)puVar5[1];
        *puVar1 = (ulonglong)puVar6;
        goto joined_r0x000180166679;
      }
    }
    else {
      puVar6 = (ulonglong *)puVar5[1];
      *(ulonglong **)(*puVar5 + 8) = puVar6;
joined_r0x000180166679:
      if (puVar6 == (ulonglong *)0x0) {
        if ((ulonglong *)puVar2[3] != puVar5) goto LAB_180166685;
        puVar2[3] = *puVar5;
      }
      else {
        *puVar6 = *puVar5;
      }
      *puVar5 = 0;
      puVar5[1] = 0;
    }
LAB_180166685:
    *pcVar3 = '\x02';
    if (((char)puVar9 == '\0') && ((*puVar16 & 0x7fffffffffffffff) != 0)) {
      local_61 = 0;
      local_62 = 1;
      local_a0 = uVar12;
      local_88 = local_70;
      local_80 = uVar12;
      cVar8 = FUN_180200a50();
      puVar16 = (ulonglong *)PTR_DAT_1802fd600;
      uVar12 = local_a0;
      if (cVar8 == '\0') {
        *(undefined1 *)((longlong)puVar2 + 9) = 1;
      }
    }
    LOCK();
    uVar13 = *local_78;
    *(undefined1 *)local_78 = 0;
    UNLOCK();
    if ((char)uVar13 == '\x02') {
      local_88 = local_70;
      local_61 = 0;
      local_62 = 1;
      local_a0 = uVar12;
      local_80 = uVar12;
      WakeByAddressSingle(local_78);
      puVar16 = (ulonglong *)PTR_DAT_1802fd600;
      uVar12 = local_a0;
    }
    if (uVar12 != 0) {
      local_88 = local_70;
      local_61 = 0;
      local_62 = 0;
      local_80 = uVar12;
      (**(code **)(uVar12 + 0x18))();
      puVar16 = (ulonglong *)PTR_DAT_1802fd600;
    }
    goto LAB_180166466;
  }
  if (param_2 == (ulonglong *)0x0) {
LAB_180166aa9:
    uVar13 = 0;
  }
  else {
    if ((undefined8 *)puVar5[2] == (undefined8 *)0x0) {
      puVar14 = (undefined8 *)*param_2;
    }
    else {
      puVar14 = (undefined8 *)*param_2;
      if ((undefined8 *)puVar5[2] == puVar14 && puVar5[3] == param_2[1]) goto LAB_180166aa9;
    }
    local_80 = 0;
    local_88 = local_70;
    local_61 = 1;
    local_62 = 1;
    uVar10 = (*(code *)*puVar14)();
    uVar13 = puVar5[2];
    uVar12 = puVar5[3];
    puVar5[2] = uVar10;
    puVar5[3] = local_70;
    local_70 = uVar12;
  }
  if (((char)local_98 == '\0') && ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) != 0)) {
    local_88 = local_70;
    local_61 = 0;
    local_62 = 1;
    local_80 = uVar13;
    cVar8 = FUN_180200a50();
    if (cVar8 == '\0') {
      *(undefined1 *)((longlong)puVar2 + 9) = 1;
    }
  }
  LOCK();
  uVar12 = *local_78;
  *(undefined1 *)local_78 = 0;
  UNLOCK();
  if ((char)uVar12 == '\x02') {
    local_88 = local_70;
    local_61 = 0;
    local_62 = 1;
    local_80 = uVar13;
    WakeByAddressSingle(local_78);
  }
  uVar12 = CONCAT71(uVar15,1);
  if (uVar13 != 0) {
    local_88 = local_70;
    local_61 = 0;
    local_62 = 0;
    local_80 = uVar13;
    (**(code **)(uVar13 + 0x18))();
  }
LAB_180166926:
  return uVar12 & 0xffffffff;
code_r0x000180166555:
  local_d0 = uVar12 & 3;
  if (local_d0 != 0) {
    local_64 = 1;
    local_65 = 1;
                    /* WARNING: Subroutine does not return */
    FUN_180201c9f(0,&local_d0,&DAT_1802607b0,0);
  }
  goto LAB_180166500;
}


