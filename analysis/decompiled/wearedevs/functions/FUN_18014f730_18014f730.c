/* FUN_18014f730 @ 18014f730 */

void FUN_18014f730(undefined2 *param_1,undefined8 param_2,undefined4 *param_3,undefined1 param_4)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  undefined1 local_79;
  undefined **local_78;
  undefined *local_70;
  undefined *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined ***local_30;
  undefined8 local_28;
  undefined *local_20;
  
  if ((*(ulonglong *)PTR_DAT_1802fd448 < 2) &&
     (((uVar3 = (uint)DAT_1802fced8, local_79 = param_4, uVar3 - 1 < 2 ||
       ((uVar3 != 0 && (uVar3 = FUN_1801faaf0(&PTR_DAT_1802fcec8), (char)uVar3 != '\0')))) &&
      (cVar2 = FUN_1801601d0(PTR_DAT_1802fcec8,uVar3), cVar2 != '\0')))) {
    local_20 = PTR_DAT_1802fcec8 + 0x30;
    local_50 = &LAB_18012df10;
    local_48 = &local_79;
    local_40 = &LAB_1801ac760;
    local_68 = &DAT_180256513;
    local_60 = &local_58;
    local_78 = &local_68;
    local_70 = &DAT_180255780;
    local_38 = 1;
    local_30 = &local_78;
    local_28 = 1;
    local_58 = param_2;
    FUN_180160ae0(PTR_DAT_1802fcec8,&local_38);
  }
  uVar1 = *param_3;
  *param_1 = 0x100;
  *(undefined4 *)(param_1 + 2) = uVar1;
  *(undefined4 *)(param_1 + 4) = 1;
  return;
}


