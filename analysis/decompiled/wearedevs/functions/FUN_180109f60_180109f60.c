/* FUN_180109f60 @ 180109f60 */

void * FUN_180109f60(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined *puVar4;
  byte bVar5;
  void *_Dst;
  longlong *plVar6;
  void *pvVar7;
  ulonglong uVar8;
  longlong *plVar9;
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
  longlong *local_138;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  longlong *local_f8;
  longlong *local_f0;
  code **local_48;
  undefined8 local_38;
  
  local_48 = &local_178;
  local_38 = 0xfffffffffffffffe;
  plVar6 = param_2;
  local_190 = param_1;
  local_1a0 = thunk_FUN_1801798a0(param_3);
  puVar4 = PTR_DAT_1802fd4e8;
  do {
    LOCK();
    local_150 = *(longlong *)puVar4;
    *(longlong *)puVar4 = *(longlong *)puVar4 + 1;
    UNLOCK();
  } while (local_150 == 0);
  plVar9 = plVar6 + 0x59;
  if ((local_1a0 & 1) != 0) {
    plVar9 = plVar6 + 0x40;
  }
  plVar2 = (longlong *)plVar6[(local_1a0 & 0xffffffff) + 0x42];
  local_198 = plVar6;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    lVar1 = *plVar2;
    *plVar2 = *plVar2 + 1;
    UNLOCK();
    if (*plVar2 != 0 && SCARRY8(lVar1,1) == *plVar2 < 0) {
      uVar8 = local_1a0 & 0xffffffff | 0x40;
      local_160 = (longlong *)plVar6[uVar8 + 2];
      local_158 = (longlong *)plVar6[uVar8 + 3];
      LOCK();
      lVar1 = *local_160;
      *local_160 = *local_160 + 1;
      UNLOCK();
      if (*local_160 != 0 && SCARRY8(lVar1,1) == *local_160 < 0) goto LAB_18010a015;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  local_160 = (longlong *)0x0;
  local_158 = plVar6;
LAB_18010a015:
  local_180 = (void **)0xcc;
  local_178 = (code *)0x0;
  local_170 = &PTR_LAB_18023e8a8;
  local_168 = 0;
  local_148 = 0;
  local_140 = local_190;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  local_138 = param_2;
  local_f8 = local_160;
  local_f0 = local_158;
  FUN_180027490();
  _Dst = (void *)thunk_FUN_1801d32d0(0x100,0x80);
  if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(0x80,0x100);
  }
  memcpy(_Dst,&local_180,0x100);
  pvVar7 = _Dst;
  bVar5 = FUN_180176490(plVar9,_Dst,1,&local_1a0);
  if ((pvVar7 != (void *)0x0 & bVar5) == 1) {
    local_180 = &local_188;
    local_178 = FUN_1801e3c90;
    local_188 = pvVar7;
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0(&DAT_18023ba80,&local_180,param_3);
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


