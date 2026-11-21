/* FUN_180174880 @ 180174880 */

void * FUN_180174880(longlong param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  void *_Dst;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  int local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined2 local_1c8;
  undefined8 local_1c6;
  undefined8 uStack_1be;
  undefined8 local_1b6;
  undefined8 uStack_1ae;
  undefined8 local_1a6;
  undefined8 uStack_19e;
  undefined8 local_196;
  undefined6 uStack_18e;
  undefined2 uStack_188;
  undefined6 uStack_186;
  longlong local_180;
  longlong local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined1 local_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  longlong local_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined4 local_10c;
  undefined4 uStack_108;
  undefined8 uStack_104;
  undefined6 uStack_f6;
  undefined2 local_f0;
  undefined6 uStack_ee;
  undefined2 uStack_e8;
  undefined6 uStack_e6;
  undefined2 local_e0;
  undefined6 uStack_de;
  undefined2 uStack_d8;
  undefined6 uStack_d6;
  undefined2 local_d0;
  undefined6 uStack_ce;
  undefined2 uStack_c8;
  undefined6 uStack_c6;
  undefined2 local_c0;
  undefined6 uStack_be;
  undefined2 uStack_b8;
  undefined6 uStack_b6;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  lVar6 = param_2;
  local_78 = FUN_18017bb10();
  iVar8 = *(int *)(param_1 + 0x48);
  if (iVar8 == 1000000000) {
    uVar7 = 10;
    iVar8 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 0x40);
  }
  local_208 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  uStack_200 = 8;
  local_b0 = 0;
  local_70 = lVar6;
  local_68 = local_78;
  plVar5 = (longlong *)FUN_1801dd4b0();
  if ((char)plVar5[2] == '\x01') {
    local_180 = *plVar5;
    lVar6 = plVar5[1];
  }
  else {
    local_180 = FUN_1801dca90();
    *plVar5 = local_180;
    plVar5[1] = lVar6;
    *(undefined1 *)(plVar5 + 2) = 1;
  }
  *plVar5 = local_180 + 1;
  local_98 = local_b0;
  uStack_90 = uStack_a8;
  local_88 = local_a0;
  local_d0 = 0x2d70;
  uStack_ce = 0x18026;
  uStack_c8 = 0;
  uStack_c6 = 0;
  local_c0 = 0;
  uStack_be = 0;
  uStack_b8 = 0;
  uStack_b6 = 0;
  local_f0 = (undefined2)local_208;
  uStack_ee = (undefined6)((ulonglong)local_208 >> 0x10);
  uStack_e8 = (undefined2)uStack_200;
  uStack_e6 = (undefined6)((ulonglong)uStack_200 >> 0x10);
  local_e0 = (undefined2)local_1f8;
  uStack_de = (undefined6)((ulonglong)local_1f8 >> 0x10);
  uStack_d8 = (undefined2)uStack_1f0;
  uStack_d6 = (undefined6)((ulonglong)uStack_1f0 >> 0x10);
  plVar5 = *(longlong **)(param_1 + 0x50);
  LOCK();
  lVar1 = *plVar5;
  *plVar5 = *plVar5 + 1;
  UNLOCK();
  if (*plVar5 == 0 || SCARRY8(lVar1,1) != *plVar5 < 0) {
LAB_180174b28:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  local_1d8 = *(undefined4 *)(param_1 + 0x50);
  uStack_1d4 = *(undefined4 *)(param_1 + 0x54);
  uStack_1d0 = *(undefined4 *)(param_1 + 0x58);
  uStack_1cc = *(undefined4 *)(param_1 + 0x5c);
  plVar5 = *(longlong **)(param_1 + 0x70);
  local_130 = 0;
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  local_140 = 0;
  uStack_13c = 0;
  uStack_138 = 0;
  uStack_134 = 0;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    lVar1 = *plVar5;
    *plVar5 = *plVar5 + 1;
    UNLOCK();
    if (*plVar5 == 0 || SCARRY8(lVar1,1) != *plVar5 < 0) goto LAB_180174b28;
    local_140 = *(undefined4 *)(param_1 + 0x70);
    uStack_13c = *(undefined4 *)(param_1 + 0x74);
    uStack_138 = *(undefined4 *)(param_1 + 0x78);
    uStack_134 = *(undefined4 *)(param_1 + 0x7c);
  }
  plVar5 = *(longlong **)(param_1 + 0x80);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    lVar1 = *plVar5;
    *plVar5 = *plVar5 + 1;
    UNLOCK();
    if (*plVar5 == 0 || SCARRY8(lVar1,1) != *plVar5 < 0) goto LAB_180174b28;
    local_130 = *(undefined4 *)(param_1 + 0x80);
    uStack_12c = *(undefined4 *)(param_1 + 0x84);
    uStack_128 = *(undefined4 *)(param_1 + 0x88);
    uStack_124 = *(undefined4 *)(param_1 + 0x8c);
  }
  uStack_186 = 0;
  local_1c6 = CONCAT26(local_f0,uStack_f6);
  uStack_1be = CONCAT26(uStack_e8,uStack_ee);
  local_1b6 = CONCAT26(local_e0,uStack_e6);
  uStack_1ae = CONCAT26(uStack_d8,uStack_de);
  local_1a6 = CONCAT26(0x2d70,uStack_d6);
  local_196 = 0;
  uStack_18e = 0;
  uStack_188 = 0;
  uStack_19e = 0x18026;
  local_168 = local_b0;
  uStack_160 = uStack_a8;
  local_158 = local_a0;
  local_208 = 1;
  uStack_200 = 1;
  local_1c8 = 0;
  local_170 = local_68;
  local_150 = 0;
  local_148 = 0;
  local_144 = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  local_10c = 0;
  local_1f8 = uVar3;
  uStack_1f0 = uVar4;
  local_1e8 = uVar7;
  local_1e0 = iVar8;
  local_178 = lVar6;
  local_120 = param_2;
  FUN_180027490();
  _Dst = (void *)thunk_FUN_1801d32d0(0x110,8);
  if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x110);
  }
  memcpy(_Dst,&local_208,0x110);
  return _Dst;
}


