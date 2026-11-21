/* FUN_18010cb70 @ 18010cb70 */

longlong * FUN_18010cb70(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong *local_68;
  longlong local_60;
  longlong *plStack_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  puVar5 = param_2;
  lVar2 = FUN_18010c940(param_2);
  local_68 = param_1;
  if (lVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
  }
  else {
    FUN_180027490();
    lVar6 = 8;
    plVar3 = (longlong *)thunk_FUN_1801d32d0(0x40);
    if (plVar3 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(8,0x40);
    }
    *plVar3 = lVar2;
    plVar3[1] = (longlong)puVar5;
    local_60 = 4;
    local_50 = 1;
    local_78 = *(undefined8 *)(param_2 + 0x10);
    local_b8 = *param_2;
    uStack_b4 = param_2[1];
    uStack_b0 = param_2[2];
    uStack_ac = param_2[3];
    local_a8 = *(undefined8 *)(param_2 + 4);
    uStack_a0 = *(undefined8 *)(param_2 + 6);
    local_98 = *(undefined8 *)(param_2 + 8);
    uStack_90 = *(undefined8 *)(param_2 + 10);
    local_88 = *(undefined8 *)(param_2 + 0xc);
    uStack_80 = *(undefined8 *)(param_2 + 0xe);
    lVar2 = 0x18;
    plStack_58 = plVar3;
    while( true ) {
      lVar1 = local_50;
      lVar4 = FUN_18010c940(&local_b8);
      if (lVar4 == 0) break;
      lVar7 = lVar6;
      if (lVar1 == local_60) {
        lVar7 = lVar1;
        FUN_1801f6a80(&local_60,lVar1,1,8,0x10);
        plVar3 = plStack_58;
      }
      *(longlong *)((longlong)plVar3 + lVar2 + -8) = lVar4;
      *(longlong *)((longlong)plVar3 + lVar2) = lVar6;
      local_50 = lVar1 + 1;
      lVar2 = lVar2 + 0x10;
      lVar6 = lVar7;
    }
    local_68[2] = local_50;
    *local_68 = local_60;
    local_68[1] = (longlong)plStack_58;
  }
  return local_68;
}


