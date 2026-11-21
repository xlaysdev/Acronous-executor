/* FUN_180131740 @ 180131740 */

/* WARNING: Type propagation algorithm not settling */

void FUN_180131740(char *param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined8 local_98;
  undefined ***local_90;
  undefined8 local_88;
  undefined *local_80;
  ulonglong local_78;
  undefined **local_70;
  undefined *local_68;
  undefined *local_60;
  ulonglong **local_58;
  ulonglong *local_50;
  code *local_48;
  
  cVar1 = *param_1;
  cVar2 = param_1[8];
  uVar11 = 6;
  if (cVar1 == '\0') {
    uVar11 = 0;
  }
  uVar10 = uVar11 + 6;
  if (cVar2 == '\0') {
    uVar10 = uVar11;
  }
  cVar3 = param_1[0x10];
  uVar11 = uVar10 + 6;
  if (cVar3 == '\0') {
    uVar11 = uVar10;
  }
  cVar4 = param_1[0x18];
  uVar10 = uVar11 + 6;
  if (cVar4 == '\0') {
    uVar10 = uVar11;
  }
  cVar5 = param_1[0x38];
  cVar6 = param_1[0x20];
  uVar11 = uVar10 + 6;
  if (cVar6 == '\0') {
    uVar11 = uVar10;
  }
  cVar7 = param_1[0x28];
  uVar10 = uVar11 + 6;
  if (cVar7 == '\0') {
    uVar10 = uVar11;
  }
  cVar8 = param_1[0x30];
  uVar11 = uVar10 + 6;
  if (cVar8 == '\0') {
    uVar11 = uVar10;
  }
  local_78 = uVar11;
  if ((*(longlong *)PTR_DAT_1802fd448 == 0) &&
     ((uVar12 = (uint)DAT_1802fbc88, uVar12 - 1 < 2 ||
      ((uVar12 != 0 && (uVar12 = FUN_1801faaf0(&PTR_DAT_1802fbc78), (char)uVar12 != '\0')))))) {
    cVar9 = FUN_1801601d0(PTR_DAT_1802fbc78,uVar12);
    if (cVar9 != '\0') {
      local_80 = PTR_DAT_1802fbc78 + 0x30;
      local_50 = &local_78;
      local_48 = FUN_1801ee720;
      local_60 = &DAT_180247a68;
      local_58 = &local_50;
      local_70 = &local_60;
      local_68 = &DAT_180247960;
      local_98 = 1;
      local_90 = &local_70;
      local_88 = 1;
      FUN_180160ae0(PTR_DAT_1802fbc78,&local_98);
      uVar11 = local_78;
    }
  }
  local_98 = uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 |
             (uVar11 & 0xff0000000000) >> 0x18 | (uVar11 & 0xff00000000) >> 8 |
             (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18 | (uVar11 & 0xff00) << 0x28 |
             uVar11 << 0x38;
  FUN_1801b2af0(param_2,(longlong)&local_98 + 5,3);
  local_98._0_1_ = 4;
  FUN_1801b2af0(param_2,&local_98,1);
  local_98 = CONCAT71(local_98._1_7_,cVar5);
  FUN_1801b2af0(param_2,&local_98,1);
  local_98 = local_98 & 0xffffffff00000000;
  FUN_1801b2af0(param_2,&local_98,4);
  local_98 = param_2;
  if (cVar1 != '\0') {
    FUN_180131a30(&local_98,0,*(undefined4 *)(param_1 + 4));
  }
  if (cVar2 != '\0') {
    FUN_180131a30(&local_98,1,*(undefined4 *)(param_1 + 0xc));
  }
  if (cVar3 != '\0') {
    FUN_180131a30(&local_98,2,*(undefined4 *)(param_1 + 0x14));
  }
  if (cVar4 != '\0') {
    FUN_180131a30(&local_98,3,*(undefined4 *)(param_1 + 0x1c));
  }
  if (cVar6 != '\0') {
    FUN_180131a30(&local_98,4,*(undefined4 *)(param_1 + 0x24));
  }
  if (cVar7 != '\0') {
    FUN_180131a30(&local_98,5,*(undefined4 *)(param_1 + 0x2c));
  }
  if (cVar8 != '\0') {
    FUN_180131a30(&local_98,6,*(undefined4 *)(param_1 + 0x34));
  }
  return;
}


