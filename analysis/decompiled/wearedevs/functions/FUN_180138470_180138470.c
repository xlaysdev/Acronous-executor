/* FUN_180138470 @ 180138470 */

undefined2 * FUN_180138470(undefined2 *param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 local_78;
  undefined ***local_70;
  undefined8 local_68;
  undefined *local_60;
  int **local_58;
  undefined1 *local_50;
  undefined *local_48;
  int ***local_40;
  undefined **local_38;
  undefined *local_30;
  int *local_28;
  int *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (*param_2 == 4) {
    local_20 = param_2;
    FUN_180132bb0(param_2);
    *local_20 = 6;
    *(undefined1 *)param_1 = 3;
  }
  else {
    if ((*(ulonglong *)PTR_DAT_1802fd448 < 2) &&
       (((uVar2 = (uint)DAT_1802fc4f0, local_28 = param_2, uVar2 - 1 < 2 ||
         ((uVar2 != 0 && (uVar2 = FUN_1801faaf0(&PTR_DAT_1802fc4e0), (char)uVar2 != '\0')))) &&
        (cVar1 = FUN_1801601d0(PTR_DAT_1802fc4e0,uVar2), cVar1 != '\0')))) {
      local_60 = PTR_DAT_1802fc4e0 + 0x30;
      local_58 = &local_28;
      local_50 = &LAB_180139000;
      local_48 = &DAT_18024d788;
      local_40 = &local_58;
      local_38 = &local_48;
      local_30 = &DAT_18024c458;
      local_78 = 1;
      local_70 = &local_38;
      local_68 = 1;
      FUN_180160ae0(PTR_DAT_1802fc4e0,&local_78);
    }
    *param_1 = 0x101;
    *(undefined4 *)(param_1 + 2) = 1;
    *(undefined ***)(param_1 + 4) = &PTR_LAB_18024c478;
    *(undefined8 *)(param_1 + 8) = 1;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return param_1;
}


