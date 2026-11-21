/* FUN_18010feb0 @ 18010feb0 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_18010feb0(uint *param_1)

{
  code *pcVar1;
  byte bVar2;
  ulonglong uVar3;
  uint *puVar4;
  undefined8 uVar5;
  undefined **local_d8;
  undefined **local_d0;
  undefined8 local_c8;
  ulonglong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  uint *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  uint *local_48;
  uint *local_38;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar2 = FUN_180177cc0();
  puVar4 = &switchD_18010fee2::switchdataD_18023ea60;
  uVar3 = (longlong)&switchD_18010fee2::switchdataD_18023ea60 +
          (longlong)(int)(&switchD_18010fee2::switchdataD_18023ea60)[bVar2];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    local_90 = PTR_PTR_1802fd4f0;
    local_38 = param_1 + 8;
    local_d8 = &local_90;
    local_c8 = 0;
    local_d0 = local_d8;
    local_88 = param_1;
    local_48 = param_1;
    FUN_18010f450(&local_b8,local_38,&local_d8);
    if (local_b8 == 2) {
      uStack_98 = 0;
      uVar5 = *(undefined8 *)(local_48 + 0xc);
      uStack_78 = 1;
      local_70 = uVar5;
      uStack_68 = local_b0;
      local_a0 = local_a8;
    }
    else {
      if ((local_b8 & 1) != 0) {
        bVar2 = FUN_180177bb0(local_48);
        uVar3 = (ulonglong)bVar2;
        goto switchD_18010fee2_caseD_5;
      }
      uVar5 = *(undefined8 *)(local_48 + 0xc);
      uStack_78 = 0;
      local_70 = local_b0;
      uStack_68 = local_a8;
    }
    local_80 = 1;
    local_29 = 1;
    local_60 = local_a0;
    uStack_58 = uStack_98;
    local_50 = FUN_18016c5d0(uVar5);
    local_38 = local_48 + 0xe;
    FUN_18010f230();
    local_38[8] = (uint)local_60;
    local_38[9] = local_60._4_4_;
    local_38[10] = (uint)uStack_58;
    local_38[0xb] = uStack_58._4_4_;
    local_38[4] = (uint)local_70;
    local_38[5] = local_70._4_4_;
    local_38[6] = (uint)uStack_68;
    local_38[7] = uStack_68._4_4_;
    *(ulonglong *)local_38 = CONCAT44(uStack_7c,local_80);
    *(undefined8 *)(local_38 + 2) = uStack_78;
    local_29 = 0;
    FUN_1801783b0(&local_50);
    puVar4 = local_48;
    break;
  case 1:
    FUN_18010f980(param_1 + 8);
    puVar4 = param_1;
    break;
  case 2:
    return;
  case 3:
    FUN_180102b60(param_1);
    return;
  case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 5:
switchD_18010fee2_caseD_5:
                    /* WARNING: Could not recover jumptable at 0x00018010ff57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((longlong)&UINT_18023ea70 + (longlong)(int)(&UINT_18023ea70)[uVar3]))();
    return;
  case 6:
    pcVar1 = (code *)swi(1);
    (*pcVar1)();
    return;
  }
  FUN_1801102e0(puVar4);
  return;
}


