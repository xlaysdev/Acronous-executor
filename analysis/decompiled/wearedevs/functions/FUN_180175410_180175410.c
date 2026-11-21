/* FUN_180175410 @ 180175410 */

void * FUN_180175410(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  byte bVar4;
  void *_Dst;
  longlong *plVar5;
  void *pvVar6;
  ulonglong uVar7;
  longlong *plVar8;
  bool bVar9;
  ulonglong local_1a0;
  longlong *local_198;
  undefined8 local_190;
  void *local_188;
  void **local_180;
  code *local_178;
  undefined **local_170;
  undefined8 local_168;
  longlong *local_160;
  longlong *local_158;
  longlong local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  longlong *local_108;
  longlong *local_100;
  code **local_48;
  undefined8 local_38;
  
  local_48 = &local_178;
  local_38 = 0xfffffffffffffffe;
  plVar5 = param_2;
  local_190 = param_1;
  local_1a0 = FUN_1801798a0(param_2);
  do {
    local_150 = DAT_1802fd4e0;
    LOCK();
    lVar3 = DAT_1802fd4e0 + 1;
    UNLOCK();
    bVar9 = DAT_1802fd4e0 == 0;
    DAT_1802fd4e0 = lVar3;
  } while (bVar9);
  plVar8 = plVar5 + 0x59;
  if ((local_1a0 & 1) != 0) {
    plVar8 = plVar5 + 0x40;
  }
  plVar1 = (longlong *)plVar5[(local_1a0 & 0xffffffff) + 0x42];
  local_198 = plVar5;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 != 0 && SCARRY8(lVar3,1) == *plVar1 < 0) {
      uVar7 = local_1a0 & 0xffffffff | 0x40;
      local_160 = (longlong *)plVar5[uVar7 + 2];
      local_158 = (longlong *)plVar5[uVar7 + 3];
      LOCK();
      lVar3 = *local_160;
      *local_160 = *local_160 + 1;
      UNLOCK();
      if (*local_160 != 0 && SCARRY8(lVar3,1) == *local_160 < 0) goto LAB_1801754c9;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_160 = (longlong *)0x0;
  local_158 = plVar5;
LAB_1801754c9:
  local_180 = (void **)0xcc;
  local_178 = (code *)0x0;
  local_170 = &PTR_LAB_1802630c0;
  local_168 = 0;
  local_148 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  local_140 = param_1;
  local_108 = local_160;
  local_100 = local_158;
  FUN_180027490();
  _Dst = (void *)thunk_FUN_1801d32d0(0x100,0x80);
  if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(0x80,0x100);
  }
  memcpy(_Dst,&local_180,0x100);
  pvVar6 = _Dst;
  bVar4 = FUN_180176490(plVar8,_Dst,1,&local_1a0);
  if ((pvVar6 != (void *)0x0 & bVar4) == 1) {
    local_180 = &local_188;
    local_178 = FUN_1801e3c90;
    local_188 = pvVar6;
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0(&DAT_180262ec0,&local_180,param_2);
  }
  if ((char)local_1a0 == '\0') {
    LOCK();
    *local_198 = *local_198 + -1;
    UNLOCK();
    if (*local_198 == 0) {
      FUN_1801635e0(&local_198);
    }
  }
  else {
    LOCK();
    *local_198 = *local_198 + -1;
    UNLOCK();
    if (*local_198 == 0) {
      FUN_180162f80(&local_198);
    }
  }
  return _Dst;
}


