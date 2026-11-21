/* FUN_18018e420 @ 18018e420 */

undefined8 *
FUN_18018e420(undefined8 *param_1,undefined8 *param_2,longlong param_3,longlong param_4,byte param_5
             )

{
  longlong *plVar1;
  code *pcVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  bool bVar13;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong local_a0;
  longlong lStack_98;
  undefined2 local_90;
  undefined6 uStack_8e;
  longlong *local_88;
  byte local_80;
  uint local_74;
  longlong *local_70;
  longlong *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_74 = (uint)param_5;
  iVar11 = 0x89;
  if ((param_5 & 1) == 0) {
    iVar11 = 0;
  }
  plVar1 = (longlong *)*param_2;
  local_68 = plVar1 + 3;
  plVar9 = plVar1 + 4;
  LOCK();
  bVar13 = (char)plVar1[4] == '\0';
  if (bVar13) {
    *(char *)(plVar1 + 4) = '\x01';
  }
  UNLOCK();
  if (!bVar13) {
    FUN_180200390(plVar9);
  }
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    bVar3 = 0;
    cVar4 = *(char *)((longlong)plVar1 + 0x21);
  }
  else {
    bVar3 = FUN_180200a50();
    bVar3 = bVar3 ^ 1;
    cVar4 = *(char *)((longlong)plVar1 + 0x21);
  }
  if (cVar4 != '\0') {
    uStack_f8._1_7_ = (undefined7)((ulonglong)uStack_f8 >> 8);
    uStack_f8 = (code *)CONCAT71(uStack_f8._1_7_,bVar3);
    local_100 = (longlong **)plVar9;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_100,&PTR_FUN_180266790,
                  &DAT_1802666a0);
  }
  local_88 = plVar9;
  local_80 = bVar3;
  if (plVar1[7] == 0) {
    uVar8 = FUN_18018e000(plVar1[3],plVar1 + 5);
LAB_18018e513:
    if (uVar8 != 0) {
      if (((bVar3 == 0) && ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) != 0)) &&
         (cVar4 = FUN_180200a50(), cVar4 == '\0')) {
        *(undefined1 *)((longlong)plVar1 + 0x21) = 1;
      }
      LOCK();
      lVar10 = *plVar9;
      *(char *)plVar9 = '\0';
      UNLOCK();
      if ((char)lVar10 == '\x02') {
        WakeByAddressSingle(plVar9);
      }
      goto LAB_18018e541;
    }
  }
  else {
    puVar7 = (undefined8 *)(plVar1[7] * 8 + plVar1[6] + -8);
    if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ba0(&DAT_1802666b8);
    }
    if (0x20 < *(ulonglong *)*puVar7) {
      uVar8 = FUN_18018e000(plVar1[3],plVar1 + 5);
      goto LAB_18018e513;
    }
  }
  if ((plVar1[7] == 0) ||
     (puVar7 = (undefined8 *)(plVar1[7] * 8 + plVar1[6] + -8), puVar7 == (undefined8 *)0x0)) {
    local_100 = &local_68;
    uStack_f8 = FUN_18018ed90;
    local_f0 = &local_88;
    uStack_e8 = FUN_18018cdf0;
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0(&DAT_1802666d0,&local_100,&DAT_180266728);
  }
  plVar12 = (longlong *)*puVar7;
  LOCK();
  lVar10 = *plVar12;
  *plVar12 = *plVar12 + 1;
  UNLOCK();
  if (*plVar12 == 0 || SCARRY8(lVar10,1) != *plVar12 < 0) goto LAB_18018eaac;
  plVar12 = (longlong *)*puVar7;
  if (((bVar3 == 0) && ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) != 0)) &&
     (cVar4 = FUN_180200a50(), cVar4 == '\0')) {
    *(undefined1 *)((longlong)plVar1 + 0x21) = 1;
  }
  LOCK();
  lVar10 = *plVar9;
  *(char *)plVar9 = '\0';
  UNLOCK();
  if ((char)lVar10 == '\x02') {
    WakeByAddressSingle(plVar9);
  }
  local_100 = (longlong **)0x0;
  local_68 = (longlong *)((ulonglong)local_68 & 0xffffffff00000000);
  local_88 = plVar12;
  iVar5 = WSAIoctl(param_3,0x48000022,0,0,&local_100,8,&local_68,0,0);
  if (iVar5 == -1) {
    uVar6 = WSAGetLastError();
    local_100 = (longlong **)0x0;
    local_68 = (longlong *)((ulonglong)local_68 & 0xffffffff00000000);
    iVar5 = WSAIoctl(param_3,0x4800001c,0,0,&local_100,8,&local_68,0,0);
    if (iVar5 == -1) {
      WSAGetLastError();
    }
    else {
      local_a8 = (longlong)local_100;
      if (local_100 != (longlong **)param_3) goto LAB_18018e60d;
    }
    local_100 = (longlong **)0x0;
    local_68 = (longlong *)((ulonglong)local_68 & 0xffffffff00000000);
    iVar5 = WSAIoctl(param_3,0x4800001d,0,0,&local_100,8,&local_68,0,0);
    if (iVar5 == -1) {
      WSAGetLastError();
    }
    else {
      local_a8 = (longlong)local_100;
      if (local_100 != (longlong **)param_3) goto LAB_18018e60d;
    }
    local_100 = (longlong **)0x0;
    local_68 = (longlong *)((ulonglong)local_68 & 0xffffffff00000000);
    iVar5 = WSAIoctl(param_3,0x4800001b,0,0,&local_100,8,&local_68,0,0);
    if (iVar5 == -1) {
      WSAGetLastError();
    }
    else {
      local_a8 = (longlong)local_100;
      if (local_100 != (longlong **)param_3) goto LAB_18018e60d;
    }
    uVar8 = (ulonglong)uVar6 << 0x20 | 2;
    LOCK();
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (*plVar12 == 0) {
      FUN_180187680(&local_88);
    }
LAB_18018e541:
    param_1[1] = uVar8;
    *param_1 = 0;
    return param_1;
  }
  local_a8 = (longlong)local_100;
