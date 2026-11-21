/* FUN_180171f10 @ 180171f10 */

undefined8 * FUN_180171f10(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  longlong *plStack_70;
  undefined1 local_68;
  undefined7 uStack_67;
  longlong *local_58;
  longlong local_50;
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  plVar6 = param_2;
  uVar4 = FUN_18018ca00();
  if ((uVar4 & 1) != 0) {
    param_1[1] = plVar6;
    *param_1 = 0x8000000000000000;
    return param_1;
  }
  plVar1 = (longlong *)plVar6[2];
  LOCK();
  lVar5 = *plVar1;
  *plVar1 = *plVar1 + 1;
  UNLOCK();
  local_40 = plVar6;
  if (*plVar1 != 0 && SCARRY8(lVar5,1) == *plVar1 < 0) {
    lVar2 = plVar6[2];
    local_48 = 0;
    LOCK();
    lVar5 = *plVar6;
    *plVar6 = *plVar6 + 1;
    UNLOCK();
    local_50 = lVar2;
    if (*plVar6 != 0 && SCARRY8(lVar5,1) == *plVar6 < 0) {
      local_29 = 1;
      local_58 = plVar6;
      local_38 = plVar6;
      FUN_18018cb90(&local_c0,param_2);
      plVar6 = local_38;
      local_68 = 0;
      local_98 = local_c0;
      uStack_94 = uStack_bc;
      uStack_90 = uStack_b8;
      uStack_8c = uStack_b4;
      local_88 = local_b0;
      uStack_84 = uStack_ac;
      uStack_80 = uStack_a8;
      uStack_7c = uStack_a4;
      local_78 = local_a0;
      plStack_70 = local_38;
      FUN_180027490();
      lVar5 = thunk_FUN_1801d32d0(0x80,8);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_18020171e(8,0x80);
      }
      *(undefined8 *)((longlong)param_1 + 0x79) = 0;
      *(undefined8 *)((longlong)param_1 + 0x81) = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      *param_1 = CONCAT44(uStack_94,local_98);
      param_1[1] = CONCAT44(uStack_8c,uStack_90);
      param_1[2] = CONCAT44(uStack_84,local_88);
      param_1[3] = CONCAT44(uStack_7c,uStack_80);
      param_1[4] = local_78;
      param_1[5] = plStack_70;
      param_1[6] = CONCAT71(uStack_67,local_68);
      param_1[7] = plVar6;
      param_1[8] = lVar2;
      param_1[9] = 0;
      param_1[10] = 0;
      *(undefined2 *)(param_1 + 0xb) = 0;
      param_1[0xc] = 0x10;
      param_1[0xd] = lVar5;
      return param_1;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}


