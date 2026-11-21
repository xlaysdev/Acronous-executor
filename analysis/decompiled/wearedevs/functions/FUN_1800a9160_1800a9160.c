/* FUN_1800a9160 @ 1800a9160 */

undefined8 * FUN_1800a9160(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong *_Dst;
  ulonglong uVar5;
  bool bVar6;
  undefined8 local_4a8 [32];
  undefined1 local_3a8 [248];
  longlong *local_2b0;
  undefined1 local_2a8 [248];
  undefined8 local_1b0;
  undefined8 local_1a8;
  longlong *plStack_1a0;
  longlong *local_198;
  undefined8 local_190 [5];
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_98;
  undefined8 local_90;
  longlong *plStack_88;
  undefined8 *local_58;
  longlong *local_50;
  ulonglong local_48;
  longlong *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  LOCK();
  bVar6 = *(longlong *)(*param_2 + 0x10) == 1;
  if (bVar6) {
    *(longlong *)(*param_2 + 0x10) = 0;
  }
  UNLOCK();
  if ((bVar6) || ((char)param_2[2] == '\0')) {
    *(undefined1 *)(param_2 + 2) = 1;
    local_198 = (longlong *)0x1;
    local_190[0] = 1;
    local_168 = 0;
    local_160 = 5;
    FUN_180027490();
    _Dst = (longlong *)thunk_FUN_1801d32d0(0x140,8);
    local_58 = param_3;
    local_50 = _Dst;
    if (_Dst == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x140);
    }
    memcpy(_Dst,&local_198,0x140);
    LOCK();
    lVar1 = *_Dst;
    *_Dst = *_Dst + 1;
    UNLOCK();
    if (*_Dst == 0 || SCARRY8(lVar1,1) != *_Dst < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    plVar3 = (longlong *)*param_3;
    local_40 = _Dst;
    memcpy(&local_2b0,param_3 + 1,0xf8);
    lVar1 = param_2[1];
    uVar5 = *(ulonglong *)(lVar1 + 0x1c0);
    do {
      local_48 = uVar5;
      if ((local_48 & 1) != 0) {
        memcpy(local_3a8,&local_2b0,0xf8);
        local_198 = local_40;
        FUN_1800a6500(&local_198);
        memcpy(local_2a8,local_3a8,0xf8);
        local_1a8 = 1;
        plStack_1a0 = local_50;
        local_1b0 = 2;
        local_2b0 = plVar3;
        memcpy(&local_198,&local_2b0,0x100);
        local_98 = 0;
        local_90 = local_1a8;
        plStack_88 = plStack_1a0;
        memcpy(local_4a8,&local_2b0,0x100);
        FUN_1800a5d50(&local_98);
        FUN_1800a5ed0(&local_2b0);
        param_3 = local_4a8;
        goto LAB_1800a93f2;
      }
      if (local_48 == 0xfffffffffffffffe) {
        pcVar4 = (code *)swi(0x29);
        (*pcVar4)(7);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      LOCK();
      uVar2 = *(ulonglong *)(lVar1 + 0x1c0);
      if (local_48 == uVar2) {
        *(ulonglong *)(lVar1 + 0x1c0) = local_48 + 2;
        uVar5 = local_48;
      }
      else {
        uVar5 = uVar2;
      }
      UNLOCK();
    } while (local_48 != uVar2);
    local_198 = plVar3;
    memcpy(local_190,&local_2b0,0xf8);
    local_98 = 0;
    local_90 = 1;
    plStack_88 = _Dst;
    FUN_18009c370(lVar1 + 0x80,&local_198);
    FUN_18017a7e0(lVar1 + 0x100);
    param_1[1] = local_40;
    *param_1 = 3;
  }
  else {
LAB_1800a93f2:
    memcpy(param_1,param_3,0x100);
  }
  return param_1;
}


