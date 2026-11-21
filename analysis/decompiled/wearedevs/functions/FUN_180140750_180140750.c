/* FUN_180140750 @ 180140750 */

void FUN_180140750(undefined2 *param_1,undefined1 param_2)

{
  char cVar1;
  uint uVar2;
  undefined1 local_59;
  undefined **local_58;
  undefined *local_50;
  undefined *local_48;
  undefined1 **local_40;
  undefined1 *local_38;
  code *local_30;
  undefined8 local_28;
  undefined ***local_20;
  undefined8 local_18;
  undefined *local_10;
  
  if ((*(ulonglong *)PTR_DAT_1802fd448 < 2) &&
     (((uVar2 = (uint)DAT_1802fcb58, local_59 = param_2, uVar2 - 1 < 2 ||
       ((uVar2 != 0 && (uVar2 = FUN_1801faaf0(&PTR_DAT_1802fcb48), (char)uVar2 != '\0')))) &&
      (cVar1 = FUN_1801601d0(PTR_DAT_1802fcb48,uVar2), cVar1 != '\0')))) {
    local_10 = PTR_DAT_1802fcb48 + 0x30;
    local_38 = &local_59;
    local_30 = FUN_180140de0;
    local_48 = &DAT_180251c29;
    local_40 = &local_38;
    local_58 = &local_48;
    local_50 = &DAT_180250f88;
    local_28 = 1;
    local_20 = &local_58;
    local_18 = 1;
    FUN_180160ae0(PTR_DAT_1802fcb48,&local_28);
  }
  *(undefined ***)(param_1 + 4) = &PTR_LAB_180251078;
  *(undefined8 *)(param_1 + 8) = 1;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 2) = 1;
  *param_1 = 0x101;
  return;
}


