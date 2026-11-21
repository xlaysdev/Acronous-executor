/* FUN_1801242d0 @ 1801242d0 */

undefined8 * FUN_1801242d0(undefined8 *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  code *pcVar2;
  longlong *_Dst;
  longlong *plVar3;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined1 local_90;
  undefined8 local_88;
  undefined1 local_78;
  undefined1 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  FUN_1801286f0(&local_118,0);
  local_58 = local_108;
  local_68 = (undefined4)local_118;
  uStack_64 = local_118._4_4_;
  uStack_60 = (undefined4)uStack_110;
  uStack_5c = uStack_110._4_4_;
  local_40 = local_100;
  local_118 = (longlong *)0x1;
  uStack_110 = 1;
  local_108 = 3;
  local_a8 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_88 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_180027490();
  _Dst = (longlong *)thunk_FUN_1801d32d0(0xb0,8);
  if (_Dst == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0xb0);
  }
  memcpy(_Dst,&local_118,0xb0);
  LOCK();
  lVar1 = *_Dst;
  *_Dst = *_Dst + 1;
  UNLOCK();
  if (*_Dst != 0 && SCARRY8(lVar1,1) == *_Dst < 0) {
    local_118 = _Dst;
    local_48 = _Dst;
    FUN_180027490();
    plVar3 = (longlong *)thunk_FUN_1801d32d0(0x30,8);
    if (plVar3 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x30);
    }
    *plVar3 = 1;
    plVar3[1] = 1;
    plVar3[2] = 2 - (param_3 & 0xff);
    plVar3[3] = 0;
    plVar3[5] = 0;
    LOCK();
    lVar1 = *plVar3;
    *plVar3 = *plVar3 + 1;
    UNLOCK();
    if (*plVar3 != 0 && SCARRY8(lVar1,1) == *plVar3 < 0) {
      param_1[4] = local_58;
      param_1[2] = CONCAT44(uStack_64,local_68);
      param_1[3] = CONCAT44(uStack_5c,uStack_60);
      *param_1 = _Dst;
      param_1[1] = plVar3;
      *(undefined1 *)(param_1 + 5) = 1;
      param_1[6] = param_2;
      param_1[7] = local_100;
      param_1[8] = plVar3;
      param_1[9] = _Dst;
      return param_1;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


