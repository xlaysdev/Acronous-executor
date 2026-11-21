/* FUN_180122cc0 @ 180122cc0 */

undefined8 *
FUN_180122cc0(undefined8 *param_1,longlong param_2,int *param_3,longlong *param_4,longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  code *pcVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint6 uStack_146;
  longlong lStack_130;
  undefined4 uStack_124;
  undefined4 uStack_114;
  undefined4 uStack_104;
  uint7 uStack_e7;
  undefined8 local_e0;
  int iStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  int iStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  longlong *local_a0;
  longlong lStack_98;
  undefined1 local_90;
  undefined7 uStack_8f;
  int local_58;
  
  if (*param_3 == 1) {
    local_58 = param_3[1];
    if (param_4 == (longlong *)0x0) {
      lVar6 = param_2;
      lVar2 = FUN_1801df8c0();
      uVar4 = (undefined4)lVar6;
    }
    else {
      pcVar5 = *(code **)(param_5 + 0x28);
      lVar2 = (*pcVar5)((longlong)param_4 +
                        (*(longlong *)(param_5 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
      uVar4 = SUB84(pcVar5,0);
    }
    uVar8 = 100000000;
    lVar6 = 1;
    iStack_d8 = param_3[8];
    uVar7 = uVar4;
    if (iStack_d8 != 1000000000) goto LAB_180122da1;
LAB_180122e9d:
    iStack_d8 = 1000000000;
    uVar4 = 1000000000;
  }
  else {
    if (param_4 == (longlong *)0x0) {
      lVar6 = param_2;
      lVar2 = FUN_1801df8c0();
      uVar4 = (undefined4)lVar6;
    }
    else {
      pcVar5 = *(code **)(param_5 + 0x28);
      lVar2 = (*pcVar5)((longlong)param_4 +
                        (*(longlong *)(param_5 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
      uVar4 = SUB84(pcVar5,0);
    }
    uVar7 = 1000000000;
    lVar6 = 0;
    uVar8 = 1000000000;
    iStack_d8 = param_3[8];
    if (iStack_d8 == 1000000000) goto LAB_180122e9d;
LAB_180122da1:
    if (param_4 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0("You must supply a timer.C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\hyper-1.11.0\\src\\common\\time.rs"
                    ,0x31,&DAT_180242ab8);
    }
    local_e0 = *(undefined8 *)(param_3 + 6);
    local_d0 = *(undefined8 *)(param_3 + 2);
    iStack_c8 = param_3[4];
    local_90 = (undefined1)param_3[10];
    uStack_a8 = local_e0;
    local_b0 = (**(code **)(param_5 + 0x18))
                         ((longlong)param_4 +
                          (*(longlong *)(param_5 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,local_e0,
                          iStack_d8);
    LOCK();
    lVar1 = *param_4;
    *param_4 = *param_4 + 1;
    UNLOCK();
    if (*param_4 == 0 || SCARRY8(lVar1,1) != *param_4 < 0) goto LAB_18012300e;
    uStack_b8 = 1000000000;
    lStack_98 = param_5;
    local_a0 = param_4;
  }
  FUN_180027490();
  plVar3 = (longlong *)thunk_FUN_1801d32d0(0x78,8);
  if (plVar3 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x78);
  }
  plVar3[0xe] = (ulonglong)uStack_e7 << 8;
  plVar3[0xc] = (longlong)param_4;
  plVar3[0xd] = param_5;
  plVar3[10] = CONCAT44(uStack_104,uVar4);
  plVar3[0xb] = param_2;
  plVar3[8] = CONCAT44(uStack_114,uVar7);
  plVar3[9] = lVar2;
  plVar3[6] = CONCAT44(uStack_124,1000000000);
  plVar3[7] = lVar2;
  plVar3[4] = 0;
  plVar3[5] = lStack_130;
  plVar3[2] = (ulonglong)uStack_146 << 0x10;
  plVar3[3] = lVar6;
  *plVar3 = 1;
  plVar3[1] = 1;
  LOCK();
  lVar6 = *plVar3;
  *plVar3 = *plVar3 + 1;
  UNLOCK();
  if (*plVar3 != 0 && SCARRY8(lVar6,1) == *plVar3 < 0) {
    param_1[0x10] = CONCAT71(uStack_8f,local_90);
    param_1[0xe] = local_a0;
    param_1[0xf] = lStack_98;
    param_1[0xc] = local_b0;
    param_1[0xd] = uStack_a8;
    param_1[10] = local_c0;
    param_1[0xb] = CONCAT44(uStack_b4,uStack_b8);
    param_1[8] = local_d0;
    param_1[9] = CONCAT44(uStack_c4,iStack_c8);
    param_1[6] = local_e0;
    param_1[7] = CONCAT44(uStack_d4,iStack_d8);
    *param_1 = plVar3;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = uVar8;
    param_1[3] = 0;
    param_1[4] = 0;
    *(int *)(param_1 + 5) = local_58;
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    param_1[0x11] = plVar3;
    return param_1;
  }
LAB_18012300e:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}


