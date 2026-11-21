/* FUN_180164040 @ 180164040 */

longlong * FUN_180164040(longlong *param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  byte bVar6;
  uint uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong *puVar11;
  longlong lVar12;
  bool bVar13;
  ulonglong local_90;
  ulonglong *local_88;
  undefined1 *local_80;
  ulonglong *local_78;
  undefined1 *local_70;
  char local_68 [8];
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  
  plVar8 = (longlong *)param_1[3];
  if (plVar8 == (longlong *)0x0) {
    puVar1 = (ulonglong *)(param_1 + 1);
    do {
      FUN_180163f50(local_68,param_1);
      if ((local_68[0] == '\0') || (param_2 < local_50)) {
        local_90 = param_2;
        if (param_2 < *puVar1) {
LAB_180164332:
          local_80 = &LAB_1800273d0;
          local_78 = &local_90;
          local_70 = &LAB_1800273d0;
          local_88 = puVar1;
                    /* WARNING: Subroutine does not return */
          FUN_180201ee0(&DAT_180260063,&local_88,&PTR_s_C__Users_burne__cargo_registry_s_1802600e8);
        }
        if (*puVar1 < param_2) {
          *puVar1 = param_2;
        }
        plVar8 = (longlong *)param_1[3];
        if (plVar8 == (longlong *)0x0) {
          return (longlong *)0x0;
        }
        lVar10 = *plVar8;
        param_1[3] = lVar10;
        goto joined_r0x0001801642c4;
      }
      if (5 < local_60) {
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(local_60,6,&PTR_s_C__Users_burne__cargo_registry_s_180260100);
      }
      lVar10 = *param_1;
      bVar6 = (byte)local_58 & 0x3f;
      puVar3 = (ulonglong *)(lVar10 + 0x408 + local_60 * 0x410);
      *puVar3 = *puVar3 & (-2L << bVar6 | 0xfffffffffffffffeU >> 0x40 - bVar6);
      if (0x3f < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(local_58,0x40,&PTR_s_C__Users_burne__cargo_registry_s_180261408);
      }
      lVar10 = lVar10 + local_60 * 0x410;
      puVar3 = *(ulonglong **)(lVar10 + 8 + local_58 * 0x10);
      puVar2 = (undefined8 *)(lVar10 + local_58 * 0x10);
      *puVar2 = 0;
      puVar2[1] = 0;
      if (puVar3 != (ulonglong *)0x0) {
LAB_180164169:
        puVar11 = puVar3;
        puVar3 = (ulonglong *)*puVar11;
        if (puVar3 != (ulonglong *)0x0) {
          puVar3[1] = 0;
        }
        *puVar11 = 0;
        puVar11[1] = 0;
        uVar9 = puVar11[3];
LAB_180164190:
        if (0xfffffffffffffffd < uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_180201ee0("mark_pending called when the timer entry is in an invalid state",0x7f,
                        &PTR_s_C__Users_burne__cargo_registry_s_1802609b8);
        }
        if (uVar9 <= local_50) goto code_r0x00018016419f;
        puVar11[2] = uVar9;
        uVar9 = uVar9 ^ local_50 | 0x3f;
        if (0xffffffffd < uVar9) {
          uVar9 = 0xffffffffe;
        }
        uVar4 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> uVar4 == 0; uVar4 = uVar4 - 1) {
          }
        }
        uVar9 = (ulonglong)((uint)((int)(uVar4 ^ 1) * 0x2b) >> 8);
        if (0x23 < (uVar4 ^ 1)) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(uVar9,6,&PTR_s_C__Users_burne__cargo_registry_s_1802601c0);
        }
        lVar10 = uVar9 * 0x410;
        lVar12 = lVar10 + *param_1;
        uVar7 = (uint)(puVar11[2] >>
                      ((char)*(undefined4 *)(*param_1 + 0x400 + lVar10) * '\x06' & 0x3fU)) & 0x3f;
        uVar9 = (ulonglong)(uVar7 << 4);
        puVar2 = (undefined8 *)(lVar12 + uVar9);
        puVar5 = *(ulonglong **)(uVar9 + lVar12);
        if (puVar5 == puVar11) {
          local_88 = puVar11;
          FUN_1801fafda(CONCAT71((int7)((ulonglong)puVar5 >> 8),1),puVar2,&local_88,0);
          goto LAB_180164310;
        }
        puVar11[1] = (ulonglong)puVar5;
        *puVar11 = 0;
        if (puVar5 != (ulonglong *)0x0) {
          *puVar5 = (ulonglong)puVar11;
        }
        *puVar2 = puVar11;
        if (puVar2[1] == 0) {
          puVar2[1] = puVar11;
        }
        *(ulonglong *)(lVar12 + 0x408) = *(ulonglong *)(lVar12 + 0x408) | 1L << (sbyte)uVar7;
        goto LAB_180164161;
      }
LAB_18016412c:
      local_90 = local_50;
      if (local_50 < *puVar1) goto LAB_180164332;
      if (*puVar1 < local_50) {
        *puVar1 = local_50;
      }
      plVar8 = (longlong *)param_1[3];
    } while (plVar8 == (longlong *)0x0);
  }
  lVar10 = *plVar8;
  param_1[3] = lVar10;
joined_r0x0001801642c4:
  if (lVar10 == 0) {
    param_1[2] = 0;
  }
  else {
    *(undefined8 *)(lVar10 + 8) = 0;
  }
  *plVar8 = 0;
  plVar8[1] = 0;
  return plVar8;
code_r0x00018016419f:
  LOCK();
  uVar4 = puVar11[3];
  bVar13 = uVar9 == uVar4;
  if (bVar13) {
    puVar11[3] = 0xfffffffffffffffe;
  }
  else {
    uVar9 = uVar4;
  }
  UNLOCK();
  if (bVar13) goto code_r0x0001801641a7;
  goto LAB_180164190;
code_r0x0001801641a7:
  puVar11[2] = 0xffffffffffffffff;
  puVar5 = (ulonglong *)param_1[2];
  local_88 = puVar11;
  if (puVar5 == puVar11) {
LAB_180164310:
    FUN_1801fafda(1,param_1 + 2,&local_88,0);
    goto LAB_180164332;
  }
  puVar11[1] = (ulonglong)puVar5;
  *puVar11 = 0;
  if (puVar5 != (ulonglong *)0x0) {
    *puVar5 = (ulonglong)puVar11;
  }
  param_1[2] = (longlong)puVar11;
  if (param_1[3] == 0) {
    param_1[3] = (longlong)puVar11;
  }
LAB_180164161:
  local_88 = puVar11;
  if (puVar3 == (ulonglong *)0x0) goto LAB_18016412c;
  goto LAB_180164169;
}


