/* FUN_18006afc0 @ 18006afc0 */

void * FUN_18006afc0(undefined2 *param_1,void *param_2,size_t param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *_Dst;
  undefined8 uVar5;
  undefined8 local_110 [11];
  undefined2 local_b8;
  undefined4 local_b6;
  undefined2 local_b2;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  size_t *local_90;
  undefined **local_88;
  size_t local_80;
  void *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined2 local_4a;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_b8 = *param_1;
  uVar1 = *(undefined8 *)(param_1 + 4);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0xc);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  if (param_2 == (void *)0x0) {
    local_90 = (size_t *)0x0;
  }
  else {
    local_70 = uVar3;
    local_68 = uVar2;
    local_60 = uVar4;
    if ((longlong)param_3 < 0) {
      uVar5 = 0;
      local_4a = local_b8;
LAB_18006b006:
      local_58 = (undefined2 *)uVar1;
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(uVar5,param_3);
    }
    local_58 = param_1;
    if (param_3 == 0) {
      local_78 = (void *)0x1;
    }
    else {
      local_4a = local_b8;
      FUN_180027490();
      uVar5 = 1;
      local_78 = (void *)thunk_FUN_1801d32d0(param_3,1);
      if (local_78 == (void *)0x0) goto LAB_18006b006;
      local_b8 = local_4a;
    }
    memcpy(local_78,param_2,param_3);
    FUN_180027490();
    local_90 = (size_t *)thunk_FUN_1801d32d0(0x18,8);
    if (local_90 == (size_t *)0x0) {
      local_80 = param_3;
      local_58 = (undefined2 *)uVar1;
      local_4a = local_b8;
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x18);
    }
    *local_90 = param_3;
    local_90[1] = (size_t)local_78;
    local_90[2] = param_3;
    param_1 = local_58;
  }
  local_b6 = *(undefined4 *)(param_1 + 1);
  local_b2 = param_1[3];
  local_88 = &PTR_LAB_18020b4b0;
  local_110[0] = 0x8000000000000000;
  local_b0 = uVar1;
  local_a8 = uVar2;
  local_a0 = uVar3;
  local_98 = uVar4;
  FUN_180027490();
  _Dst = (void *)thunk_FUN_1801d32d0(0x90,8);
  if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x90);
  }
  memcpy(_Dst,local_110,0x90);
  return _Dst;
}


