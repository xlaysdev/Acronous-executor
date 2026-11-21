/* FUN_1800d5430 @ 1800d5430 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * FUN_1800d5430(longlong *param_1,char *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  char *pcVar4;
  void *_Src;
  void *_Dst;
  undefined4 *puVar5;
  size_t _Size;
  ulonglong uVar6;
  bool bVar7;
  bool bVar8;
  undefined8 local_1208;
  undefined8 uStack_1200;
  uint local_11f8;
  undefined4 uStack_11f4;
  undefined4 uStack_11f0;
  undefined4 uStack_11ec;
  undefined4 local_11e8;
  undefined4 uStack_11e4;
  undefined4 uStack_11e0;
  undefined4 uStack_11dc;
  undefined4 local_11d8;
  undefined4 uStack_11d4;
  undefined4 uStack_11d0;
  undefined4 uStack_11cc;
  undefined4 local_11c8;
  undefined4 uStack_11c4;
  undefined4 uStack_11c0;
  undefined4 uStack_11bc;
  undefined8 local_11b8;
  longlong *local_11b0;
  longlong *local_11a8;
  longlong local_11a0;
  undefined1 local_2c8;
  ulonglong local_2b8;
  char *local_2b0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined2 local_29c;
  size_t local_298;
  void *local_290;
  size_t local_288;
  void *local_280;
  undefined **local_278;
  undefined1 local_270;
  undefined1 local_26f;
  longlong local_70;
  size_t local_68;
  void *local_60;
  void *local_58;
  char *local_50;
  undefined1 local_42;
  undefined1 local_41;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_50 = param_2;
  if (*param_2 == '\0') {
LAB_1800d5467:
    if ((char)param_1[7] != '\0') goto LAB_1800d54d9;
    bVar7 = false;
  }
  else {
    if (*param_2 == '\x01') {
      if (param_2[1] != '\x01') goto LAB_1800d5467;
      pcVar4 = "http";
    }
    else {
      if (*(longlong *)(*(longlong *)(param_2 + 8) + 0x10) != 5) goto LAB_1800d5467;
      pcVar4 = *(char **)(*(longlong *)(param_2 + 8) + 8);
    }
    bVar8 = (char)*(int *)((longlong)pcVar4 + 4) == 's';
    bVar7 = bVar8 && *(int *)pcVar4 == 0x70747468;
    if ((!bVar8 || *(int *)pcVar4 != 0x70747468) && ((char)param_1[7] != '\0')) {
LAB_1800d54d9:
      local_1208 = 1;
      uStack_1200 = &DAT_1802152d8;
      local_11f8 = local_11f8 & 0xffffff00;
      FUN_180027490();
      puVar5 = (undefined4 *)thunk_FUN_1801d32d0(0x18,8);
      if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201705(8,0x18);
      }
      *(ulonglong *)(puVar5 + 4) = CONCAT44(uStack_11f4,local_11f8);
      *puVar5 = (undefined4)local_1208;
      puVar5[1] = local_1208._4_4_;
      puVar5[2] = (undefined4)uStack_1200;
      puVar5[3] = uStack_1200._4_4_;
      FUN_18000adf0(param_2);
      return puVar5;
    }
  }
  _Size = *(size_t *)(param_2 + 0x20);
  if (_Size == 0) {
    uVar3 = 1;
    _Size = 0;
  }
  else {
    local_41 = 1;
    uVar3 = FUN_1801ac970(*(undefined8 *)(param_2 + 0x18));
  }
  local_41 = 1;
  _Src = (void *)FUN_18009b4c0(uVar3);
  if ((longlong)_Size < 0) {
    param_2 = (char *)0x0;
LAB_1800d5550:
    local_41 = 1;
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(param_2,_Size);
  }
  if (_Size == 0) {
    _Dst = (void *)0x1;
  }
  else {
    FUN_180027490();
    param_2 = (char *)0x1;
    _Dst = (void *)thunk_FUN_1801d32d0(_Size,1);
    if (_Dst == (void *)0x0) goto LAB_1800d5550;
  }
  memcpy(_Dst,_Src,_Size);
  local_11b0 = (longlong *)param_1[4];
  LOCK();
  lVar1 = *local_11b0;
  *local_11b0 = *local_11b0 + 1;
  UNLOCK();
  if (*local_11b0 != 0 && SCARRY8(lVar1,1) == *local_11b0 < 0) {
    local_11a8 = (longlong *)param_1[5];
    local_11a0 = param_1[6];
    LOCK();
    lVar1 = *local_11a8;
    *local_11a8 = *local_11a8 + 1;
    UNLOCK();
    if (*local_11a8 != 0 && SCARRY8(lVar1,1) == *local_11a8 < 0) {
      local_1208 = *(ulonglong *)local_50;
      uStack_1200 = *(char **)(local_50 + 8);
      local_11f8 = *(uint *)(local_50 + 0x10);
      uStack_11f4 = *(undefined4 *)(local_50 + 0x14);
      uStack_11f0 = *(undefined4 *)(local_50 + 0x18);
      uStack_11ec = *(undefined4 *)(local_50 + 0x1c);
      local_11e8 = *(undefined4 *)(local_50 + 0x20);
      uStack_11e4 = *(undefined4 *)(local_50 + 0x24);
      uStack_11e0 = *(undefined4 *)(local_50 + 0x28);
      uStack_11dc = *(undefined4 *)(local_50 + 0x2c);
      local_11d8 = *(undefined4 *)(local_50 + 0x30);
      uStack_11d4 = *(undefined4 *)(local_50 + 0x34);
      uStack_11d0 = *(undefined4 *)(local_50 + 0x38);
      uStack_11cc = *(undefined4 *)(local_50 + 0x3c);
      local_11c8 = *(undefined4 *)(local_50 + 0x40);
      uStack_11c4 = *(undefined4 *)(local_50 + 0x44);
      uStack_11c0 = *(undefined4 *)(local_50 + 0x48);
      uStack_11bc = *(undefined4 *)(local_50 + 0x4c);
      local_11b8 = *(undefined8 *)(local_50 + 0x50);
      local_2c8 = 0;
      FUN_180027490();
      local_58 = (void *)thunk_FUN_1801d32d0(0xf48,8);
      local_68 = _Size;
      local_60 = _Dst;
      if (local_58 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201705(8,0xf48);
      }
      memcpy(local_58,&local_1208,0xf48);
      local_70 = *param_1;
      bVar8 = local_70 != 1;
      if (!bVar8) {
        local_42 = 1;
        param_2 = (char *)FUN_1801010f0(param_1 + 1);
        uStack_1200 = param_2;
      }
      uVar6 = (ulonglong)!bVar8;
      local_1208 = uVar6;
      local_2a8 = FUN_180101140(param_1 + 2);
      local_29c = *(undefined2 *)((longlong)param_1 + 0x1c);
      local_280 = local_58;
      local_278 = &PTR_FUN_1802162f0;
      local_2a0 = (undefined4)param_1[3];
      local_298 = local_68;
      local_290 = local_60;
      local_288 = local_68;
      local_26f = 0;
      local_2b8 = uVar6;
      local_2b0 = param_2;
      local_270 = bVar7;
      FUN_180027490();
      puVar5 = (undefined4 *)thunk_FUN_1801d32d0(0x248,8);
      if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201705(8,0x248);
      }
      memcpy(puVar5,&local_2b8,0x248);
      return puVar5;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


