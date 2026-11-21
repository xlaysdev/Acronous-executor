/* FUN_1800ab020 @ 1800ab020 */

undefined4 *
FUN_1800ab020(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined4 *puVar4;
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
  undefined8 *local_30;
  undefined8 local_20;
  
  local_30 = &uStack_f8;
  local_20 = 0xfffffffffffffffe;
  plVar2 = *(longlong **)(param_4 + 0x210);
  local_90 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    lVar1 = *plVar2;
    *plVar2 = *plVar2 + 1;
    UNLOCK();
    if (*plVar2 == 0 || SCARRY8(lVar1,1) != *plVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    local_90 = *(undefined4 *)(param_4 + 0x210);
    uStack_8c = *(undefined4 *)(param_4 + 0x214);
    uStack_88 = *(undefined4 *)(param_4 + 0x218);
    uStack_84 = *(undefined4 *)(param_4 + 0x21c);
  }
  uStack_f8 = 0;
  local_f0 = &PTR_FUN_1802072e8;
  uStack_e8 = 0;
  uStack_d8 = param_5;
  local_d0 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_e0 = param_4;
  uStack_c8 = param_2;
  local_c0 = param_3;
  FUN_180027490();
  puVar4 = (undefined4 *)thunk_FUN_1801d32d0(0x80,0x80);
  if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(0x80,0x80);
  }
  *(ulonglong *)(puVar4 + 0x1c) = CONCAT44(uStack_8c,local_90);
  *(ulonglong *)(puVar4 + 0x1e) = CONCAT44(uStack_84,uStack_88);
  *(undefined8 *)(puVar4 + 0x18) = local_a0;
  *(undefined8 *)(puVar4 + 0x1a) = uStack_98;
  *(undefined8 *)(puVar4 + 0x14) = local_b0;
  *(undefined8 *)(puVar4 + 0x16) = uStack_a8;
  *(undefined8 *)(puVar4 + 0x10) = local_c0;
  *(undefined8 *)(puVar4 + 0x12) = uStack_b8;
  puVar4[0xc] = local_d0;
  puVar4[0xd] = uStack_cc;
  puVar4[0xe] = (undefined4)uStack_c8;
  puVar4[0xf] = uStack_c8._4_4_;
  puVar4[8] = (undefined4)local_e0;
  puVar4[9] = local_e0._4_4_;
  puVar4[10] = (undefined4)uStack_d8;
  puVar4[0xb] = uStack_d8._4_4_;
  puVar4[4] = (undefined4)local_f0;
  puVar4[5] = local_f0._4_4_;
  puVar4[6] = (undefined4)uStack_e8;
  puVar4[7] = uStack_e8._4_4_;
  *puVar4 = 0xcc;
  puVar4[1] = 0;
  puVar4[2] = (undefined4)uStack_f8;
  puVar4[3] = uStack_f8._4_4_;
  FUN_1800aacb0(param_1,puVar4,puVar4);
  return puVar4;
}


