/* FUN_180132160 @ 180132160 */

void FUN_180132160(longlong param_1,int param_2,ulonglong param_3)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint local_c8;
  uint local_c4;
  ulonglong local_c0;
  undefined **local_b8;
  undefined *local_b0;
  undefined *local_a8;
  uint **local_a0;
  undefined8 local_98;
  undefined ***local_90;
  undefined8 local_88;
  undefined *local_80;
  uint *local_78;
  undefined1 *local_70;
  longlong local_68;
  code *local_60;
  longlong local_58;
  code *local_50;
  ulonglong *local_48;
  code *local_40;
  uint *local_38;
  code *local_30;
  
  uVar5 = *(uint *)(param_1 + 0x8c);
  uVar2 = 0;
  if (0 < (int)uVar5) {
    uVar2 = (ulonglong)uVar5;
  }
  uVar4 = *(ulonglong *)(param_1 + 0x90);
  if (param_3 < uVar2) {
    uVar2 = param_3;
  }
  uVar6 = 0;
  if (uVar4 <= uVar2) {
    uVar6 = (int)uVar2 - (int)uVar4;
  }
  if (!SCARRY4(param_2,uVar5)) {
    *(uint *)(param_1 + 0x8c) = param_2 + uVar5;
    uVar5 = param_2 + uVar5;
  }
  local_c8 = uVar6;
  local_c0 = param_3;
  if ((*(longlong *)PTR_DAT_1802fd448 == 0) &&
     ((uVar3 = (uint)DAT_1802fbef8, uVar3 - 1 < 2 ||
      ((uVar3 != 0 && (uVar3 = FUN_1801faaf0(&PTR_DAT_1802fbee8), (char)uVar3 != '\0')))))) {
    cVar1 = FUN_1801601d0(PTR_DAT_1802fbee8,uVar3);
    if (cVar1 == '\0') {
    }
    else {
      local_68 = param_1 + 0x90;
      local_80 = PTR_DAT_1802fbee8 + 0x30;
      local_58 = param_1 + 300;
      local_78 = &local_c4;
      local_70 = &LAB_1801338c0;
      local_60 = FUN_1801ee720;
      local_50 = FUN_1801330a0;
      local_48 = &local_c0;
      local_40 = FUN_1801ee720;
      local_38 = &local_c8;
      local_30 = FUN_1801ee6c0;
      local_a8 = &DAT_180249528;
      local_a0 = &local_78;
      local_b8 = &local_a8;
      local_b0 = &DAT_180247960;
      local_98 = 1;
      local_90 = &local_b8;
      local_88 = 1;
      local_c4 = uVar5;
      FUN_180160ae0(PTR_DAT_1802fbee8,&local_98);
      uVar5 = *(uint *)(param_1 + 0x8c);
      uVar4 = *(ulonglong *)(param_1 + 0x90);
      param_3 = local_c0;
      uVar6 = local_c8;
    }
  }
  uVar2 = (ulonglong)uVar5;
  if ((int)uVar5 < 1) {
    uVar2 = 0;
  }
  if (param_3 < uVar2) {
    uVar2 = param_3;
  }
  uVar5 = 0;
  if (uVar4 <= uVar2) {
    uVar5 = (int)uVar2 - (int)uVar4;
  }
  if (uVar6 < uVar5) {
    FUN_180132360(param_1);
  }
  return;
}


