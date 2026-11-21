/* FUN_1800ab200 @ 1800ab200 */

undefined4 *
FUN_1800ab200(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 *local_38;
  undefined8 local_28;
  
  local_38 = &uStack_f8;
  local_28 = 0xfffffffffffffffe;
  plVar2 = (longlong *)*param_1;
  LOCK();
  lVar1 = *plVar2;
  *plVar2 = *plVar2 + 1;
  UNLOCK();
  if (*plVar2 == 0 || SCARRY8(lVar1,1) != *plVar2 < 0) {
LAB_1800ab3ac:
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  plVar3 = (longlong *)plVar2[0x43];
  local_90 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    lVar1 = *plVar3;
    *plVar3 = *plVar3 + 1;
    UNLOCK();
    if (*plVar3 == 0 || SCARRY8(lVar1,1) != *plVar3 < 0) goto LAB_1800ab3ac;
    local_90 = (undefined4)plVar2[0x43];
    uStack_8c = *(undefined4 *)((longlong)plVar2 + 0x21c);
    uStack_88 = (undefined4)plVar2[0x44];
    uStack_84 = *(undefined4 *)((longlong)plVar2 + 0x224);
  }
  local_100 = 0xcc;
  uStack_f8 = 0;
  local_f0 = &PTR_FUN_180207338;
  uStack_e8 = 0;
  local_d0 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_e0 = plVar2;
  uStack_d8 = param_4;
  uStack_c8 = param_2;
  local_c0 = param_3;
  FUN_180027490();
  puVar5 = (undefined4 *)thunk_FUN_1801d32d0(0x80,0x80);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(0x80,0x80);
  }
  *(ulonglong *)(puVar5 + 0x1c) = CONCAT44(uStack_8c,local_90);
  *(ulonglong *)(puVar5 + 0x1e) = CONCAT44(uStack_84,uStack_88);
  *(undefined8 *)(puVar5 + 0x18) = local_a0;
  *(undefined8 *)(puVar5 + 0x1a) = uStack_98;
  *(undefined8 *)(puVar5 + 0x14) = local_b0;
  *(undefined8 *)(puVar5 + 0x16) = uStack_a8;
  *(undefined8 *)(puVar5 + 0x10) = local_c0;
  *(undefined8 *)(puVar5 + 0x12) = uStack_b8;
  puVar5[0xc] = local_d0;
  puVar5[0xd] = uStack_cc;
  puVar5[0xe] = (undefined4)uStack_c8;
  puVar5[0xf] = uStack_c8._4_4_;
  puVar5[8] = (undefined4)local_e0;
  puVar5[9] = local_e0._4_4_;
  puVar5[10] = (undefined4)uStack_d8;
  puVar5[0xb] = uStack_d8._4_4_;
  puVar5[4] = (undefined4)local_f0;
  puVar5[5] = local_f0._4_4_;
  puVar5[6] = (undefined4)uStack_e8;
  puVar5[7] = uStack_e8._4_4_;
  *puVar5 = (undefined4)local_100;
  puVar5[1] = local_100._4_4_;
  puVar5[2] = (undefined4)uStack_f8;
  puVar5[3] = uStack_f8._4_4_;
  uVar6 = FUN_1800aacb0(plVar2 + 0x15,puVar5,puVar5);
  local_100 = param_4;
  FUN_180181e80(plVar2 + 0x41,&local_100);
  FUN_180173f40(plVar2 + 2,uVar6);
  return puVar5;
}


