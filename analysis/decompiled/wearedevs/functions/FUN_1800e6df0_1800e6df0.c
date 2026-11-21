/* FUN_1800e6df0 @ 1800e6df0 */

undefined8 *
FUN_1800e6df0(undefined8 *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  void *_Dst;
  int local_340 [2];
  longlong local_338;
  void *local_330;
  undefined1 local_328 [272];
  longlong local_218;
  void *pvStack_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  longlong local_1f8;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_c8;
  undefined8 local_b0 [2];
  undefined8 local_a0;
  undefined8 local_88;
  longlong *local_70;
  undefined *local_68;
  undefined2 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_e0 = 0x8000000000000000;
  local_c8 = 0x8000000000000000;
  local_f8 = 0;
  local_f0 = 8;
  local_e8 = 0;
  uVar2 = (ulonglong)*(byte *)((longlong)param_2 + 0x1d);
  local_3a = 1;
  uVar1 = FUN_1801010b0((char)param_2[7],uVar2);
  local_3a = 1;
  FUN_1801015f0(&local_f8,uVar1,uVar2);
  if (*param_2 == 1) {
    local_3a = 1;
    uVar1 = FUN_1801010f0(param_2 + 2);
    local_3a = 1;
    FUN_180101680(&local_f8,uVar1);
  }
  local_3a = 1;
  uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
  uVar2 = FUN_180101700(&local_f8);
  if ((uVar2 & 1) == 0) {
    local_a0 = 0x8000000000000000;
    local_60 = 1;
    local_70 = (longlong *)0x0;
    local_b0[0] = 0;
    local_88 = 0x8000000000000000;
    local_39 = 1;
    local_58 = uVar1;
    local_50 = uVar1;
    uVar1 = FUN_180101140(param_2 + 4);
    local_39 = 1;
    uVar1 = FUN_180101cc0(local_b0,uVar1);
    local_39 = 1;
    lVar3 = FUN_180101d00(uVar1,param_3,param_4);
    *(char *)(lVar3 + 0x50) = (char)param_2[6];
    *(undefined1 *)(lVar3 + 0x51) = *(undefined1 *)((longlong)param_2 + 0x19);
    if (*(char *)((longlong)param_2 + 0x1a) == '\0') {
      if (*(char *)((longlong)param_2 + 0x1b) != '\0') {
        local_39 = 1;
        uVar1 = FUN_180101140(param_2 + 4);
        local_39 = 1;
        FUN_1800c3280(local_b0,uVar1);
      }
    }
    else {
      FUN_180027490();
      local_48 = (longlong *)thunk_FUN_1801d32d0(0x10,8);
      if (local_48 == (longlong *)0x0) {
        local_39 = 1;
                    /* WARNING: Subroutine does not return */
        FUN_180201705(8,0x10);
      }
      *local_48 = 1;
      local_48[1] = 1;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        *local_70 = *local_70 + -1;
        UNLOCK();
        if (*local_70 == 0) {
          FUN_18003cc40(&local_70);
        }
      }
      local_70 = local_48;
      local_68 = &DAT_180212ba8;
    }
    local_1f8 = param_5[4];
    local_218 = *param_5;
    pvStack_210 = (void *)param_5[1];
    local_208 = (undefined4)param_5[2];
    uStack_204 = *(undefined4 *)((longlong)param_5 + 0x14);
    uStack_200 = (undefined4)param_5[3];
    uStack_1fc = *(undefined4 *)((longlong)param_5 + 0x1c);
    local_39 = 0;
    FUN_1800c2a00(local_340,local_b0,local_50,0,&local_218);
    if (local_340[0] == 1) {
      if (local_338 == 2) {
        uVar1 = 0;
        _Dst = local_330;
      }
      else {
        local_218 = local_338;
        pvStack_210 = local_330;
        memcpy(&local_208,local_328,0x110);
        FUN_180027490();
        _Dst = (void *)thunk_FUN_1801d32d0(0x120,8);
        if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_180201705(8,0x120);
        }
        memcpy(_Dst,&local_218,0x120);
        uVar1 = 1;
      }
      param_1[1] = uVar1;
      param_1[2] = _Dst;
      *param_1 = 2;
    }
    else {
      memcpy(param_1,&local_338,0x120);
    }
    FUN_1800ef820(local_b0);
    local_3b = 0;
    FUN_1800ef980(&local_f8);
  }
  else {
    param_1[1] = 0;
    param_1[2] = uVar1;
    *param_1 = 2;
    local_3b = 1;
    FUN_1800ef980(&local_f8);
    FUN_1800ede40(param_5);
  }
  return param_1;
}


