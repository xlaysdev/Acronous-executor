/* FUN_1800c16f0 @ 1800c16f0 */

undefined8 *
FUN_1800c16f0(undefined8 *param_1,int *param_2,longlong *param_3,byte param_4,undefined8 *param_5)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  void *_Dst;
  ulonglong uVar17;
  void *pvVar18;
  void *_Src;
  undefined1 uVar19;
  undefined8 unaff_R13;
  ulonglong uVar20;
  undefined1 uVar21;
  undefined8 uVar22;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_238;
  void *pvStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  ulonglong local_1b8;
  void *local_1b0;
  ulonglong local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  void *local_190;
  longlong local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined1 local_164;
  longlong *local_150;
  undefined8 local_148;
  void *local_140;
  undefined8 local_138;
  void *local_130;
  undefined8 local_128;
  undefined8 local_120;
  byte local_118;
  undefined1 local_117;
  undefined1 local_116;
  undefined2 local_115;
  undefined8 local_108;
  void *local_100;
  undefined8 local_f8;
  void *local_f0;
  ulonglong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  void *local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  uint local_b8;
  undefined4 uStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  void *local_a8;
  ulonglong local_a0;
  longlong *local_98;
  longlong *local_90;
  void *local_88;
  ulonglong local_80;
  longlong local_78;
  void *local_70;
  longlong *local_68;
  undefined8 local_60;
  ulonglong local_58;
  byte local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar20 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),param_4);
  lVar3 = *(longlong *)(param_2 + 4);
  _Src = *(void **)(param_2 + 6);
  local_4f = *(byte *)(param_2 + 0x14);
  pvVar18 = (void *)0x0;
  if ((local_4f & 1) != 0) {
    pvVar18 = _Src;
  }
  if (SBORROW8(0,lVar3)) {
    pvVar18 = (void *)0x0;
  }
  uVar17 = *(ulonglong *)(param_2 + 8);
  plVar1 = (longlong *)(param_2 + 10);
  local_4a = 1;
  local_4b = 1;
  local_68 = param_3;
  FUN_180101280(&local_238,&local_68,uVar20 & 0xffffffff,pvVar18,uVar17,plVar1);
  plVar16 = local_68;
  if ((uint)local_228 == 2) {
    param_1[1] = 2;
    param_1[2] = local_238;
    *param_1 = 1;
    FUN_18007eeb0(param_5);
    FUN_1800ba880(param_5[3],param_5[4]);
    local_49 = 1;
    FUN_1800b0d40(param_5);
    LOCK();
    *local_68 = *local_68 + -1;
    UNLOCK();
    if (*local_68 == 0) {
      FUN_18003d7f0(&local_68);
      return param_1;
    }
    return param_1;
  }
  local_a8 = (void *)CONCAT44(uStack_214,local_218);
  local_b8 = (uint)local_228;
  uStack_b4 = local_228._4_4_;
  uStack_b0 = (uint)uStack_220;
  uStack_ac = uStack_220._4_4_;
  local_90 = local_68;
  local_d8 = local_238;
  local_108 = local_238;
  local_d0 = pvStack_230;
  local_100 = pvStack_230;
  iVar2 = *param_2;
  if (iVar2 == 1) {
    local_98 = local_68;
    local_4c = 1;
    local_80 = uVar17;
    local_e0 = FUN_180101140(param_2 + 2);
    uVar20 = (ulonglong)param_4;
    uVar17 = local_80;
    local_c0 = local_e0;
  }
  uVar19 = (undefined1)uVar20;
  local_e8 = (ulonglong)(iVar2 == 1);
  local_c8 = plVar16;
  local_80 = local_e8;
  if (SBORROW8(0,lVar3)) {
    local_78 = -0x8000000000000000;
    uVar21 = *(undefined1 *)((longlong)param_2 + 0x51);
    plVar4 = *(longlong **)(param_2 + 0x10);
    pvVar18 = local_a8;
  }
  else {
    local_60 = CONCAT71(local_60._1_7_,uVar19);
    uVar20 = uVar17 * 2;
    if (0x7ffffffffffffffe < uVar20 || (longlong)uVar17 < 0) {
      uVar22 = 0;
LAB_1800c192c:
      local_a0 = local_80;
      local_4d = 1;
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(uVar22,uVar20);
    }
    if (uVar20 == 0) {
      local_88 = (void *)0x2;
      local_78 = 0;
    }
    else {
      FUN_180027490();
      uVar22 = 2;
      local_88 = (void *)thunk_FUN_1801d32d0(uVar20,2);
      if (local_88 == (void *)0x0) goto LAB_1800c192c;
      local_78 = uVar17;
    }
    memcpy(local_88,_Src,uVar20);
    uVar21 = *(undefined1 *)((longlong)param_2 + 0x51);
    plVar4 = *(longlong **)(param_2 + 0x10);
    uVar19 = (undefined1)local_60;
    pvVar18 = local_a8;
  }
  if (plVar4 == (longlong *)0x0) {
    local_60 = 0;
  }
  else {
    LOCK();
    lVar3 = *plVar4;
    *plVar4 = *plVar4 + 1;
    UNLOCK();
    if (*plVar4 == 0 || SCARRY8(lVar3,1) != *plVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    local_60 = *(undefined8 *)(param_2 + 0x10);
    _Src = *(void **)(param_2 + 0x12);
    local_f0 = _Src;
  }
  uVar22 = *param_5;
  uVar14 = param_5[1];
  uVar6 = *(undefined4 *)(param_5 + 2);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x14);
  uVar8 = *(undefined4 *)(param_5 + 3);
  uVar9 = *(undefined4 *)((longlong)param_5 + 0x1c);
  uVar10 = *(undefined4 *)(param_5 + 4);
  uVar11 = *(undefined4 *)((longlong)param_5 + 0x24);
  uVar12 = *(undefined4 *)(param_5 + 5);
  uVar13 = *(undefined4 *)((longlong)param_5 + 0x2c);
  local_f8 = local_60;
  if ((local_b8 & 1) == 0) {
    local_70 = (void *)0x1;
    local_58 = 0;
    lVar3 = *plVar1;
    uVar20 = local_80;
  }
  else {
    local_238 = CONCAT44(uStack_ac,uStack_b0);
    uVar20 = (ulonglong)uStack_b0;
    pvStack_230 = pvVar18;
    if (uStack_b0 == 0) {
      pvVar18 = (void *)0x1;
      _Dst = (void *)0x1;
    }
    else {
      uVar15 = local_58 >> 8;
      local_58 = CONCAT71((int7)uVar15,uVar21);
      local_70 = _Src;
      FUN_180027490();
      _Dst = (void *)thunk_FUN_1801d32d0(uVar20,1);
      if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_18020171e(1,uVar20);
      }
      _Src = local_70;
      uVar21 = (undefined1)local_58;
    }
    local_70 = _Dst;
    local_58 = uVar20;
    memcpy(_Dst,pvVar18,uVar20);
    FUN_180101c00(&local_238);
    lVar3 = *plVar1;
    uVar20 = local_80;
  }
  local_80 = uVar20;
  if (SBORROW8(0,lVar3)) {
    local_238 = 0x8000000000000000;
  }
  else {
    FUN_18009cbb0(&local_238,plVar1);
    local_278 = pvStack_230;
    uStack_270 = local_228;
  }
  local_198 = local_78;
  local_190 = local_88;
  local_1f8 = 0;
  local_1f0 = 1;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  local_1d0 = 1;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = local_58;
  local_1b0 = local_70;
  local_1a8 = local_58;
  local_1a0 = 0;
  pvStack_230 = (void *)local_c0;
  local_178 = (undefined4)local_278;
  uStack_174 = local_278._4_4_;
  uStack_170 = (undefined4)uStack_270;
  uStack_16c = uStack_270._4_4_;
  local_168 = 0x10000;
  local_164 = 0;
  local_150 = local_c8;
  local_148 = local_d8;
  local_140 = local_d0;
  local_138 = local_60;
  local_128 = 1;
  local_120 = 0;
  local_118 = local_4f;
  local_115 = 1;
  local_4e = 0;
  local_180 = local_238;
  local_238 = uVar20;
  local_228 = uVar22;
  uStack_220 = uVar14;
  local_218 = uVar6;
  uStack_214 = uVar7;
  uStack_210 = uVar8;
  uStack_20c = uVar9;
  local_208 = uVar10;
  uStack_204 = uVar11;
  uStack_200 = uVar12;
  uStack_1fc = uVar13;
  local_188 = uVar17;
  local_130 = _Src;
  local_117 = uVar21;
  local_116 = uVar19;
  FUN_1800c1240(param_1,&local_238);
  return param_1;
}


