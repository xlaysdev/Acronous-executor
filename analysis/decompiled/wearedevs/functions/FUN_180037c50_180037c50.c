/* FUN_180037c50 @ 180037c50 */

void FUN_180037c50(char *param_1,longlong param_2)

{
  char *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *_Dst;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong *unaff_R14;
  undefined8 uVar14;
  bool bVar15;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_c0;
  undefined2 local_bc;
  char local_b8;
  char cStack_b7;
  undefined2 uStack_b6;
  undefined1 uStack_b4;
  undefined1 uStack_b3;
  undefined2 uStack_b2;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *plStack_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar9 = *(ulonglong *)(param_2 + 0x20);
  if (uVar9 <= *(ulonglong *)(param_2 + 0x28)) {
LAB_180037cda:
    local_78 = 5;
LAB_180037ce2:
    uStack_b0 = (longlong *)FUN_1801f6b20(param_2,&local_78);
    goto LAB_1800382ca;
  }
  _Dst = (longlong *)(param_2 + 0x18);
  lVar10 = *(longlong *)(param_2 + 0x18);
  lVar7 = *(ulonglong *)(param_2 + 0x28) + 5;
  plVar13 = (longlong *)0x100002600;
LAB_180037cb0:
  bVar4 = *(byte *)(lVar10 + -5 + lVar7);
  if (((ulonglong)bVar4 < 0x21) && ((0x100002600U >> ((ulonglong)bVar4 & 0x3f) & 1) != 0))
  goto code_r0x000180037cc2;
  switch(bVar4) {
  case 0x5b:
    pcVar1 = (char *)(param_2 + 0x30);
    *pcVar1 = *pcVar1 + -1;
    if (*pcVar1 != '\0') {
      uVar8 = lVar7 - 4;
      *(ulonglong *)(param_2 + 0x28) = uVar8;
      local_90 = (longlong *)0x0;
      local_88 = (longlong *)&DAT_00000008;
      plStack_80 = (longlong *)0x0;
      bVar15 = true;
      if (uVar9 <= uVar8) goto LAB_180037e7a;
      goto LAB_180037d57;
    }
    goto LAB_1800383cb;
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
switchD_180037d0f_caseD_5c:
    if (9 < (byte)(bVar4 - 0x30)) {
      local_78 = 10;
      plVar13 = (longlong *)FUN_1801f6b20(param_2,&local_78);
      goto LAB_180038449;
    }
    FUN_1800378a0(&local_b8,param_2,1);
    iVar6 = CONCAT22(uStack_b6,CONCAT11(cStack_b7,local_b8));
    lVar10 = CONCAT26(uStack_b2,CONCAT15(uStack_b3,CONCAT14(uStack_b4,iVar6)));
    if (lVar10 == 3) goto LAB_1800382ca;
    _Dst = uStack_b0;
    if (iVar6 == 2) {
LAB_1800382ef:
      cStack_b7 = (char)lVar10;
      local_b8 = '\x02';
      plVar13 = (longlong *)((ulonglong)_Dst >> 0x3f);
    }
    else {
      if (iVar6 != 1) goto LAB_1800382f8;
LAB_1800382a0:
      cStack_b7 = (char)lVar10;
      local_b8 = '\x02';
      plVar13 = (longlong *)0x0;
    }
    goto LAB_1800384de;
  case 0x66:
    *(ulonglong *)(param_2 + 0x28) = lVar7 - 4U;
    if (uVar9 <= lVar7 - 4U) goto LAB_1800382b6;
    cVar5 = *(char *)(lVar10 + -4 + lVar7);
    *(ulonglong *)(param_2 + 0x28) = lVar7 - 3U;
    if (cVar5 == 'a') {
      if (uVar9 <= lVar7 - 3U) goto LAB_1800382b6;
      cVar5 = *(char *)(lVar10 + -3 + lVar7);
      *(ulonglong *)(param_2 + 0x28) = lVar7 - 2U;
      if (cVar5 == 'l') {
        if (uVar9 <= lVar7 - 2U) goto LAB_1800382b6;
        cVar5 = *(char *)(lVar10 + -2 + lVar7);
        *(ulonglong *)(param_2 + 0x28) = lVar7 - 1U;
        if (cVar5 == 's') {
          if (uVar9 <= lVar7 - 1U) goto LAB_1800382b6;
          cVar5 = *(char *)(lVar10 + -1 + lVar7);
          *(longlong *)(param_2 + 0x28) = lVar7;
          if (cVar5 == 'e') {
            local_b8 = '\x01';
            cStack_b7 = '\0';
            goto LAB_1800384de;
          }
        }
      }
    }
    break;
  case 0x6e:
    *(ulonglong *)(param_2 + 0x28) = lVar7 - 4U;
    if (uVar9 <= lVar7 - 4U) goto LAB_1800382b6;
    cVar5 = *(char *)(lVar10 + -4 + lVar7);
    *(ulonglong *)(param_2 + 0x28) = lVar7 - 3U;
    if (cVar5 != 'u') break;
    if (uVar9 <= lVar7 - 3U) goto LAB_1800382b6;
    cVar5 = *(char *)(lVar10 + -3 + lVar7);
    *(ulonglong *)(param_2 + 0x28) = lVar7 - 2U;
    if (cVar5 == 'l') {
      if (uVar9 <= lVar7 - 2U) goto LAB_1800382b6;
      cVar5 = *(char *)(lVar10 + -2 + lVar7);
      *(longlong *)(param_2 + 0x28) = lVar7 + -1;
      if (cVar5 == 'l') {
        local_b8 = '\0';
        cStack_b7 = 'l';
        goto LAB_1800384de;
      }
    }
    break;
  case 0x74:
    *(ulonglong *)(param_2 + 0x28) = lVar7 - 4U;
    if (uVar9 <= lVar7 - 4U) {
LAB_1800382b6:
      local_78 = 5;
LAB_1800382be:
      uStack_b0 = (longlong *)FUN_1801f6b90(param_2,&local_78);
      goto LAB_1800382ca;
    }
    cVar5 = *(char *)(lVar10 + -4 + lVar7);
    *(ulonglong *)(param_2 + 0x28) = lVar7 - 3U;
    if (cVar5 != 'r') break;
    if (uVar9 <= lVar7 - 3U) goto LAB_1800382b6;
    cVar5 = *(char *)(lVar10 + -3 + lVar7);
    *(ulonglong *)(param_2 + 0x28) = lVar7 - 2U;
    if (cVar5 == 'u') {
      if (uVar9 <= lVar7 - 2U) goto LAB_1800382b6;
      cVar5 = *(char *)(lVar10 + -2 + lVar7);
      *(longlong *)(param_2 + 0x28) = lVar7 + -1;
      if (cVar5 == 'e') {
        cStack_b7 = '\x01';
        local_b8 = '\x01';
        goto LAB_1800384de;
      }
    }
    break;
  case 0x7b:
    pcVar1 = (char *)(param_2 + 0x30);
    *pcVar1 = *pcVar1 + -1;
    if (*pcVar1 != '\0') {
      *(longlong *)(param_2 + 0x28) = lVar7 + -4;
      FUN_180035990(&local_b8,param_2,1);
      *(char *)(param_2 + 0x30) = *(char *)(param_2 + 0x30) + '\x01';
      uVar9 = *(ulonglong *)(param_2 + 0x28);
      if (*(ulonglong *)(param_2 + 0x20) <= uVar9) goto LAB_18003812b;
      goto LAB_1800380fd;
    }
LAB_1800383cb:
    local_78 = 0x18;
    goto LAB_180037ce2;
  default:
    if (bVar4 == 0x22) {
      *(longlong *)(param_2 + 0x28) = lVar7 + -4;
      *(undefined8 *)(param_2 + 0x10) = 0;
      FUN_1801cb540(&local_78,_Dst,param_2);
      if (local_78 == 2) {
        *(void **)(param_1 + 8) = (void *)CONCAT44(uStack_6c,uStack_70);
        *param_1 = '\x06';
        return;
      }
      if ((longlong)local_68 < 0) {
        uVar14 = 0;
LAB_1800382e4:
                    /* WARNING: Subroutine does not return */
        FUN_18020171e(uVar14,local_68);
      }
      if (local_68 == (longlong *)0x0) {
        _Dst = (longlong *)0x1;
      }
      else {
        FUN_180027490();
        uVar14 = 1;
        _Dst = (longlong *)thunk_FUN_1801d32d0(local_68,1);
        if (_Dst == (longlong *)0x0) goto LAB_1800382e4;
      }
      plVar13 = _Dst;
      memcpy(_Dst,(void *)CONCAT44(uStack_6c,uStack_70),(size_t)local_68);
      cStack_b7 = (char)plVar13;
      local_b8 = '\x03';
      plVar13 = local_68;
      unaff_R14 = local_68;
    }
    else {
      if (bVar4 != 0x2d) goto switchD_180037d0f_caseD_5c;
      *(longlong *)(param_2 + 0x28) = lVar7 + -4;
      FUN_1800378a0(&local_b8,param_2,0);
      iVar6 = CONCAT22(uStack_b6,CONCAT11(cStack_b7,local_b8));
      lVar10 = CONCAT26(uStack_b2,CONCAT15(uStack_b3,CONCAT14(uStack_b4,iVar6)));
      if (lVar10 == 3) goto LAB_1800382ca;
      _Dst = uStack_b0;
      if (lVar10 != 0) {
        if (iVar6 == 1) goto LAB_1800382a0;
        goto LAB_1800382ef;
      }
LAB_1800382f8:
      cStack_b7 = -1;
      if (((ulonglong)_Dst & 0x7fffffffffffffff) < 0x7ff0000000000000) {
        local_78 = local_78 & 0xffffffffffffff00;
        cStack_b7 = (char)&local_78;
        FUN_18000b2a0();
        local_b8 = '\x02';
      }
      else {
        local_b8 = '\0';
      }
      plVar13 = (longlong *)0x2;
    }
    goto LAB_1800384de;
  }
  local_78 = 9;
  goto LAB_1800382be;
code_r0x000180037cc2:
  *(longlong *)(param_2 + 0x28) = lVar7 + -4;
  lVar2 = lVar7 - uVar9;
  lVar7 = lVar7 + 1;
  if (lVar2 == 4) goto LAB_180037cda;
  goto LAB_180037cb0;
  while( true ) {
    if ((0x100002600U >> (uVar8 & 0x3f) & 1) == 0) {
      if (uVar8 != 0x2c) goto LAB_1800383f7;
      local_90 = (longlong *)0x15;
      local_58 = (longlong *)FUN_1801f6b20(param_2,&local_90);
      goto LAB_18003813f;
    }
    *(ulonglong *)(param_2 + 0x28) = uVar9;
    if (uVar9 == *(ulonglong *)(param_2 + 0x20)) break;
LAB_1800380fd:
    uVar9 = uVar9 + 1;
    bVar4 = *(byte *)(*_Dst + -1 + uVar9);
    uVar8 = (ulonglong)bVar4;
    if (0x2c < uVar8) {
LAB_1800383f7:
      if (bVar4 != 0x7d) {
        local_90 = (longlong *)&DAT_00000016;
        local_58 = (longlong *)FUN_1801f6b20(param_2,&local_90);
        goto LAB_18003813f;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar9;
      local_68 = (longlong *)CONCAT44(uStack_a4,local_a8);
      uStack_60 = (longlong *)CONCAT44(uStack_9c,uStack_a0);
      local_78 = CONCAT44(CONCAT22(uStack_b2,CONCAT11(uStack_b3,uStack_b4)),
                          CONCAT22(uStack_b6,CONCAT11(cStack_b7,local_b8)));
      uStack_70 = (undefined4)uStack_b0;
      uStack_6c = uStack_b0._4_4_;
      plVar13 = uStack_b0;
      if (local_b8 == '\x06') goto LAB_1800384d0;
      local_c0 = CONCAT13(uStack_b3,CONCAT12(uStack_b4,uStack_b6));
      local_bc = uStack_b2;
      _Dst = local_68;
      unaff_R14 = uStack_60;
      goto joined_r0x000180038443;
    }
  }
LAB_18003812b:
  local_90 = (longlong *)0x3;
  local_58 = (longlong *)FUN_1801f6b20(param_2,&local_90);
LAB_18003813f:
  plVar13 = uStack_b0;
  local_78 = CONCAT44(CONCAT22(uStack_b2,CONCAT11(uStack_b3,uStack_b4)),
                      CONCAT22(uStack_b6,CONCAT11(cStack_b7,local_b8)));
  uStack_70 = (undefined4)uStack_b0;
  uStack_6c = uStack_b0._4_4_;
  local_68 = (longlong *)CONCAT44(uStack_a4,local_a8);
  uStack_60 = (longlong *)CONCAT44(uStack_9c,uStack_a0);
  if (local_b8 == '\x06') {
    local_98 = local_58;
    FUN_1800388b0(local_58);
    goto LAB_18003826a;
  }
  goto LAB_1800382a8;
LAB_180037d57:
  do {
    uVar11 = uVar8 + 2;
    while( true ) {
      bVar4 = *(byte *)(*_Dst + uVar8);
      if ((0x20 < (ulonglong)bVar4) || ((0x100002600U >> ((ulonglong)bVar4 & 0x3f) & 1) == 0))
      break;
      uVar8 = uVar8 + 1;
      *(ulonglong *)(param_2 + 0x28) = uVar8;
      uVar11 = uVar11 + 1;
      if (uVar9 == uVar8) goto LAB_180037e7a;
    }
    if (bVar4 == 0x5d) {
      local_e8 = local_88;
      uStack_e0 = plStack_80;
      local_b8 = '\x04';
      plVar13 = local_90;
      goto LAB_1800381d8;
    }
    if (!bVar15) {
      if (bVar4 != 0x2c) {
        local_78 = 7;
        plVar13 = (longlong *)FUN_1801f6b20(param_2,&local_78);
        goto LAB_180037e91;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar8 + 1;
      if (uVar9 <= uVar8 + 1) {
LAB_180038383:
        local_78 = 5;
        plVar13 = (longlong *)FUN_1801f6b20(param_2,&local_78);
        goto LAB_180037e91;
      }
      while( true ) {
        bVar4 = *(byte *)(*_Dst + -1 + uVar11);
        if ((0x20 < (ulonglong)bVar4) || ((0x100002600U >> ((ulonglong)bVar4 & 0x3f) & 1) == 0))
        break;
        *(ulonglong *)(param_2 + 0x28) = uVar11;
        bVar15 = uVar11 == uVar9;
        uVar11 = uVar11 + 1;
        if (bVar15) goto LAB_180038383;
      }
      if (bVar4 == 0x5d) {
        local_78 = 0x15;
        plVar13 = (longlong *)FUN_1801f6b20(param_2,&local_78);
        goto LAB_180037e91;
      }
    }
    FUN_180037c50(&local_78,param_2);
    plVar13 = plStack_80;
    if ((char)local_78 == '\x06') {
      plVar13 = (longlong *)CONCAT44(uStack_6c,uStack_70);
      goto LAB_180037e91;
    }
    uStack_b3 = (undefined1)(local_78 >> 0x28);
    uStack_b2 = (undefined2)(local_78 >> 0x30);
    cStack_b7 = (char)(local_78 >> 8);
    uStack_b6 = (undefined2)(local_78 >> 0x10);
    uStack_b4 = (undefined1)(local_78 >> 0x20);
    uStack_b0._0_4_ = uStack_70;
    uStack_b0._4_4_ = uStack_6c;
    local_a8 = (undefined4)local_68;
    uStack_a4 = local_68._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
    local_b8 = (char)local_78;
    if (plStack_80 == local_90) {
      FUN_1801f8b70(&local_90);
    }
    plVar3 = local_88 + (longlong)plVar13 * 4 + 2;
    *(undefined4 *)plVar3 = local_a8;
    *(undefined4 *)((longlong)plVar3 + 4) = uStack_a4;
    *(undefined4 *)(plVar3 + 1) = uStack_a0;
    *(undefined4 *)((longlong)plVar3 + 0xc) = uStack_9c;
    plVar3 = local_88 + (longlong)plVar13 * 4;
    *(uint *)plVar3 = CONCAT22(uStack_b6,CONCAT11(cStack_b7,local_b8));
    *(uint *)((longlong)plVar3 + 4) = CONCAT22(uStack_b2,CONCAT11(uStack_b3,uStack_b4));
    *(undefined4 *)(plVar3 + 1) = (undefined4)uStack_b0;
    *(undefined4 *)((longlong)plVar3 + 0xc) = uStack_b0._4_4_;
    plStack_80 = (longlong *)((longlong)plVar13 + 1);
    uVar9 = *(ulonglong *)(param_2 + 0x20);
    uVar8 = *(ulonglong *)(param_2 + 0x28);
    bVar15 = false;
  } while (uVar8 < uVar9);
LAB_180037e7a:
  local_78 = 2;
  plVar13 = (longlong *)FUN_1801f6b20(param_2,&local_78);
LAB_180037e91:
  plVar3 = plStack_80;
  local_98 = (longlong *)0x0;
  while (plVar3 != local_98) {
    local_98 = (longlong *)((longlong)local_98 + 1);
    FUN_1800300c0();
  }
  if (local_90 != (longlong *)0x0) {
    thunk_FUN_1801d3330(local_88,(longlong)local_90 << 5,8);
  }
  uVar9 = *(ulonglong *)(param_2 + 0x20);
  uVar8 = *(ulonglong *)(param_2 + 0x28);
  local_b8 = '\x06';
LAB_1800381d8:
  *(char *)(param_2 + 0x30) = *(char *)(param_2 + 0x30) + '\x01';
  local_a8 = (undefined4)local_e8;
  uStack_a4 = local_e8._4_4_;
  uStack_a0 = (undefined4)uStack_e0;
  uStack_9c = uStack_e0._4_4_;
  uStack_b0 = plVar13;
  if (uVar8 < uVar9) {
LAB_1800381fb:
    uVar11 = uVar8 + 1;
    bVar4 = *(byte *)(*_Dst + -1 + uVar11);
    uVar12 = (ulonglong)bVar4;
    if (uVar12 < 0x2d) {
      if ((0x100002600U >> (uVar12 & 0x3f) & 1) != 0) goto code_r0x000180038215;
      if (uVar12 != 0x2c) goto LAB_1800384aa;
      *(ulonglong *)(param_2 + 0x28) = uVar11;
      if (uVar9 <= uVar11) goto LAB_1800385ba;
      lVar10 = uVar8 + 2;
      goto LAB_180038478;
    }
LAB_1800384aa:
    if (bVar4 == 0x5d) {
      *(ulonglong *)(param_2 + 0x28) = uVar11;
      uStack_b0._0_4_ = SUB84(plVar13,0);
      uStack_b0._4_4_ = (undefined4)((ulonglong)plVar13 >> 0x20);
      local_68 = local_e8;
      uStack_60 = uStack_e0;
      local_78 = CONCAT44(CONCAT22(uStack_b2,CONCAT11(uStack_b3,uStack_b4)),
                          CONCAT22(uStack_b6,CONCAT11(cStack_b7,local_b8)));
      uStack_70 = (undefined4)uStack_b0;
      uStack_6c = uStack_b0._4_4_;
      if (local_b8 == '\x06') {
LAB_1800384d0:
        uStack_b0 = plVar13;
        plVar13 = (longlong *)CONCAT44(uStack_6c,uStack_70);
      }
      else {
        local_bc = uStack_b2;
        local_c0 = local_78._2_4_;
        _Dst = local_e8;
        unaff_R14 = uStack_e0;
joined_r0x000180038443:
        uStack_b2 = local_bc;
        uStack_b0 = plVar13;
        local_68 = _Dst;
        uStack_60 = unaff_R14;
        if (local_b8 != '\x06') {
LAB_1800384de:
          *param_1 = local_b8;
          param_1[1] = cStack_b7;
          *(undefined4 *)(param_1 + 2) = local_c0;
          *(undefined2 *)(param_1 + 6) = local_bc;
          *(longlong **)(param_1 + 8) = plVar13;
          *(longlong **)(param_1 + 0x10) = _Dst;
          *(longlong **)(param_1 + 0x18) = unaff_R14;
          return;
        }
      }
      goto LAB_180038449;
    }
    local_90 = (longlong *)&DAT_00000016;
    local_58 = (longlong *)FUN_1801f6b20(param_2,&local_90);
    goto LAB_18003823d;
  }
LAB_180038229:
  local_90 = (longlong *)0x2;
  local_58 = (longlong *)FUN_1801f6b20(param_2,&local_90);
  goto LAB_18003823d;
code_r0x000180038215:
  *(ulonglong *)(param_2 + 0x28) = uVar11;
  uVar8 = uVar11;
  if (uVar11 == uVar9) goto LAB_180038229;
  goto LAB_1800381fb;
  while( true ) {
    *(longlong *)(param_2 + 0x28) = lVar10;
    lVar7 = (1 - uVar9) + lVar10;
    lVar10 = lVar10 + 1;
    if (lVar7 == 1) break;
LAB_180038478:
    bVar4 = *(byte *)(*_Dst + -1 + lVar10);
    if ((0x20 < (ulonglong)bVar4) || ((0x100002600U >> ((ulonglong)bVar4 & 0x3f) & 1) == 0)) {
      if (bVar4 == 0x5d) {
        local_90 = (longlong *)0x15;
        local_58 = (longlong *)FUN_1801f6b20(param_2,&local_90);
        goto LAB_18003823d;
      }
      break;
    }
  }
LAB_1800385ba:
  local_90 = (longlong *)&DAT_00000016;
  local_58 = (longlong *)FUN_1801f6b20(param_2,&local_90);
LAB_18003823d:
  plVar13 = uStack_b0;
  local_68 = (longlong *)CONCAT44(uStack_a4,local_a8);
  uStack_60 = (longlong *)CONCAT44(uStack_9c,uStack_a0);
  local_78 = CONCAT44(CONCAT22(uStack_b2,CONCAT11(uStack_b3,uStack_b4)),
                      CONCAT22(uStack_b6,CONCAT11(cStack_b7,local_b8)));
  uStack_70 = (undefined4)uStack_b0;
  uStack_6c = uStack_b0._4_4_;
  if (local_b8 == '\x06') {
    local_98 = local_58;
    FUN_1800388b0(local_58);
LAB_18003826a:
    thunk_FUN_1801d3330(local_98,0x28,8);
  }
  else {
LAB_1800382a8:
    plVar13 = local_58;
    FUN_18000b2a0();
  }
LAB_180038449:
  uStack_b0 = (longlong *)FUN_1801f6c00(plVar13,param_2);
LAB_1800382ca:
  *(longlong **)(param_1 + 8) = uStack_b0;
  *param_1 = '\x06';
  return;
}


