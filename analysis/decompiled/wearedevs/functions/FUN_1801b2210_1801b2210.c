/* FUN_1801b2210 @ 1801b2210 */

undefined8 FUN_1801b2210(longlong *param_1,ulonglong param_2,char param_3)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  void *pvVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_50;
  longlong local_48;
  longlong local_40;
  
  uVar8 = param_1[1];
  puVar2 = (ulonglong *)param_1[3];
  if (((ulonglong)puVar2 & 1) != 0) {
    uVar4 = (ulonglong)puVar2 >> 5;
    local_50 = param_1[2] + uVar4;
    if (uVar4 < uVar8 || local_50 - uVar8 < param_2) {
      if (param_3 == '\0') {
        return 0;
      }
      local_48 = *param_1 - uVar4;
      local_40 = uVar4 + uVar8;
      if (param_1[2] - uVar8 < param_2) {
        FUN_1801f6a80(&local_50,local_40,param_2,1,1);
      }
      *param_1 = local_48 + uVar4;
      param_1[2] = local_50 - uVar4;
    }
    else {
      pvVar7 = (void *)(*param_1 - uVar4);
      memcpy(pvVar7,(void *)*param_1,uVar8);
      *param_1 = (longlong)pvVar7;
      param_1[3] = (ulonglong)((uint)puVar2 & 0x1f);
      param_1[2] = local_50;
    }
    return 1;
  }
  uVar4 = param_2 + uVar8;
  if (CARRY8(param_2,uVar8)) {
    if (param_3 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0("overflowC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\bytes-1.12.1\\src\\bytes_mut.rs"
                    ,0x11,&DAT_180285a28);
    }
  }
  else if (puVar2[4] == 1) {
    pvVar7 = (void *)puVar2[1];
    uVar5 = *param_1 - (longlong)pvVar7;
    uVar10 = uVar5 + uVar4;
    if (!CARRY8(uVar5,uVar4)) {
      uVar9 = *puVar2;
      if (uVar10 <= uVar9) {
        param_1[2] = uVar4;
        return 1;
      }
      if (uVar4 <= uVar9 && uVar8 <= uVar5) {
        memcpy(pvVar7,(void *)*param_1,uVar8);
        *param_1 = (longlong)pvVar7;
        param_1[2] = *puVar2;
        return 1;
      }
      if (param_3 == '\0') {
        return 0;
      }
      uVar4 = uVar9 * 2;
      if (uVar9 * 2 < uVar10) {
        uVar4 = uVar10;
      }
      uVar8 = uVar8 + uVar5;
      puVar2[2] = uVar8;
      if (uVar9 - uVar8 < uVar4 - uVar8) {
        FUN_1801f6a80(puVar2,uVar8,uVar4 - uVar8,1,1);
        uVar9 = *puVar2;
        pvVar7 = (void *)puVar2[1];
      }
      *param_1 = (longlong)pvVar7 + uVar5;
      param_1[2] = uVar9 - uVar5;
      return 1;
    }
    if (param_3 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0("overflowC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\bytes-1.12.1\\src\\bytes_mut.rs"
                    ,0x11,&DAT_180285a40);
    }
  }
  else if (param_3 != '\0') {
    puVar1 = puVar2 + 4;
    uVar8 = puVar2[3];
    local_48 = 1;
    uVar5 = 1L << ((char)uVar8 + 9U & 0x3f);
    if (uVar5 <= uVar4) {
      uVar5 = uVar4;
    }
    if (uVar8 == 0) {
      uVar5 = uVar4;
    }
    if ((longlong)uVar5 < 0) {
      uVar6 = 0;
LAB_1801b235d:
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(uVar6,uVar5);
    }
    if (uVar5 != 0) {
      FUN_180027490();
      uVar6 = 1;
      local_48 = thunk_FUN_1801d32d0(uVar5,1);
      if (local_48 == 0) goto LAB_1801b235d;
    }
    local_40 = 0;
    pvVar7 = (void *)*param_1;
    uVar4 = param_1[1];
    local_50 = uVar5;
    if (uVar5 < uVar4) {
      FUN_1801f6a80(&local_50,0,uVar4,1,1);
    }
    lVar3 = local_40;
    memcpy((void *)(local_48 + local_40),pvVar7,uVar4);
    local_40 = lVar3 + uVar4;
    LOCK();
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (*puVar1 == 0) {
      if (*puVar2 != 0) {
        thunk_FUN_1801d3330(puVar2[1],*puVar2,1);
      }
      thunk_FUN_1801d3330(puVar2,0x28,8);
    }
    param_1[3] = uVar8 * 4 + 1;
    *param_1 = local_48;
    param_1[2] = local_50;
    return 1;
  }
  return 0;
}


