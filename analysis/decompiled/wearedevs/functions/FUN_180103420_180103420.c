/* FUN_180103420 @ 180103420 */

void FUN_180103420(char *param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  byte local_190;
  undefined1 local_18f;
  undefined6 uStack_18e;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined **local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined **local_160;
  char *pcStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined2 local_140;
  undefined4 local_13e;
  undefined2 local_13a;
  undefined1 local_138 [8];
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined2 local_e8;
  undefined **local_d8;
  char *pcStack_d0;
  undefined **local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  char *local_80;
  undefined7 local_78;
  undefined1 uStack_71;
  undefined7 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined2 local_5c;
  uint local_58;
  undefined2 local_54;
  undefined1 local_51;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  if ((*param_1 == '\0') && (*(longlong *)(param_1 + 0x20) != 0)) {
LAB_18010348f:
    local_a8 = 0;
    uStack_a0 = 0;
    local_54 = 0xffff;
    local_b8 = 1;
    uStack_b0 = 0;
    local_c8 = &PTR_LAB_1802399e8;
    uStack_c0 = 1;
    local_d8 = &PTR_LAB_1802399e8;
    pcStack_d0 = "/";
    local_58 = 0;
  }
  else {
    if (*(ulonglong *)(param_1 + 0x40) < 2) {
      pcVar2 = "/";
      if (*(ulonglong *)(param_1 + 0x40) != 0) {
        pcVar2 = *(char **)(param_1 + 0x38);
      }
      if (*pcVar2 == '/') goto LAB_18010348f;
    }
    local_68 = 0;
    local_51 = 1;
    (*(code *)**(undefined8 **)(param_1 + 0x30))(local_138,param_1 + 0x48);
    uVar1 = local_128;
    local_e8 = *(undefined2 *)(param_1 + 0x50);
    local_138[0] = 3;
    local_128 = 0;
    uStack_100 = uStack_130;
    local_f8 = uVar1;
    local_f0 = local_120;
    local_88 = uVar1;
    local_90 = uStack_130;
    local_98 = local_120;
    local_51 = 0;
    FUN_1801ab8a0(&local_190,local_138);
    if (local_190 == 3) {
      local_138[0] = local_18f;
      local_88 = uVar1;
      local_90 = uStack_130;
      local_98 = local_120;
      local_51 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_180201bc0("path is valid uri",0x11,local_138,&DAT_18023b1b8,
                    &PTR_s_C__Users_burne__cargo_registry_s_180239af0);
    }
    local_58 = (uint)local_190;
    local_78 = CONCAT61(uStack_18e,local_18f);
    uStack_70 = uStack_187;
    uStack_71 = uStack_188;
    local_c8 = local_180;
    uStack_c0 = uStack_178;
    local_a8 = local_170;
    uStack_a0 = uStack_168;
    local_d8 = local_160;
    pcStack_d0 = pcStack_158;
    local_b8 = local_150;
    uStack_b0 = uStack_148;
    local_54 = local_140;
    local_60 = local_13e;
    local_5c = local_13a;
  }
  local_80 = param_1;
  FUN_18000adf0(param_1);
  *local_80 = (char)local_58;
  *(ulonglong *)(local_80 + 1) = CONCAT17(uStack_71,local_78);
  *(ulonglong *)(local_80 + 8) = CONCAT71(uStack_70,uStack_71);
  *(undefined ***)(local_80 + 0x10) = local_c8;
  *(undefined8 *)(local_80 + 0x18) = uStack_c0;
  *(undefined8 *)(local_80 + 0x20) = local_a8;
  *(undefined8 *)(local_80 + 0x28) = uStack_a0;
  *(undefined ***)(local_80 + 0x30) = local_d8;
  *(char **)(local_80 + 0x38) = pcStack_d0;
  *(undefined8 *)(local_80 + 0x40) = local_b8;
  *(undefined8 *)(local_80 + 0x48) = uStack_b0;
  *(undefined2 *)(local_80 + 0x50) = local_54;
  *(undefined4 *)(local_80 + 0x52) = local_60;
  *(undefined2 *)(local_80 + 0x56) = local_5c;
  return;
}


