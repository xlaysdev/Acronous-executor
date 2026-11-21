/* FUN_180160670 @ 180160670 */

undefined8 * FUN_180160670(undefined8 *param_1)

{
  code *pcVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (*(longlong *)PTR_DAT_1802fd4b8 == 0) {
    if (*(longlong *)PTR_DAT_1802fd4b0 == 2) {
      plVar6 = (longlong *)PTR_DAT_1802fd4c0;
    }
    else {
LAB_180160741:
      plVar6 = (longlong *)PTR_DAT_1802fd4c8;
    }
    lVar9 = *plVar6;
    plVar8 = (longlong *)plVar6[1];
    uVar7 = plVar6[2];
    plVar6 = plVar8;
    if (lVar9 == 1) {
      plVar6 = (longlong *)
               ((longlong)plVar8 + (*(longlong *)(uVar7 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
    }
    (**(code **)(uVar7 + 0x88))(&local_50,plVar6);
    if (local_50 != 0) {
      *param_1 = 2;
      param_1[4] = 0;
      return param_1;
    }
  }
  else {
    puVar2 = (ulonglong *)FUN_180160ac0();
    if ((char)puVar2[5] != '\x01') {
      if ((char)puVar2[5] == '\x02') goto LAB_180160741;
      FUN_1801d8880(puVar2,FUN_1801600d0);
      *(undefined1 *)(puVar2 + 5) = 1;
    }
    uVar7 = puVar2[4];
    *(undefined1 *)(puVar2 + 4) = 0;
    if ((char)uVar7 != '\0') {
      if (0x7ffffffffffffffe < *puVar2) {
        FUN_180201940(&DAT_18025f3e8);
        goto LAB_180160901;
      }
      *puVar2 = *puVar2 + 1;
      uVar10 = puVar2[1];
      if (uVar10 == 2) {
        if (*(longlong *)PTR_DAT_1802fd4b0 == 2) {
          puVar3 = (ulonglong *)PTR_DAT_1802fd4c0;
        }
        else {
          puVar3 = (ulonglong *)PTR_DAT_1802fd4c8;
        }
        uVar10 = *puVar3;
      }
      else {
        puVar3 = puVar2 + 1;
      }
      plVar8 = (longlong *)puVar3[1];
      uVar7 = puVar3[2];
      plVar6 = plVar8;
      if ((uVar10 & 1) != 0) {
        plVar6 = (longlong *)
                 ((longlong)plVar8 + (*(longlong *)(uVar7 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10)
        ;
      }
      uVar4 = (**(code **)(uVar7 + 0x88))(&local_50,plVar6);
      if (local_50 == 0) {
        local_50 = local_48;
        if ((uVar10 & 1) == 0) {
          uVar4 = (**(code **)(uVar7 + 0x70))(plVar8,&local_50);
          uVar5 = 0;
        }
        else {
          uVar4 = (**(code **)(uVar7 + 0x70))
                            ((longlong)plVar8 +
                             (*(longlong *)(uVar7 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                             &local_50);
          LOCK();
          lVar9 = *plVar8;
          *plVar8 = *plVar8 + 1;
          UNLOCK();
          if (*plVar8 == 0 || SCARRY8(lVar9,1) != *plVar8 < 0) goto LAB_180160901;
          uVar5 = 1;
        }
      }
      else {
        uVar5 = 2;
        local_40 = 0;
      }
      *puVar2 = *puVar2 - 1;
      *(undefined1 *)(puVar2 + 4) = 1;
      goto LAB_1801608d2;
    }
    lVar9 = *(longlong *)PTR_DAT_1802fd4c8;
    plVar8 = *(longlong **)(PTR_DAT_1802fd4c8 + 8);
    uVar7 = *(ulonglong *)(PTR_DAT_1802fd4c8 + 0x10);
    plVar6 = plVar8;
    if (lVar9 == 1) {
      plVar6 = (longlong *)
               ((longlong)plVar8 + (*(longlong *)(uVar7 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
    }
    uVar4 = (**(code **)(uVar7 + 0x88))(&local_50,plVar6);
    if (local_50 != 0) {
      uVar5 = 2;
      local_40 = 0;
      goto LAB_1801608d2;
    }
  }
  local_50 = local_48;
  if ((char)lVar9 == '\0') {
    uVar4 = (**(code **)(uVar7 + 0x70))(plVar8,&local_50);
    uVar5 = 0;
  }
  else {
    uVar4 = (**(code **)(uVar7 + 0x70))
                      ((longlong)plVar8 +
                       (*(longlong *)(uVar7 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,&local_50);
    LOCK();
    lVar9 = *plVar8;
    *plVar8 = *plVar8 + 1;
    UNLOCK();
    if (*plVar8 == 0 || SCARRY8(lVar9,1) != *plVar8 < 0) {
LAB_180160901:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar5 = 1;
  }
LAB_1801608d2:
  *param_1 = uVar5;
  param_1[1] = plVar8;
  param_1[2] = uVar7;
  param_1[3] = uVar4;
  param_1[4] = local_40;
  return param_1;
}


