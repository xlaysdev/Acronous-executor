/* FUN_1801b27a0 @ 1801b27a0 */

longlong * FUN_1801b27a0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  bool bVar7;
  ulonglong *local_80;
  undefined1 *local_78;
  ulonglong *local_70;
  undefined1 *local_68;
  ulonglong local_60;
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_60 = param_2[2];
  local_58 = param_3;
  if (local_60 < param_3) {
    local_80 = &local_58;
    local_78 = &LAB_1800273d0;
    local_70 = &local_60;
    local_68 = &LAB_1800273d0;
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0(&DAT_180285a98,&local_80,&DAT_180285ac0);
  }
  uVar5 = param_2[3];
  if ((uVar5 & 1) == 0) {
    LOCK();
    plVar3 = (longlong *)(uVar5 + 0x20);
    lVar1 = *plVar3;
    *plVar3 = *plVar3 + 1;
    UNLOCK();
    if (*plVar3 == 0 || SCARRY8(lVar1,1) != *plVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1801fca10();
    }
  }
  else {
    FUN_180027490();
    plVar3 = (longlong *)thunk_FUN_1801d32d0(0x28,8);
    if (plVar3 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x28);
    }
    uVar4 = uVar5 >> 5;
    lVar1 = *param_2;
    lVar6 = param_2[1];
    *plVar3 = uVar4 + local_60;
    plVar3[1] = lVar1 - uVar4;
    plVar3[2] = lVar6 + uVar4;
    plVar3[3] = (ulonglong)((uint)(uVar5 >> 2) & 7);
    plVar3[4] = 2;
    param_2[3] = (longlong)plVar3;
  }
  lVar1 = *param_2;
  uVar5 = param_2[1];
  lVar6 = param_2[2];
  plVar3 = (longlong *)param_2[3];
  if (param_3 != 0) {
    if (((ulonglong)plVar3 & 1) != 0) {
      uVar4 = (ulonglong)plVar3 >> 5;
      uVar2 = (uint)plVar3;
      local_50 = param_2;
      if (param_3 + uVar4 >> 0x3b == 0) {
        plVar3 = (longlong *)((ulonglong)(uVar2 & 0x1f) | (param_3 + uVar4) * 0x20);
      }
      else {
        FUN_180027490();
        plVar3 = (longlong *)thunk_FUN_1801d32d0(0x28,8);
        if (plVar3 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_180201705(8,0x28);
        }
        *plVar3 = uVar4 + lVar6;
        plVar3[1] = lVar1 - uVar4;
        plVar3[2] = uVar5 + uVar4;
        plVar3[3] = (ulonglong)(uVar2 >> 2 & 7);
        plVar3[4] = 1;
      }
      param_2 = local_50;
    }
    lVar1 = lVar1 + param_3;
    bVar7 = uVar5 < param_3;
    uVar5 = uVar5 - param_3;
    if (bVar7) {
      uVar5 = 0;
    }
    lVar6 = lVar6 - param_3;
  }
  param_2[2] = param_3;
  uVar4 = param_2[1];
  if (param_3 < (ulonglong)param_2[1]) {
    uVar4 = param_3;
  }
  param_2[1] = uVar4;
  *param_1 = lVar1;
  param_1[1] = uVar5;
  param_1[2] = lVar6;
  param_1[3] = (longlong)plVar3;
  return param_1;
}


