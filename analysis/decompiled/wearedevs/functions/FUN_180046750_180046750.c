/* FUN_180046750 @ 180046750 */

void FUN_180046750(longlong *param_1,longlong *param_2)

{
  ulonglong _Size;
  void *_Src;
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  size_t local_d8;
  ulonglong uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b0 [16];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  ulonglong local_90;
  ulonglong local_88;
  void *pvStack_80;
  ulonglong local_78;
  longlong lStack_70;
  void *local_68;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;
  undefined1 local_3a;
  undefined1 local_39;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  _Size = param_2[2];
  if (_Size == 0) {
    lVar2 = param_2[3];
    lVar1 = *param_2;
    lVar3 = param_2[1];
  }
  else {
    local_50 = param_2;
    if (param_1[2] == 0) {
      local_39 = 1;
      FUN_1801b3b40(local_b0,param_2,_Size);
      local_3a = 1;
      (**(code **)(*local_50 + 0x20))(local_50[3],local_50[1],local_50[2]);
      local_c8 = local_a0;
      uStack_c4 = uStack_9c;
      uStack_c0 = uStack_98;
      uStack_bc = uStack_94;
      local_3a = 0;
      FUN_1801b39f0(&local_90,&local_d8);
      if ((int)local_90 == 1) {
        lVar2 = param_1[1];
        local_d8 = local_78;
        if ((ulonglong)(param_1[2] - lVar2) < local_78) {
          local_58 = lStack_70;
          local_60 = local_88;
          local_68 = pvStack_80;
          local_48 = (longlong *)local_78;
          FUN_1801b2210(param_1,local_78,1);
          lVar2 = param_1[1];
          local_88 = local_60;
          local_d8 = (size_t)local_48;
          pvStack_80 = local_68;
          lStack_70 = local_58;
        }
        memcpy((void *)(lVar2 + *param_1),pvStack_80,local_d8);
        uStack_d0 = param_1[2] - param_1[1];
        if (uStack_d0 < local_d8) {
          local_68 = pvStack_80;
          local_60 = local_88;
          local_58 = lStack_70;
          local_48 = (longlong *)local_d8;
                    /* WARNING: Subroutine does not return */
          FUN_1801fc980(&local_d8);
        }
        param_1[1] = param_1[1] + local_d8;
        local_39 = 0;
        (**(code **)(local_88 + 0x20))(lStack_70,pvStack_80,local_d8);
      }
      else {
        local_48 = param_1;
        FUN_1801b2a70(param_1);
        local_48[2] = local_78;
        local_48[3] = lStack_70;
        *local_48 = local_88;
        local_48[1] = (longlong)pvStack_80;
      }
      return;
    }
    if ((ulonglong)(param_1[2] - param_1[1]) < _Size) {
      local_39 = 1;
      FUN_1801b2210(param_1,_Size,1);
    }
    plVar4 = local_50;
    if (_Size != 0) {
      _Src = (void *)local_50[1];
      lVar2 = param_1[1];
      if ((ulonglong)(param_1[2] - lVar2) < _Size) {
        local_39 = 1;
        FUN_1801b2210(param_1,_Size,1);
        lVar2 = param_1[1];
      }
      plVar4 = local_50;
      memcpy((void *)(lVar2 + *param_1),_Src,_Size);
      local_88 = param_1[2] - param_1[1];
      if (local_88 < _Size) {
        local_39 = 1;
        local_90 = _Size;
                    /* WARNING: Subroutine does not return */
        FUN_1801fc980(&local_90);
      }
      param_1[1] = param_1[1] + _Size;
      plVar4[2] = 0;
      plVar4[1] = (longlong)_Src + _Size;
    }
    lVar2 = plVar4[3];
    lVar1 = *plVar4;
    lVar3 = plVar4[1];
  }
                    /* WARNING: Could not recover jumptable at 0x00018004685b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x20))(lVar2,lVar3,0);
  return;
}


