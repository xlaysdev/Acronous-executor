/* FUN_180137d70 @ 180137d70 */

void FUN_180137d70(uint *param_1,uint param_2,uint param_3,byte param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint *local_c8;
  code *local_c0;
  uint **local_b8;
  undefined1 *local_b0;
  byte *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined ***local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined *local_78;
  uint **local_70;
  undefined **local_68;
  undefined *local_60;
  uint *local_58;
  uint *local_50;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  byte local_31 [9];
  
  local_31[1] = 0xfe;
  local_31[2] = 0xff;
  local_31[3] = 0xff;
  local_31[4] = 0xff;
  local_31[5] = 0xff;
  local_31[6] = 0xff;
  local_31[7] = 0xff;
  local_31[8] = 0xff;
  uVar3 = *param_1;
  iVar2 = 6;
  if (3 < uVar3) {
    iVar2 = uVar3 - 4;
  }
  if (iVar2 == 6) {
    local_40 = ((uVar3 & 0xfffffffd) == 0) + 1;
  }
  else {
    local_40 = 1;
    if (iVar2 == 5) {
      local_40 = 2;
    }
  }
  if ((~param_4 & uVar3 < 4) == 0) {
    local_58 = param_1;
    local_48 = param_2;
    local_44 = param_3;
    local_31[0] = param_4;
    local_3c = param_3;
    if ((*(longlong *)PTR_DAT_1802fd448 == 0) &&
       (((uVar3 = (uint)DAT_1802fc490, uVar3 - 1 < 2 ||
         ((uVar3 != 0 && (uVar3 = FUN_1801faaf0(&PTR_DAT_1802fc480), (char)uVar3 != '\0')))) &&
        (cVar1 = FUN_1801601d0(PTR_DAT_1802fc480,uVar3), cVar1 != '\0')))) {
      local_80 = PTR_DAT_1802fc480 + 0x30;
      local_c8 = &local_48;
      local_c0 = FUN_180139190;
      local_b8 = &local_58;
      local_b0 = &LAB_180139000;
      local_a8 = local_31;
      local_a0 = &DAT_180039950;
      local_78 = &DAT_18024d2a0;
      local_70 = &local_c8;
      local_68 = &local_78;
      local_60 = &DAT_18024c458;
      local_98 = 1;
      local_88 = 1;
      local_90 = &local_68;
      FUN_180160ae0(PTR_DAT_1802fc480,&local_98);
      param_2 = local_48;
      local_3c = local_44;
    }
    local_50 = param_1;
    local_38 = param_2;
    FUN_180132bb0(param_1);
    *local_50 = local_40;
    *(undefined2 *)(local_50 + 2) = 0x200;
    local_50[3] = local_38;
    local_50[4] = local_3c;
  }
  return;
}


