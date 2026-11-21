/* FUN_180176490 @ 180176490 */

undefined8 FUN_180176490(longlong *param_1,ulonglong *param_2,undefined1 param_3,ulonglong *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined *puVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong *puVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined1 local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  ulonglong *local_d0;
  undefined1 local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined8 local_b0;
  HANDLE local_a8;
  longlong local_a0;
  ulonglong *local_98;
  longlong *local_90;
  HANDLE local_88;
  undefined8 local_80;
  undefined1 local_70;
  undefined8 *local_68;
  char *local_60;
  uint local_54;
  ulonglong *local_50;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  local_60 = (char *)(lVar1 + 0x40);
  LOCK();
  bVar15 = *(char *)(lVar1 + 0x40) == '\0';
  if (bVar15) {
    *(char *)(lVar1 + 0x40) = '\x01';
  }
  UNLOCK();
  local_d0 = param_2;
  local_c8 = param_3;
  if (!bVar15) {
    local_41 = 1;
    FUN_180200390(local_60);
  }
  puVar4 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_54 = 0;
    if (*(char *)(lVar1 + 0xc4) == '\0') goto LAB_1801765bc;
LAB_180176516:
    LOCK();
    uVar12 = *param_2;
    *param_2 = *param_2 - 0x40;
    UNLOCK();
    if (uVar12 < 0x40) {
      local_50 = param_2;
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("assertion failed: prev.ref_count() >= 1",0x27,
                    &PTR_s_C__Users_burne__cargo_registry_s_180263618);
    }
    uVar16 = (**(code **)(param_2[2] + 0x30))(param_2);
    lVar13 = 0;
    goto LAB_18017652d;
  }
  local_41 = 1;
  local_54 = FUN_180200a50();
  local_54 = local_54 ^ 1;
  if (*(char *)(lVar1 + 0xc4) != '\0') goto LAB_180176516;
