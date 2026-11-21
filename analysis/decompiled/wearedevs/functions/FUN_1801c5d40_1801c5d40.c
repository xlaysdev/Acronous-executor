/* FUN_1801c5d40 @ 1801c5d40 */

longlong * FUN_1801c5d40(undefined8 param_1,char *param_2,undefined8 param_3,longlong *param_4)

{
  void *_Src;
  HANDLE _Size;
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong *local_f8;
  longlong *local_f0;
  HANDLE local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  byte local_d0;
  longlong *local_c8;
  longlong *plStack_c0;
  HANDLE local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  HANDLE local_60;
  void *local_58;
  HANDLE pvStack_50;
  char *local_48;
  undefined1 local_3a;
  undefined1 local_39;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_48 = param_2;
  if (SBORROW8(0,*(longlong *)(param_2 + 0x10))) {
    local_d0 = 0;
    local_60 = (HANDLE)0x8000000000000000;
    plVar1 = (longlong *)0x0;
  }
  else {
    _Src = *(void **)(param_2 + 0x18);
    _Size = *(HANDLE *)(param_2 + 0x20);
    local_c8 = (longlong *)0x0;
    local_b8 = (HANDLE)0x8000000000000000;
    uStack_a0 = uStack_a0 & 0xffffff00;
    if ((longlong)_Size < 0) {
      uVar3 = 0;
LAB_1801c5daf:
      local_3a = 1;
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(uVar3,_Size);
    }
    if (_Size == (HANDLE)0x0) {
      local_58 = (void *)0x1;
    }
    else {
      FUN_180027490();
      uVar3 = 1;
      local_58 = (void *)thunk_FUN_1801d32d0(_Size,1);
      if (local_58 == (void *)0x0) goto LAB_1801c5daf;
    }
    memcpy(local_58,_Src,(size_t)_Size);
    local_3a = 0;
    local_60 = _Size;
    pvStack_50 = _Size;
    FUN_1801dff30(&local_f8,&local_c8,&local_60);
    local_108 = local_e0;
    uStack_100 = uStack_d8;
    local_60 = local_e8;
    plVar1 = local_f8;
    param_4 = local_f0;
  }
  if (*local_48 != '\0') {
    param_4 = *(longlong **)(local_48 + 8);
  }
  plVar2 = (longlong *)0x1;
  if (*local_48 == '\0') {
    plVar2 = plVar1;
  }
  local_68 = *(undefined8 *)(local_48 + 0x60);
  local_78 = *(undefined8 *)(local_48 + 0x50);
  uStack_70 = *(undefined8 *)(local_48 + 0x58);
  local_88 = *(undefined8 *)(local_48 + 0x40);
  uStack_80 = *(undefined8 *)(local_48 + 0x48);
  local_c8 = *(longlong **)local_48;
  plStack_c0 = *(longlong **)(local_48 + 8);
  local_b8 = *(HANDLE *)(local_48 + 0x10);
  uStack_b0 = *(undefined4 *)(local_48 + 0x18);
  uStack_ac = *(undefined4 *)(local_48 + 0x1c);
  local_a8 = *(undefined4 *)(local_48 + 0x20);
  uStack_a4 = *(undefined4 *)(local_48 + 0x24);
  uStack_a0 = *(uint *)(local_48 + 0x28);
  uStack_9c = *(undefined4 *)(local_48 + 0x2c);
  local_98 = *(undefined4 *)(local_48 + 0x30);
  uStack_94 = *(undefined4 *)(local_48 + 0x34);
  uStack_90 = *(undefined4 *)(local_48 + 0x38);
  uStack_8c = *(undefined4 *)(local_48 + 0x3c);
  local_58 = (void *)local_108;
  pvStack_50 = (HANDLE)uStack_100;
  local_39 = 0;
  FUN_1801c7720(&local_f8,&local_60,plVar2,param_4,local_d0 & 1,0,&local_c8);
  if (local_f8 != (longlong *)0x0) {
    local_c8 = local_f8;
    plStack_c0 = local_f0;
    local_b8 = local_e8;
    CloseHandle(local_e8);
    LOCK();
    *local_f8 = *local_f8 + -1;
    UNLOCK();
    if (*local_f8 == 0) {
      FUN_1801e3970(&local_c8);
    }
    LOCK();
    *plStack_c0 = *plStack_c0 + -1;
    UNLOCK();
    if (*plStack_c0 == 0) {
      local_39 = 0;
      FUN_1801e3850(&plStack_c0);
    }
    local_f0 = (longlong *)0x0;
  }
  return local_f0;
}


