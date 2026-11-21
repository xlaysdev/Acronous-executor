/* FUN_1800c2050 @ 1800c2050 */

undefined8 *
FUN_1800c2050(undefined8 *param_1,int *param_2,longlong *param_3,byte param_4,int *param_5)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  void *_Size;
  ulonglong uVar6;
  void *pvVar7;
  undefined1 uVar8;
  undefined8 unaff_R13;
  ulonglong uVar9;
  undefined8 uVar10;
  void *pvVar11;
  undefined1 local_488 [304];
  undefined8 local_358;
  void *pvStack_350;
  uint local_348;
  undefined4 uStack_344;
  uint uStack_340;
  undefined4 uStack_33c;
  void *local_338;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  void *local_1d8;
  void *local_1d0;
  void *local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  void *local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined1 local_184;
  longlong *local_170;
  undefined8 local_168;
  void *local_160;
  undefined8 local_158;
  void *local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined1 local_138;
  undefined1 local_137;
  undefined1 local_136;
  undefined2 local_135;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  void *local_110;
  undefined8 local_108;
  void *local_100;
  ulonglong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  void *local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  uint local_c8;
  undefined4 uStack_c4;
  uint uStack_c0;
  undefined4 uStack_bc;
  void *local_b8;
  ulonglong local_a8;
  longlong *local_a0;
  longlong *local_98;
  void *local_90;
  void *local_88;
  int *local_80;
  ulonglong local_78;
  longlong local_70;
  void *local_68;
  longlong *local_60;
  undefined8 local_58;
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
  pvVar11 = *(void **)(param_2 + 6);
  local_80 = (int *)CONCAT71(local_80._1_7_,*(byte *)(param_2 + 0x14));
  pvVar7 = (void *)0x0;
  if ((*(byte *)(param_2 + 0x14) & 1) != 0) {
    pvVar7 = pvVar11;
  }
  if (SBORROW8(0,lVar3)) {
    pvVar7 = (void *)0x0;
  }
  uVar6 = *(ulonglong *)(param_2 + 8);
  plVar1 = (longlong *)(param_2 + 10);
  local_4a = 1;
  local_4b = 1;
  local_60 = param_3;
  FUN_180101280(&local_358,&local_60,uVar9 & 0xffffffff,pvVar7,uVar6,plVar1);
  plVar4 = local_60;
  if (local_348 == 2) {
    param_1[1] = 2;
    param_1[2] = local_358;
    *param_1 = 1;
    if (*param_5 == 2) {
      local_80 = param_5 + 2;
      FUN_18007eeb0();
      FUN_1800ba880(*(undefined8 *)(param_5 + 8),*(undefined8 *)(param_5 + 10));
      local_49 = 1;
      FUN_1800b0d40(local_80);
    }
    else {
      local_49 = 1;
      FUN_1800b9cb0();
    }
    LOCK();
    *local_60 = *local_60 + -1;
    UNLOCK();
    if (*local_60 == 0) {
      FUN_18003d7f0(&local_60);
      return param_1;
    }
    return param_1;
  }
  local_b8 = local_338;
  local_c8 = local_348;
  uStack_c4 = uStack_344;
  uStack_c0 = uStack_340;
  uStack_bc = uStack_33c;
  local_98 = local_60;
  local_e8 = local_358;
  local_118 = local_358;
  local_e0 = pvStack_350;
  local_110 = pvStack_350;
  iVar2 = *param_2;
  if (iVar2 == 1) {
    local_a0 = local_60;
    local_4c = 1;
    local_78 = uVar6;
    local_f0 = FUN_180101140(param_2 + 2);
    uVar9 = (ulonglong)param_4;
    uVar6 = local_78;
    local_d0 = local_f0;
  }
  local_f8 = (ulonglong)(iVar2 == 1);
  local_d8 = plVar4;
  pvVar7 = (void *)-lVar3;
  local_78 = local_f8;
  if (SBORROW8(0,lVar3)) {
    local_70 = -0x8000000000000000;
    uVar8 = (char)uVar9;
  }
  else {
    local_58 = CONCAT71(local_58._1_7_,(char)uVar9);
    uVar9 = uVar6 * 2;
    if (0x7ffffffffffffffe < uVar9 || (longlong)uVar6 < 0) {
      uVar10 = 0;
LAB_1800c228e:
      local_4d = 1;
      local_a8 = local_78;
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(uVar10,uVar9);
    }
    if (uVar9 == 0) {
      pvVar7 = (void *)0x2;
      local_70 = 0;
    }
    else {
      FUN_180027490();
      uVar10 = 2;
      pvVar7 = (void *)thunk_FUN_1801d32d0(uVar9,2);
      if (pvVar7 == (void *)0x0) goto LAB_1800c228e;
      local_70 = uVar6;
    }
    memcpy(pvVar7,pvVar11,uVar9);
    uVar8 = (undefined1)local_58;
  }
  local_4f = *(undefined1 *)((longlong)param_2 + 0x51);
  plVar4 = *(longlong **)(param_2 + 0x10);
  local_90 = pvVar7;
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
    local_100 = *(void **)(param_2 + 0x12);
    pvVar7 = local_100;
  }
  local_108 = local_58;
  memcpy(local_488,param_5,0x130);
  pvVar11 = local_b8;
  if ((local_c8 & 1) == 0) {
    local_88 = (void *)0x1;
    lVar3 = *plVar1;
    local_1d8 = (void *)0x0;
  }
  else {
    local_358 = CONCAT44(uStack_bc,uStack_c0);
    pvStack_350 = local_b8;
    _Size = (void *)(ulonglong)uStack_c0;
    local_68 = pvVar7;
    if (uStack_c0 == 0) {
      pvVar11 = (void *)0x1;
      local_88 = (void *)0x1;
    }
    else {
      FUN_180027490();
      local_88 = (void *)thunk_FUN_1801d32d0(_Size,1);
      if (local_88 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_18020171e(1,_Size);
      }
    }
    memcpy(local_88,pvVar11,(size_t)_Size);
    FUN_180101c00(&local_358);
    lVar3 = *plVar1;
    local_1d8 = _Size;
    pvVar7 = local_68;
  }
  if (SBORROW8(0,lVar3)) {
    local_1a0 = 0x8000000000000000;
  }
  else {
    local_68 = local_1d8;
    FUN_18009cbb0(&local_358,plVar1);
    uStack_120 = CONCAT44(uStack_344,local_348);
    local_128 = pvStack_350;
    local_1a0 = local_358;
    local_1d8 = local_68;
  }
  local_1b8 = local_70;
  local_1b0 = local_90;
  local_1a8 = uVar6;
  memcpy(&local_348,local_488,0x130);
  local_218 = 0;
  local_210 = 1;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  local_1f0 = 1;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d0 = local_88;
  local_1c0 = 0;
  local_358 = local_78;
  pvStack_350 = (void *)local_d0;
  local_198 = (undefined4)local_128;
  uStack_194 = local_128._4_4_;
  uStack_190 = (undefined4)uStack_120;
  uStack_18c = uStack_120._4_4_;
  local_188 = 0x10000;
  local_184 = 0;
  local_170 = local_d8;
  local_168 = local_e8;
  local_160 = local_e0;
  local_158 = local_58;
  local_148 = 1;
  local_140 = 0;
  local_138 = local_80._0_1_;
  local_137 = local_4f;
  local_135 = 1;
  local_4e = 0;
  local_1c8 = local_1d8;
  local_150 = pvVar7;
  local_136 = uVar8;
  FUN_1800c13d0(param_1,&local_358);
  return param_1;
}