LAB_1801765bc:
  local_90 = (longlong *)CONCAT71(local_90._1_7_,param_3);
  uVar12 = *(ulonglong *)(lVar1 + 0x48);
  uVar8 = *(ulonglong *)(lVar1 + 0x60);
  local_98 = param_2;
  if (uVar8 == uVar12) {
    FUN_18016f860(lVar1 + 0x48);
    uVar12 = *(ulonglong *)(lVar1 + 0x48);
    uVar8 = *(ulonglong *)(lVar1 + 0x60);
  }
  *(ulonglong *)(lVar1 + 0x60) = uVar8 + 1;
  uVar8 = uVar8 + *(longlong *)(lVar1 + 0x58);
  uVar14 = 0;
  if (uVar12 <= uVar8) {
    uVar14 = uVar12;
  }
  lVar13 = *(longlong *)(lVar1 + 0x50);
  lVar9 = (uVar8 - uVar14) * 0x10;
  *(ulonglong **)(lVar13 + lVar9) = param_2;
  *(undefined1 *)(lVar13 + 8 + lVar9) = param_3;
  LOCK();
  *(longlong *)(lVar1 + 0x100) = *(longlong *)(lVar1 + 0x100) + 1;
  UNLOCK();
  if (*(longlong *)(lVar1 + 0xf8) == 0) {
    if (*(longlong *)(lVar1 + 0xf0) == *(longlong *)(lVar1 + 0xe8)) goto LAB_18017664a;
    plVar2 = *(longlong **)(lVar1 + 0x98);
    if (plVar2 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("assertion failed: shared.shutdown_tx.is_some()",0x2e,
                    &PTR_s_C__Users_burne__cargo_registry_s_180262ea8);
    }
    LOCK();
    lVar13 = *plVar2;
    *plVar2 = *plVar2 + 1;
    UNLOCK();
    if (*plVar2 == 0 || SCARRY8(lVar13,1) != *plVar2 < 0) {
LAB_1801769ad:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    local_a8 = *(HANDLE *)(lVar1 + 0x98);
    uVar7 = *(undefined8 *)(lVar1 + 0xb8);
    uVar12 = *param_4;
    plVar2 = (longlong *)param_4[1];
    local_88 = (HANDLE)0x8000000000000000;
    local_98 = (ulonglong *)0x0;
    local_70 = 0;
    local_43 = 1;
    local_50 = local_a8;
    (**(code **)(*(longlong *)(lVar1 + 0x38) + 0x28))
              (&local_c0,
               (*(longlong *)(*(longlong *)(lVar1 + 0x38) + 0x10) - 1U & 0xfffffffffffffff0) +
               *(longlong *)(lVar1 + 0x30) + 0x10);
    local_43 = 0;
    FUN_1801dff30(&local_118,&local_98,&local_c0);
    if (*(int *)(lVar1 + 0x10) == 1) {
      local_110 = *(undefined8 *)(lVar1 + 0x18);
      local_118 = 1;
    }
    puVar10 = (ulonglong *)0x1;
    LOCK();
    lVar13 = *plVar2;
    *plVar2 = *plVar2 + 1;
    UNLOCK();
    if ((uVar12 & 1) == 0) {
      if (lVar13 < 0) goto LAB_1801769ad;
      puVar10 = (ulonglong *)0x0;
    }
    else if (lVar13 < 0) goto LAB_1801769ad;
    local_88 = local_50;
    local_128 = local_f8;
    local_138 = local_108;
    uStack_134 = uStack_104;
    uStack_130 = uStack_100;
    uStack_12c = uStack_fc;
    local_42 = 0;
    local_98 = puVar10;
    local_90 = plVar2;
    local_80 = uVar7;
    uVar16 = FUN_18017cdb0(&local_c0,&local_138,local_118,local_110,local_f0,0,&local_98);
    if (local_c0 != 0) {
      local_e8 = local_c0;
      local_e0 = local_b8;
      local_d8 = local_b0;
      LOCK();
      *(longlong *)(lVar1 + 0xf0) = *(longlong *)(lVar1 + 0xf0) + 1;
      UNLOCK();
      *(longlong *)(lVar1 + 0xb8) = *(longlong *)(lVar1 + 0xb8) + 1;
      FUN_1801862d0(&local_98,lVar1 + 0x68,uVar7,&local_e8);
      puVar10 = local_98;
      if (local_98 != (ulonglong *)0x0) {
        CloseHandle(local_88);
        LOCK();
        *puVar10 = *puVar10 - 1;
        UNLOCK();
        if (*puVar10 == 0) {
          FUN_1801e3970(&local_98);
        }
        LOCK();
        *local_90 = *local_90 + -1;
        UNLOCK();
        if (*local_90 == 0) {
          FUN_1801e3850(&local_90);
        }
      }
      goto LAB_18017664a;
    }
    uVar6 = (uint)local_b8 & 3;
    iVar11 = (int)((ulonglong)local_b8 >> 0x20);
    lVar13 = local_b8;
    switch(uVar6) {
    case 0:
      lVar9 = 0x10;
      break;
    case 1:
      lVar9 = 0xf;
      break;
    case 2:
      if (iVar11 != 0x2733) goto LAB_18017652d;
      goto LAB_18017689e;
    case 3:
      if (iVar11 == 0xd) goto LAB_18017689e;
      goto LAB_18017652d;
    }
    if (*(char *)(local_b8 + lVar9) == '\r') {
LAB_18017689e:
      if (*(longlong *)(lVar1 + 0xf0) != 0) {
        if (uVar6 == 1) {
          local_a0 = local_b8 + -1;
          local_50 = *(ulonglong **)(local_b8 + -1);
          local_68 = *(undefined8 **)(local_b8 + 7);
          if ((code *)*local_68 != (code *)0x0) {
            (*(code *)*local_68)(local_50);
          }
          if (local_68[1] != 0) {
            thunk_FUN_1801d3330(local_50,local_68[1],local_68[2]);
          }
          thunk_FUN_1801d3330(local_a0,0x18,8);
        }
        goto LAB_18017664a;
      }
    }
LAB_18017652d:
    if (((char)local_54 == '\0') && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) {
      local_41 = 0;
      cVar5 = FUN_180200a50(uVar16,lVar13);
      if (cVar5 == '\0') {
        *(undefined1 *)(lVar1 + 0x41) = 1;
      }
    }
    LOCK();
    cVar5 = *local_60;
    *local_60 = '\0';
    UNLOCK();
    uVar7 = 1;
    if (cVar5 == '\x02') {
      local_41 = 0;
      WakeByAddressSingle(local_60,lVar13);
      uVar7 = 1;
    }
  }
  else {
    LOCK();
    *(longlong *)(lVar1 + 0xf8) = *(longlong *)(lVar1 + 0xf8) + -1;
    UNLOCK();
    *(int *)(lVar1 + 0xc0) = *(int *)(lVar1 + 0xc0) + 1;
    FUN_1801df5c0(lVar1 + 0x108);
LAB_18017664a:
    if (((char)local_54 == '\0') && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) {
      local_41 = 0;
      cVar5 = FUN_180200a50();
      if (cVar5 == '\0') {
        *(undefined1 *)(lVar1 + 0x41) = 1;
      }
    }
    uVar7 = 0;
    LOCK();
    cVar5 = *local_60;
    *local_60 = '\0';
    UNLOCK();
    if (cVar5 == '\x02') {
      local_41 = 0;
      WakeByAddressSingle();
      uVar7 = 0;
    }
  }
  return uVar7;
}


