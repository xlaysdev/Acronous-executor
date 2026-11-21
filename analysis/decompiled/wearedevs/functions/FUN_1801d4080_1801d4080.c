/* FUN_1801d4080 @ 1801d4080 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801d4080(longlong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
                  code *param_5)

{
  longlong lVar1;
  uint uVar2;
  HANDLE pvVar3;
  FARPROC pFVar4;
  FARPROC pFVar5;
  FARPROC pFVar6;
  INT_PTR IVar7;
  INT_PTR IVar8;
  HANDLE pvVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined4 local_11d0;
  undefined1 local_11cc [52];
  undefined8 local_1198;
  uint local_1184;
  uint local_1180;
  WCHAR local_117c [2002];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  ulonglong local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined4 local_8c;
  LPSTR local_88;
  ulonglong local_80;
  undefined8 local_78;
  undefined8 local_70;
  FARPROC local_68;
  FARPROC local_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x1801d4096;
  param_3 = param_3 & 0xffffffff;
  local_70 = param_4;
  pvVar3 = GetCurrentProcess();
  if (DAT_1802fd7b8 == (FARPROC)0x0) {
    pFVar4 = GetProcAddress(DAT_1802fd780,"SymFromInlineContextW");
    if (pFVar4 == (FARPROC)0x0) {
      return;
    }
  }
  else {
    pFVar4 = DAT_1802fd7b8;
  }
  DAT_1802fd7b8 = pFVar4;
  local_60 = DAT_1802fd7c0;
  if ((DAT_1802fd7c0 == (FARPROC)0x0) &&
     (local_60 = GetProcAddress(DAT_1802fd780,"SymGetLineFromInlineContextW"),
     local_60 == (FARPROC)0x0)) {
    return;
  }
  lVar15 = param_1 + -1;
  if (param_1 == 0) {
    lVar15 = 0;
  }
  iVar13 = 1;
  DAT_1802fd7c0 = local_60;
  if ((param_2 & 1) == 0) {
    pFVar5 = DAT_1802fd7c8;
    if (DAT_1802fd7c8 == (FARPROC)0x0) {
      pFVar5 = GetProcAddress(DAT_1802fd780,"SymAddrIncludeInlineTrace");
      if (pFVar5 == (FARPROC)0x0) {
        return;
      }
    }
    local_1d8._4_4_ = (uint)(local_1d8 >> 0x20);
    DAT_1802fd7c8 = pFVar5;
    if (DAT_1802fd7d0 == (FARPROC)0x0) {
      pFVar6 = GetProcAddress(DAT_1802fd780,"SymQueryInlineTrace");
      if (pFVar6 == (FARPROC)0x0) {
        return;
      }
      DAT_1802fd7d0 = pFVar6;
    }
    pFVar6 = DAT_1802fd7d0;
    IVar7 = (*pFVar5)(pvVar3);
    local_1d8 = (ulonglong)local_1d8._4_4_ << 0x20;
    iVar13 = 1;
    if ((int)IVar7 == 0) {
      param_3 = 0;
      uVar12 = 1;
      goto LAB_1801d424f;
    }
    local_11d0 = 0;
    param_3 = 0;
    IVar8 = (*pFVar6)(pvVar3,lVar15,0,lVar15,lVar15,&local_1d8,&local_11d0);
    if ((int)IVar8 == 1) {
      iVar13 = (int)IVar7 + 1;
      param_3 = local_1d8 & 0xffffffff;
    }
  }
  uVar12 = iVar13 + (uint)param_3;
  if (uVar12 <= (uint)param_3) {
    return;
  }
LAB_1801d424f:
  local_68 = pFVar4;
  do {
    memset(local_11cc,0,0xff4);
    local_1180 = 2000;
    local_11d0 = 0x58;
    local_1d8 = 0;
    iVar13 = (int)param_3;
    IVar7 = (*pFVar4)(pvVar3,lVar15,param_3,&local_1d8,&local_11d0);
    if ((int)IVar7 == 1) {
      uVar14 = (ulonglong)local_1180 - 1;
      if ((ulonglong)local_1184 <= (ulonglong)local_1180 - 1) {
        uVar14 = (ulonglong)local_1184;
      }
      local_e8 = 0;
      uStack_e0 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_148 = 0;
      uStack_140 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_188 = 0;
      uStack_180 = 0;
      local_198 = 0;
      uStack_190 = 0;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_1b8 = 0;
      uStack_1b0 = 0;
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      uVar2 = WideCharToMultiByte(0xfde9,0,local_117c,(int)uVar14,(LPSTR)&local_1d8,0x100,
                                  (LPCSTR)0x0,(LPBOOL)0x0);
      if (uVar2 == 0) {
        uVar14 = 0x100;
      }
      else {
        if (0x100 < uVar2) goto LAB_1801d42ca;
        uVar14 = (ulonglong)uVar2;
      }
      local_c8 = 0;
      local_c0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_d0 = 0x28;
      local_a8 = local_a8 & 0xffffffff00000000;
      uVar11 = 0;
      pvVar9 = pvVar3;
      lVar10 = lVar15;
      IVar7 = (*local_60)();
      local_90 = 0;
      local_a0 = param_3;
      local_8c = (int)pvVar9;
      if ((int)IVar7 == 1) {
        lVar10 = -1;
        do {
          lVar1 = lVar10 * 2;
          lVar10 = lVar10 + 1;
        } while (*(short *)(local_b8 + 2 + lVar1) != 0);
        local_90 = 1;
        uVar11 = 1;
        local_a0 = local_b8;
        local_8c = local_c0;
      }
      local_78 = local_1198;
      local_a8 = uVar11;
      local_98 = lVar10;
      local_88 = (LPSTR)&local_1d8;
      local_80 = uVar14;
      (*param_5)(local_70);
      pFVar4 = local_68;
    }
LAB_1801d42ca:
    uVar2 = iVar13 + 1;
    param_3 = (ulonglong)uVar2;
    if (uVar2 == uVar12) {
      return;
    }
  } while( true );
}


