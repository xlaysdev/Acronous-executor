/* FUN_180092cd0 @ 180092cd0 */

/* WARNING: Instruction at (ram,0x000180092d76) overlaps instruction at (ram,0x000180092d75)
    */
/* WARNING: Control flow encountered bad instruction data */

void FUN_180092cd0(longlong param_1)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  undefined ***pppuVar4;
  undefined **local_a8;
  undefined **local_a0;
  undefined8 local_98;
  undefined *local_88;
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58 [2];
  longlong local_48;
  undefined4 *local_38;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_180177cc0();
  uVar3 = (longlong)&switchD_180092d02::switchdataD_18020f09c +
          (longlong)(int)(&switchD_180092d02::switchdataD_18020f09c)[bVar1];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    local_88 = PTR_PTR_1802fd4f0;
    local_38 = (undefined4 *)(param_1 + 0x20);
    local_a8 = &local_88;
    local_98 = 0;
    pppuVar4 = &local_a8;
    local_a0 = local_a8;
    local_80 = param_1;
    local_48 = param_1;
    bVar1 = FUN_18003e500();
    if ((bVar1 & 1) == 0) {
      uStack_70 = 0;
      local_68 = 0;
      local_78 = 1;
      local_29 = 1;
      uStack_60 = pppuVar4;
      local_58[0] = FUN_18016c5d0(*(undefined8 *)(local_48 + 0x28));
      local_38 = (undefined4 *)(local_48 + 0x30);
      FUN_18003ad30();
      local_38[4] = (undefined4)local_68;
      local_38[5] = local_68._4_4_;
      local_38[6] = (undefined4)uStack_60;
      local_38[7] = uStack_60._4_4_;
      *local_38 = local_78;
      local_38[1] = uStack_74;
      local_38[2] = (undefined4)uStack_70;
      local_38[3] = uStack_70._4_4_;
      local_29 = 0;
      FUN_1801783b0(local_58);
      param_1 = local_48;
      goto LAB_180092e2f;
    }
    bVar1 = FUN_180177bb0(local_48);
    uVar3 = (ulonglong)bVar1;
  case 5:
                    /* WARNING: Could not recover jumptable at 0x000180092d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((longlong)&UINT_18020f0ac + (longlong)(int)(&UINT_18020f0ac)[uVar3]))();
    return;
  case 1:
    FUN_1800931c0(param_1 + 0x20);
LAB_180092e2f:
    FUN_1800936b0(param_1);
    return;
  case 3:
switchD_180092d02_caseD_3:
    FUN_180091d00(param_1);
    break;
  case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 6:
    cVar2 = FUN_180177f20(CONCAT71(0x18020f0,DAT_171927575 & 0x9c));
    if (cVar2 != '\0') goto switchD_180092d02_caseD_3;
    break;
  case 7:
    goto switchD_180092d02_caseD_7;
  }
switchD_180092d02_caseD_7:
  return;
}


