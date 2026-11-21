/* FUN_18008fb90 @ 18008fb90 */

undefined8 *
FUN_18008fb90(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  uint uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint local_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  longlong local_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 local_60;
  undefined7 uStack_5f;
  longlong *local_58;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_48 = param_4;
  local_40 = param_2;
  local_38 = param_3;
  local_30 = param_4;
  FUN_1800a4f60(&local_b0,1);
  uVar6 = local_a0;
  uVar5 = uStack_a8;
  uVar3 = local_b0;
  uVar4 = CONCAT44(uStack_94,uStack_98);
  local_b0 = (longlong *)0x1;
  uStack_a8 = 1;
  local_a0 = 0;
  uStack_98 = uStack_98 & 0xffffff00;
  local_90 = 0;
  local_80 = local_80 & 0xffffff00;
  uStack_78 = 0;
  uStack_68 = 0;
  local_60 = 0;
  FUN_180027490();
  plVar7 = (longlong *)thunk_FUN_1801d32d0(0x58,8);
  if (plVar7 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x58);
  }
  plVar7[10] = CONCAT71(uStack_5f,local_60);
  plVar7[8] = local_70;
  plVar7[9] = CONCAT71(uStack_67,uStack_68);
  *(uint *)(plVar7 + 6) = local_80;
  *(undefined4 *)((longlong)plVar7 + 0x34) = uStack_7c;
  *(undefined4 *)(plVar7 + 7) = (undefined4)uStack_78;
  *(undefined4 *)((longlong)plVar7 + 0x3c) = uStack_78._4_4_;
  *(undefined4 *)(plVar7 + 4) = (undefined4)local_90;
  *(undefined4 *)((longlong)plVar7 + 0x24) = local_90._4_4_;
  *(undefined4 *)(plVar7 + 5) = uStack_88;
  *(undefined4 *)((longlong)plVar7 + 0x2c) = uStack_84;
  *(undefined4 *)(plVar7 + 2) = (undefined4)local_a0;
  *(undefined4 *)((longlong)plVar7 + 0x14) = local_a0._4_4_;
  *(uint *)(plVar7 + 3) = uStack_98;
  *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_94;
  *(undefined4 *)plVar7 = (undefined4)local_b0;
  *(undefined4 *)((longlong)plVar7 + 4) = local_b0._4_4_;
  *(undefined4 *)(plVar7 + 1) = (undefined4)uStack_a8;
  *(undefined4 *)((longlong)plVar7 + 0xc) = uStack_a8._4_4_;
  LOCK();
  lVar1 = *plVar7;
  *plVar7 = *plVar7 + 1;
  UNLOCK();
  if (*plVar7 != 0 && SCARRY8(lVar1,1) == *plVar7 < 0) {
    local_b0 = plVar7;
    local_58 = plVar7;
    FUN_180027490();
    plVar8 = (longlong *)thunk_FUN_1801d32d0(0x30,8);
    if (plVar8 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x30);
    }
    *plVar8 = 1;
    plVar8[1] = 1;
    plVar8[2] = 0;
    plVar8[4] = 0;
    *(undefined1 *)(plVar8 + 5) = 0;
    LOCK();
    lVar1 = *plVar8;
    *plVar8 = *plVar8 + 1;
    UNLOCK();
    if (*plVar8 != 0 && SCARRY8(lVar1,1) == *plVar8 < 0) {
      param_1[0xb] = uVar6;
      param_1[9] = uVar3;
      param_1[10] = uVar5;
      uVar3 = local_38[1];
      param_1[4] = *local_38;
      param_1[5] = uVar3;
      uVar3 = local_40[1];
      param_1[0xc] = *local_40;
      param_1[0xd] = uVar3;
      param_1[0xe] = local_40[2];
      *param_1 = &PTR_LAB_18020de18;
      param_1[1] = 1;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[6] = local_30;
      param_1[7] = plVar7;
      param_1[8] = plVar8;
      param_1[0xf] = plVar8;
      param_1[0x10] = uVar4;
      param_1[0x11] = plVar7;
      return param_1;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


