/* FUN_1801faaf0 @ 1801faaf0 */

ulonglong FUN_1801faaf0(undefined **param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined *puVar4;
  char cVar5;
  char cVar6;
  undefined **ppuVar7;
  longlong lVar8;
  undefined7 uVar13;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  int *piVar12;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  undefined *local_98;
  undefined **local_90;
  int *local_88;
  char local_80;
  undefined7 uStack_7f;
  longlong local_78;
  undefined **local_70;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  char local_49 [9];
  
  local_49[1] = -2;
  local_49[2] = -1;
  local_49[3] = -1;
  local_49[4] = -1;
  local_49[5] = -1;
  local_49[6] = -1;
  local_49[7] = -1;
  local_49[8] = -1;
  uVar13 = (undefined7)((ulonglong)param_1 >> 8);
  uVar9 = CONCAT71(uVar13,1);
  cVar5 = '\0';
  LOCK();
  cVar6 = *(char *)((longlong)param_1 + 0x11);
  if (cVar6 == '\0') {
    *(char *)((longlong)param_1 + 0x11) = '\x01';
  }
  else {
    cVar5 = cVar6;
  }
  UNLOCK();
  if (cVar6 == '\0') {
    ppuVar7 = DAT_1802fd728;
    do {
      local_90 = ppuVar7;
      param_1[1] = (undefined *)local_90;
      local_70 = param_1;
      if (param_1 == local_90) {
        piVar12 = (int *)CONCAT71(uVar13,1);
        FUN_1801faea7(piVar12,&local_70,&local_90,
                      "Attempted to register a `DefaultCallsite` that already exists! This will cause an infinite loop when attempting to read from the callsite cache. This is likely a bug! You should only need to call `DefaultCallsite::register` once per `DefaultCallsite`."
                      ,0x1f7,&DAT_18025f7b0);
        goto LAB_1801fadf7;
      }
      LOCK();
      bVar16 = local_90 == DAT_1802fd728;
      if (bVar16) {
        ppuVar7 = local_90;
        DAT_1802fd728 = param_1;
      }
      else {
        ppuVar7 = DAT_1802fd728;
      }
      UNLOCK();
    } while (!bVar16);
    FUN_180160eb0(&local_90);
    ppuVar7 = local_90;
    puVar4 = *param_1;
    local_49[0] = '\x03';
    local_98 = puVar4;
    if (local_90 == (undefined **)0x0) {
      FUN_180161550(&local_98,local_49);
      if (local_49[0] == '\x03') {
        local_49[0] = '\0';
      }
      cVar6 = (local_49[0] == '\x02') + '\x01';
      if (local_49[0] == '\0') {
        cVar6 = '\0';
      }
      LOCK();
      *(char *)(param_1 + 2) = cVar6;
      UNLOCK();
    }
    else {
      if (local_90 == (undefined **)0x1) {
        lVar10 = 8;
        lVar15 = *(longlong *)(local_88 + 4);
        if (lVar15 == 0) goto LAB_1801fad0a;
LAB_1801fabe2:
        lVar10 = *(longlong *)((longlong)local_88 + lVar10);
        lVar14 = 0;
        do {
          lVar1 = lVar10 + lVar14 * 0x18;
          local_78 = *(longlong *)(lVar10 + lVar14 * 0x18);
          if (local_78 == 1) {
            local_58 = *(longlong **)(lVar1 + 8);
            if (local_58 != (longlong *)0xffffffffffffffff) {
              lVar8 = *local_58;
              do {
                if (lVar8 == 0) goto LAB_1801fac00;
                if (lVar8 < 0) {
                  local_70 = &PTR_s_Arc_counter_overflow_18025fb70;
                  local_68 = (longlong *)&LAB_1800a5660;
                    /* WARNING: Subroutine does not return */
                  FUN_180201ee0(&DAT_18025fb80,&local_70,
                                &PTR_s_C__Users_burne__rustup_toolchain_18025fbf8);
                }
                LOCK();
                lVar3 = *local_58;
                bVar16 = lVar8 == lVar3;
                if (bVar16) {
                  *local_58 = lVar8 + 1;
                }
                else {
                  lVar8 = lVar3;
                }
                UNLOCK();
              } while (!bVar16);
              local_60 = *(longlong *)(lVar1 + 0x10);
              local_70 = (undefined **)0x1;
              plVar11 = (longlong *)
                        ((longlong)local_58 +
                        (*(longlong *)(local_60 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
              goto LAB_1801facaf;
            }
          }
          else {
            plVar11 = *(longlong **)(lVar1 + 8);
            local_60 = *(longlong *)(lVar1 + 0x10);
            local_70 = (undefined **)0x0;
            local_58 = plVar11;
LAB_1801facaf:
            local_68 = local_58;
            cVar5 = (**(code **)(local_60 + 0x20))(plVar11,puVar4);
            cVar6 = local_49[0];
            if (local_49[0] != cVar5) {
              cVar6 = '\x01';
            }
            bVar16 = local_49[0] != '\x03';
            local_49[0] = cVar5;
            if (bVar16) {
              local_49[0] = cVar6;
            }
            if ((char)local_78 != '\0') {
              LOCK();
              *local_58 = *local_58 + -1;
              UNLOCK();
              if (*local_58 == 0) {
                FUN_18003cc40(&local_68);
              }
            }
          }
LAB_1801fac00:
          lVar14 = lVar14 + 1;
        } while (lVar14 != lVar15);
        if ((local_49[0] == '\x03') || (local_49[0] == '\0')) goto LAB_1801fad0a;
        cVar6 = (local_49[0] == '\x02') + '\x01';
      }
      else {
        lVar10 = 0x18;
        lVar15 = *(longlong *)(local_88 + 8);
        if (lVar15 != 0) goto LAB_1801fabe2;
LAB_1801fad0a:
        cVar6 = '\0';
      }
      LOCK();
      *(char *)(param_1 + 2) = cVar6;
      UNLOCK();
      if (ppuVar7 != (undefined **)0x0) {
        if (ppuVar7 == (undefined **)0x1) {
          piVar12 = (int *)CONCAT71(uStack_7f,local_80);
          LOCK();
          iVar2 = *piVar12;
          *piVar12 = *piVar12 + -1;
          UNLOCK();
          if (SBORROW4(0,iVar2 - 1U & 0xbfffffff)) {
LAB_1801fad96:
            FUN_180200760();
          }
        }
        else {
          piVar12 = local_88;
          if ((local_80 == '\0') && ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) != 0)) {
LAB_1801fadf7:
            cVar6 = FUN_180200a50();
            if (cVar6 == '\0') {
              *(undefined1 *)(piVar12 + 2) = 1;
            }
          }
          LOCK();
          iVar2 = *piVar12;
          *piVar12 = *piVar12 + -0x3fffffff;
          UNLOCK();
          if (0x3fffffff < iVar2 + 0xc0000001U) goto LAB_1801fad96;
        }
      }
    }
    *(undefined1 *)((longlong)param_1 + 0x11) = 2;
  }
  else if (cVar5 != '\x02') goto LAB_1801fad4d;
  uVar9 = (ulonglong)(byte)((*(char *)(param_1 + 2) == '\x02') + 1);
  if (*(char *)(param_1 + 2) == '\0') {
    uVar9 = 0;
  }
LAB_1801fad4d:
  return uVar9 & 0xffffffff;
}


