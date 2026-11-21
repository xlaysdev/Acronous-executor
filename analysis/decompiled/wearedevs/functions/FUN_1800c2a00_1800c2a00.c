/* FUN_1800c2a00 @ 1800c2a00 */

undefined8 *
FUN_1800c2a00(undefined8 *param_1,int *param_2,longlong *param_3,byte param_4,undefined4 *param_5)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong *plVar4;
  code *pcVar5;
  ulonglong uVar6;
  void *pvVar7;
  undefined1 uVar8;
  undefined8 unaff_R13;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  void *pvStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  ulonglong local_1e0;
  void *local_1d8;
  ulonglong local_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  void *local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined1 local_18c;
  longlong *local_178;
  undefined8 local_170;
  void *local_168;
  undefined8 local_160;
  ulonglong local_158;
  undefined8 local_150;
  undefined8 local_148;
  byte local_140;
  undefined1 local_13f;
  undefined1 local_13e;
  undefined2 local_13d;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_108;
  void *local_100;
  undefined8 local_f8;
  ulonglong local_f0;
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
  void *local_80;
  ulonglong local_78;
  longlong local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  byte local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar9 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),param_4);
  lVar3 = *(longlong *)(param_2 + 4);
  _Src = *(void **)(param_2 + 6);
  local_50 = *(byte *)(param_2 + 0x14);
  pvVar7 = (void *)0x0;
  if ((local_50 & 1) != 0) {
    pvVar7 = _Src;
  }
  if (SBORROW8(0,lVar3)) {
    pvVar7 = (void *)0x0;
  }
  uVar6 = *(ulonglong *)(param_2 + 8);
  plVar1 = (longlong *)(param_2 + 10);
  local_49 = 1;
  local_4a = 1;
  local_60 = param_3;
  FUN_180101280(&local_258,&local_60,uVar9 & 0xffffffff,pvVar7,uVar6,plVar1);
  plVar4 = local_60;
  if ((uint)local_248 == 2) {
    param_1[1] = 2;
    param_1[2] = local_258;
    *param_1 = 1;
    local_4b = 1;
    FUN_1800b9bd0(param_5);
    LOCK();
    *local_60 = *local_60 + -1;
    UNLOCK();
    if (*local_60 == 0) {
      FUN_18003d7f0(&local_60);
      return param_1;
    }
    return param_1;
  }
  local_a8 = (void *)CONCAT44(uStack_234,local_238);
  local_b8 = (uint)local_248;
  uStack_b4 = local_248._4_4_;
  uStack_b0 = (uint)uStack_240;
  uStack_ac = uStack_240._4_4_;
  local_90 = local_60;
  local_d8 = local_258;
  local_108 = local_258;
  local_d0 = pvStack_250;
  local_100 = pvStack_250;
  iVar2 = *param_2;
  if (iVar2 == 1) {
    local_98 = local_60;
    local_4c = 1;
    local_78 = uVar6;
    local_e0 = FUN_180101140(param_2 + 2);
    uVar9 = (ulonglong)param_4;
    uVar6 = local_78;
    local_c0 = local_e0;
  }
  local_e8 = (ulonglong)(iVar2 == 1);
  local_c8 = plVar4;
  uVar10 = -lVar3;
  local_78 = local_e8;
  if (SBORROW8(0,lVar3)) {
    local_70 = -0x8000000000000000;
    uVar8 = (char)uVar9;
  }
  else {
    local_58 = CONCAT71(local_58._1_7_,(char)uVar9);
    uVar9 = uVar6 * 2;
    if (0x7ffffffffffffffe < uVar9 || (longlong)uVar6 < 0) {
      uVar10 = 0;
LAB_1800c2be3:
      local_a0 = local_78;
      local_4d = 1;
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(uVar10,uVar9);
    }
    if (uVar9 == 0) {
      local_88 = (void *)0x2;
      local_70 = 0;
    }
    else {
      FUN_180027490();
      uVar10 = 2;
      local_88 = (void *)thunk_FUN_1801d32d0(uVar9,2);
      if (local_88 == (void *)0x0) goto LAB_1800c2be3;
      local_70 = uVar6;
    }
    memcpy(local_88,_Src,uVar9);
    uVar8 = (undefined1)local_58;
  }
  local_4f = *(undefined1 *)((longlong)param_2 + 0x51);
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 == (longlong *)0x0) {
    local_58 = 0;
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
    local_58 = *(undefined8 *)(param_2 + 0x10);
    uVar10 = *(ulonglong *)(param_2 + 0x12);
    local_f0 = uVar10;
  }
  local_118 = *(undefined8 *)(param_5 + 8);
  local_138 = *param_5;
  uStack_134 = param_5[1];
  uStack_130 = param_5[2];
  uStack_12c = param_5[3];
  local_128 = param_5[4];
  uStack_124 = param_5[5];
  uStack_120 = param_5[6];
  uStack_11c = param_5[7];
  local_f8 = local_58;
  if ((local_b8 & 1) == 0) {
    local_80 = (void *)0x1;
    lVar3 = *plVar1;
    local_1e0 = 0;
  }
  else {
    local_258 = CONCAT44(uStack_ac,uStack_b0);
    pvStack_250 = local_a8;
    uVar9 = (ulonglong)uStack_b0;
    local_68 = uVar10;
    if (uStack_b0 == 0) {
      local_a8 = (void *)0x1;
      local_80 = (void *)0x1;
    }
    else {
      FUN_180027490();
      local_80 = (void *)thunk_FUN_1801d32d0(uVar9,1);
      if (local_80 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_18020171e(1,uVar9);
      }
    }
    memcpy(local_80,local_a8,uVar9);
    FUN_180101c00(&local_258);
    lVar3 = *plVar1;
    local_1e0 = uVar9;
    uVar10 = local_68;
  }
  if (SBORROW8(0,lVar3)) {
    local_1a8 = 0x8000000000000000;
  }
  else {
    local_68 = local_1e0;
    FUN_18009cbb0(&local_258,plVar1);
    local_268 = pvStack_250;
    uStack_260 = local_248;
    local_1a8 = local_258;
    local_1e0 = local_68;
  }
  local_1c0 = local_70;
  local_1b8 = local_88;
  local_228 = local_118;
  local_248 = CONCAT44(uStack_134,local_138);
  uStack_240 = CONCAT44(uStack_12c,uStack_130);
  local_238 = local_128;
  uStack_234 = uStack_124;
  uStack_230 = uStack_120;
  uStack_22c = uStack_11c;
  local_220 = 0;
  local_218 = 1;
  local_210 = 0;
  uStack_208 = 0;
  local_200 = 0;
  local_1f8 = 1;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1d8 = local_80;
  local_1c8 = 0;
  local_258 = local_78;
  pvStack_250 = (void *)local_c0;
  local_1a0 = (undefined4)local_268;
  uStack_19c = local_268._4_4_;
  uStack_198 = (undefined4)uStack_260;
  uStack_194 = uStack_260._4_4_;
  local_190 = 0x10000;
  local_18c = 0;
  local_178 = local_c8;
  local_170 = local_d8;
  local_168 = local_d0;
  local_160 = local_58;
  local_150 = 1;
  local_148 = 0;
  local_140 = local_50;
  local_13f = local_4f;
  local_13d = 1;
  local_4e = 0;
  local_1d0 = local_1e0;
  local_1b0 = uVar6;
  local_158 = uVar10;
  local_13e = uVar8;
  FUN_1800c1560(param_1,&local_258);
  return param_1;
}


