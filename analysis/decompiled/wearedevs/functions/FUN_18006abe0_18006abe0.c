/* FUN_18006abe0 @ 18006abe0 */

void * FUN_18006abe0(undefined2 *param_1,longlong param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *_Dst;
  longlong local_100 [11];
  undefined2 local_a8;
  undefined4 local_a6;
  undefined2 local_a2;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined **local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined2 local_4a;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar1 = *param_1;
  uVar2 = *(undefined8 *)(param_1 + 4);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0xc);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  if (param_2 == 0) {
    local_80 = (longlong *)0x0;
  }
  else {
    local_100[0] = param_2;
    FUN_180027490();
    local_80 = (longlong *)thunk_FUN_1801d32d0(8,8);
    if (local_80 == (longlong *)0x0) {
      local_70 = uVar2;
      local_68 = uVar4;
      local_60 = uVar3;
      local_58 = uVar5;
      local_4a = uVar1;
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,8);
    }
    *local_80 = param_2;
  }
  local_a6 = *(undefined4 *)(param_1 + 1);
  local_a2 = param_1[3];
  local_78 = &PTR_LAB_18020b348;
  local_100[0] = -0x8000000000000000;
  local_a8 = uVar1;
  local_a0 = uVar2;
  local_98 = uVar3;
  local_90 = uVar4;
  local_88 = uVar5;
  FUN_180027490();
  _Dst = (void *)thunk_FUN_1801d32d0(0x90,8);
  if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x90);
  }
  memcpy(_Dst,local_100,0x90);
  return _Dst;
}


