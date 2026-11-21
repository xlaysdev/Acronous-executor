/* FUN_180160410 @ 180160410 */

undefined8 * FUN_180160410(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*(longlong *)PTR_DAT_1802fd4b8 == 0) {
    if (*(longlong *)PTR_DAT_1802fd4b0 != 2) goto LAB_180160515;
    plVar9 = *(longlong **)(PTR_DAT_1802fd4c0 + 8);
    uVar10 = *(ulonglong *)(PTR_DAT_1802fd4c0 + 0x10);
    iVar2 = *(int *)PTR_DAT_1802fd4c0;
  }
  else {
    puVar4 = (ulonglong *)FUN_180160ac0();
    if ((char)puVar4[5] != '\x01') {
      if ((char)puVar4[5] == '\x02') goto LAB_180160515;
      FUN_1801d8880(puVar4,FUN_1801600d0);
      *(undefined1 *)(puVar4 + 5) = 1;
    }
    uVar10 = puVar4[4];
    *(undefined1 *)(puVar4 + 4) = 0;
    if ((char)uVar10 != '\0') {
      if (0x7ffffffffffffffe < *puVar4) {
        FUN_180201940(&DAT_18025f3e8);
        goto LAB_180160602;
      }
      *puVar4 = *puVar4 + 1;
      uVar7 = puVar4[1];
      if (uVar7 == 2) {
        if (*(longlong *)PTR_DAT_1802fd4b0 == 2) {
          puVar5 = (ulonglong *)PTR_DAT_1802fd4c0;
        }
        else {
          puVar5 = (ulonglong *)PTR_DAT_1802fd4c8;
        }
        uVar7 = *puVar5;
      }
      else {
        puVar5 = puVar4 + 1;
      }
      local_50[0] = 1;
      plVar9 = (longlong *)puVar5[1];
      uVar10 = puVar5[2];
      if ((uVar7 & 1) == 0) {
        local_40 = param_2;
        local_38 = param_3;
        uVar6 = (**(code **)(uVar10 + 0x38))(plVar9,local_50);
        uVar8 = 0;
      }
      else {
        local_40 = param_2;
        local_38 = param_3;
        uVar6 = (**(code **)(uVar10 + 0x38))
                          ((longlong)plVar9 +
                           (*(longlong *)(uVar10 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,local_50)
        ;
        LOCK();
        lVar1 = *plVar9;
        *plVar9 = *plVar9 + 1;
        UNLOCK();
        if (*plVar9 == 0 || SCARRY8(lVar1,1) != *plVar9 < 0) goto LAB_180160602;
        uVar8 = 1;
      }
      *puVar4 = *puVar4 - 1;
      *(undefined1 *)(puVar4 + 4) = 1;
      goto LAB_1801605d5;
    }
LAB_180160515:
    plVar9 = *(longlong **)(PTR_DAT_1802fd4c8 + 8);
    uVar10 = *(ulonglong *)(PTR_DAT_1802fd4c8 + 0x10);
    iVar2 = *(int *)PTR_DAT_1802fd4c8;
  }
  if (iVar2 == 1) {
    local_50[0] = 1;
    local_40 = param_2;
    local_38 = param_3;
    uVar6 = (**(code **)(uVar10 + 0x38))
                      ((longlong)plVar9 +
                       (*(longlong *)(uVar10 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,local_50);
    LOCK();
    lVar1 = *plVar9;
    *plVar9 = *plVar9 + 1;
    UNLOCK();
    if (*plVar9 == 0 || SCARRY8(lVar1,1) != *plVar9 < 0) {
LAB_180160602:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar8 = 1;
  }
  else {
    local_50[0] = 1;
    local_40 = param_2;
    local_38 = param_3;
    uVar6 = (**(code **)(uVar10 + 0x38))(plVar9,local_50);
    uVar8 = 0;
  }
LAB_1801605d5:
  *param_1 = uVar8;
  param_1[1] = plVar9;
  param_1[2] = uVar10;
  param_1[3] = uVar6;
  param_1[4] = param_2;
  return param_1;
}


