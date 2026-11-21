/* FUN_180046ec0 @ 180046ec0 */

void FUN_180046ec0(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  void *_Src;
  int iVar4;
  ulonglong uVar5;
  undefined1 local_c8 [16];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  size_t local_a8;
  ulonglong uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  ulonglong local_80;
  ulonglong local_78;
  void *pvStack_70;
  ulonglong local_68;
  longlong lStack_60;
  size_t local_58;
  void *local_50;
  longlong local_48;
  longlong *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  lVar2 = *param_2;
  iVar4 = (int)lVar2;
  if (lVar2 == 0) {
    uVar5 = param_2[3];
  }
  else if (iVar4 == 1) {
    uVar5 = 0;
    if ((ulonglong)param_2[3] <= (ulonglong)param_2[2]) {
      uVar5 = param_2[2] - param_2[3];
    }
  }
  else {
    uVar5 = 0;
  }
  uVar1 = param_2[5];
  if (uVar1 < uVar5) {
    uVar5 = uVar1;
  }
  if (uVar5 != 0) {
    if (param_1[2] == 0) {
      if (iVar4 == 2) {
        uVar5 = 0;
      }
      else if (iVar4 == 1) {
        uVar5 = 0;
        if ((ulonglong)param_2[3] <= (ulonglong)param_2[2]) {
          uVar5 = param_2[2] - param_2[3];
        }
      }
      else {
        uVar5 = param_2[3];
      }
      if (uVar1 < uVar5) {
        uVar5 = uVar1;
      }
      FUN_1800669a0(local_c8,param_2,uVar5);
      local_98 = local_b8;
      uStack_94 = uStack_b4;
      uStack_90 = uStack_b0;
      uStack_8c = uStack_ac;
      FUN_1801b39f0(&local_80,&local_a8);
      if ((char)local_80 == '\0') {
        local_40 = param_1;
        FUN_1801b2a70(param_1);
        local_40[2] = local_68;
        local_40[3] = lStack_60;
        *local_40 = local_78;
        local_40[1] = (longlong)pvStack_70;
      }
      else {
        lVar2 = param_1[1];
        local_a8 = local_68;
        if ((ulonglong)(param_1[2] - lVar2) < local_68) {
          local_48 = lStack_60;
          local_50 = pvStack_70;
          local_40 = (longlong *)local_78;
          local_58 = local_68;
          FUN_1801b2210(param_1,local_68,1);
          lVar2 = param_1[1];
          pvStack_70 = local_50;
          local_78 = (ulonglong)local_40;
          local_a8 = local_58;
          lStack_60 = local_48;
        }
        memcpy((void *)(lVar2 + *param_1),pvStack_70,local_a8);
        uStack_a0 = param_1[2] - param_1[1];
        if (uStack_a0 < local_a8) {
          local_58 = local_a8;
          local_50 = pvStack_70;
          local_48 = lStack_60;
          local_40 = (longlong *)local_78;
                    /* WARNING: Subroutine does not return */
          FUN_1801fc980(&local_a8);
        }
        param_1[1] = param_1[1] + local_a8;
        (**(code **)(local_78 + 0x20))(lStack_60,pvStack_70,local_a8);
      }
    }
    else {
      if (iVar4 == 2) {
        uVar5 = 0;
      }
      else if (iVar4 == 1) {
        uVar5 = 0;
        if ((ulonglong)param_2[3] <= (ulonglong)param_2[2]) {
          uVar5 = param_2[2] - param_2[3];
        }
      }
      else {
        uVar5 = param_2[3];
      }
      if (uVar1 < uVar5) {
        uVar5 = uVar1;
      }
      if ((ulonglong)(param_1[2] - param_1[1]) < uVar5) {
        FUN_1801b2210(param_1,uVar5,1);
      }
      while( true ) {
        if (lVar2 == 2) {
          uVar5 = 0;
        }
        else if (lVar2 == 1) {
          uVar5 = 0;
          if ((ulonglong)param_2[3] <= (ulonglong)param_2[2]) {
            uVar5 = param_2[2] - param_2[3];
          }
        }
        else {
          uVar5 = param_2[3];
        }
        uVar1 = param_2[5];
        if (uVar1 < uVar5) {
          uVar5 = uVar1;
        }
        if (uVar5 == 0) break;
        if (lVar2 == 2) {
          _Src = (void *)0x1;
          uVar5 = 0;
        }
        else if (lVar2 == 1) {
          uVar5 = param_2[2];
          uVar3 = param_2[3];
          if (uVar5 < (ulonglong)param_2[3]) {
            uVar3 = uVar5;
          }
          uVar5 = uVar5 - uVar3;
          _Src = (void *)(uVar3 + param_2[1]);
        }
        else {
          _Src = (void *)param_2[2];
          uVar5 = param_2[3];
        }
        if (uVar1 < uVar5) {
          uVar5 = uVar1;
        }
        lVar2 = param_1[1];
        if ((ulonglong)(param_1[2] - lVar2) < uVar5) {
          FUN_1801b2210(param_1,uVar5,1);
          lVar2 = param_1[1];
        }
        memcpy((void *)(lVar2 + *param_1),_Src,uVar5);
        local_78 = param_1[2] - param_1[1];
        if (local_78 < uVar5) {
          local_80 = uVar5;
                    /* WARNING: Subroutine does not return */
          FUN_1801fc980(&local_80);
        }
        param_1[1] = param_1[1] + uVar5;
        FUN_180067590(param_2,uVar5);
        lVar2 = *param_2;
      }
    }
  }
  return;
}


