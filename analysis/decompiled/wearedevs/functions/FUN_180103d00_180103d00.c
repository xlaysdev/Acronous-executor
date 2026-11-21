/* FUN_180103d00 @ 180103d00 */

void FUN_180103d00(longlong *param_1)

{
  undefined8 uVar1;
  longlong ****pppplVar2;
  undefined8 uVar3;
  longlong ****pppplVar4;
  char cVar5;
  uint uVar6;
  undefined8 local_1b0;
  undefined1 *puStack_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  longlong local_170;
  longlong lStack_168;
  longlong local_160;
  longlong ***local_158;
  undefined *local_150;
  undefined8 local_148;
  longlong ****pppplStack_140;
  undefined8 local_138;
  longlong ****pppplStack_130;
  undefined8 local_128;
  undefined *local_120;
  undefined8 local_118;
  longlong **local_e8;
  undefined8 *puStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong *local_88;
  longlong ****local_80;
  undefined8 local_78;
  undefined *local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined1 local_51;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  if (param_1[4] == 0 || (char)*param_1 != '\0') {
    local_88 = param_1 + 6;
    if ((((1 < (ulonglong)param_1[8]) || ((param_1[8] != 0 && (*(char *)param_1[7] != '/')))) &&
        (*(ulonglong *)PTR_DAT_1802fd448 < 4)) &&
       (((uVar6 = (uint)DAT_1802fb080, uVar6 - 1 < 2 ||
         ((uVar6 != 0 && (uVar6 = FUN_1801faaf0(&PTR_DAT_1802fb070), (char)uVar6 != '\0')))) &&
        (cVar5 = FUN_1801601d0(PTR_DAT_1802fb070,uVar6), cVar5 != '\0')))) {
      pppplStack_130 = (longlong ****)(PTR_DAT_1802fb070 + 0x30);
      local_1b0 = &local_88;
      puStack_1a8 = &LAB_18010cd30;
      local_e8 = (longlong **)&DAT_180239e70;
      puStack_e0 = &local_1b0;
      local_158 = &local_e8;
      local_150 = &DAT_180239d38;
      local_148 = 1;
      local_138 = 1;
      pppplStack_140 = &local_158;
      FUN_180160ae0(PTR_DAT_1802fb070,&local_148);
    }
    if (param_1[4] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0("internal error: entered unreachable code: authority_form with relative uri",
                    0x95,&PTR_s_C__Users_burne__cargo_registry_s_180239f18);
    }
  }
  local_60 = 0;
  local_51 = 1;
  (**(code **)param_1[2])(&local_148,param_1 + 5,param_1[3]);
  pppplVar4 = pppplStack_130;
  uVar3 = local_138;
  pppplVar2 = pppplStack_140;
  uVar1 = local_148;
  local_148._0_1_ = 3;
  local_138 = uVar1;
  pppplStack_130 = pppplStack_140;
  local_128 = uVar3;
  local_120 = (undefined *)pppplVar4;
  local_118 = 0;
  local_70 = (undefined *)pppplVar4;
  local_78 = uVar3;
  local_80 = pppplStack_140;
  local_60 = uVar1;
  local_51 = 0;
  FUN_1801ab8a0(&local_1b0,&local_148);
  if ((char)local_1b0 == '\x03') {
    local_148 = CONCAT71(local_148._1_7_,local_1b0._1_1_);
    local_70 = (undefined *)pppplVar4;
    local_78 = uVar3;
    local_80 = pppplVar2;
    local_60 = uVar1;
    local_51 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("authority is valid",0x12,&local_148,&DAT_18023b1b8,
                  &PTR_s_C__Users_burne__cargo_registry_s_180239eb0);
  }
  local_98 = local_160;
  local_a8 = local_170;
  lStack_a0 = lStack_168;
  local_b8 = local_180;
  uStack_b4 = uStack_17c;
  uStack_b0 = uStack_178;
  uStack_ac = uStack_174;
  local_c8 = local_190;
  uStack_c4 = uStack_18c;
  uStack_c0 = uStack_188;
  uStack_bc = uStack_184;
  local_d8 = local_1a0;
  uStack_d4 = uStack_19c;
  uStack_d0 = uStack_198;
  uStack_cc = uStack_194;
  local_e8 = local_1b0;
  puStack_e0 = (undefined8 *)puStack_1a8;
  local_68 = param_1;
  FUN_18000adf0(param_1);
  local_68[10] = local_98;
  local_68[8] = local_a8;
  local_68[9] = lStack_a0;
  local_68[6] = CONCAT44(uStack_b4,local_b8);
  local_68[7] = CONCAT44(uStack_ac,uStack_b0);
  local_68[4] = CONCAT44(uStack_c4,local_c8);
  local_68[5] = CONCAT44(uStack_bc,uStack_c0);
  local_68[2] = CONCAT44(uStack_d4,local_d8);
  local_68[3] = CONCAT44(uStack_cc,uStack_d0);
  *local_68 = (longlong)local_e8;
  local_68[1] = (longlong)puStack_e0;
  return;
}