LAB_18018e60d:
  local_a0 = 0;
  lStack_98 = 0;
  local_90 = 0;
  local_100 = (longlong **)0x1;
  uStack_f8 = (code *)0x1;
  local_f0 = (longlong **)((ulonglong)local_f0 & 0xffffffffffff0000);
  uStack_e8 = (code *)((ulonglong)uStack_e8._4_4_ << 0x20);
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  lStack_c0 = 0;
  local_b8 = 0;
  lStack_b0 = 0;
  local_e0 = plVar12;
  FUN_180027490();
  plVar9 = (longlong *)thunk_FUN_1801d32d0(0x78,8);
  uVar6 = local_74;
  if (plVar9 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x78);
  }
  plVar9[0xe] = CONCAT62(uStack_8e,local_90);
  plVar9[0xc] = local_a0;
  plVar9[0xd] = lStack_98;
  plVar9[10] = lStack_b0;
  plVar9[0xb] = local_a8;
  plVar9[8] = lStack_c0;
  plVar9[9] = local_b8;
  *(undefined4 *)(plVar9 + 6) = (undefined4)uStack_d0;
  *(undefined4 *)((longlong)plVar9 + 0x34) = uStack_d0._4_4_;
  *(undefined4 *)(plVar9 + 7) = (undefined4)uStack_c8;
  *(undefined4 *)((longlong)plVar9 + 0x3c) = uStack_c8._4_4_;
  *(undefined4 *)(plVar9 + 4) = (undefined4)local_e0;
  *(undefined4 *)((longlong)plVar9 + 0x24) = local_e0._4_4_;
  *(undefined4 *)(plVar9 + 5) = (undefined4)uStack_d8;
  *(undefined4 *)((longlong)plVar9 + 0x2c) = uStack_d8._4_4_;
  *(undefined4 *)(plVar9 + 2) = (undefined4)local_f0;
  *(undefined4 *)((longlong)plVar9 + 0x14) = local_f0._4_4_;
  *(undefined4 *)(plVar9 + 3) = (undefined4)uStack_e8;
  *(uint *)((longlong)plVar9 + 0x1c) = uStack_e8._4_4_;
  *(undefined4 *)plVar9 = (undefined4)local_100;
  *(undefined4 *)((longlong)plVar9 + 4) = local_100._4_4_;
  *(undefined4 *)(plVar9 + 1) = (undefined4)uStack_f8;
  *(undefined4 *)((longlong)plVar9 + 0xc) = uStack_f8._4_4_;
  plVar12 = plVar9 + 2;
  LOCK();
  bVar13 = (char)plVar9[2] == '\0';
  if (bVar13) {
    *(char *)(plVar9 + 2) = '\x01';
  }
  UNLOCK();
  local_70 = plVar9;
  if (!bVar13) {
    FUN_180200390(plVar12);
  }
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    bVar3 = 0;
    cVar4 = *(char *)((longlong)plVar9 + 0x11);
  }
  else {
    bVar3 = FUN_180200a50();
    bVar3 = bVar3 ^ 1;
    cVar4 = *(char *)((longlong)plVar9 + 0x11);
  }
  if (cVar4 != '\0') {
    uStack_f8._1_7_ = (undefined7)((ulonglong)uStack_f8 >> 8);
    uStack_f8 = (code *)CONCAT71(uStack_f8._1_7_,bVar3);
    local_100 = (longlong **)plVar12;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_100,&PTR_FUN_1802667b0,
                  &DAT_180266670);
  }
  *(uint *)(plVar9 + 0xd) = (uVar6 * 2 & 4) + iVar11 + 0x110;
  plVar9[0xc] = param_4;
  if (((bVar3 == 0) && ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) != 0)) &&
     (cVar4 = FUN_180200a50(), cVar4 == '\0')) {
    *(undefined1 *)((longlong)plVar9 + 0x11) = 1;
  }
  LOCK();
  lVar10 = *plVar12;
  *(char *)plVar12 = '\0';
  UNLOCK();
  if ((char)lVar10 == '\x02') {
    WakeByAddressSingle(plVar12);
  }
  LOCK();
  lVar10 = *plVar1;
  *plVar1 = *plVar1 + 1;
  UNLOCK();
  if (*plVar1 != 0 && SCARRY8(lVar10,1) == *plVar1 < 0) {
    LOCK();
    lVar10 = *local_70;
    *local_70 = *local_70 + 1;
    UNLOCK();
    if (*local_70 != 0 && SCARRY8(lVar10,1) == *local_70 < 0) {
      uStack_e8 = (code *)CONCAT71(uStack_e8._1_7_,(char)uVar6);
      uStack_f8 = (code *)local_70;
      local_100 = (longlong **)plVar1;
      local_f0 = (longlong **)param_4;
      FUN_18018d090(plVar1 + 2);
      if (((char)plVar1[0xd] == '\0') || (lVar10 = FUN_18018d2d0(plVar1 + 2), lVar10 == 0)) {
        param_1[2] = local_f0;
        param_1[3] = uStack_e8;
        *param_1 = local_100;
        param_1[1] = uStack_f8;
        return param_1;
      }
      param_1[1] = lVar10;
      *param_1 = 0;
      FUN_18018f0a0(&local_100);
      return param_1;
    }
  }
LAB_18018eaac:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


