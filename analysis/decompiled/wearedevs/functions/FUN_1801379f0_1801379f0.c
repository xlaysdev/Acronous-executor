/* FUN_1801379f0 @ 1801379f0 */

undefined2 * FUN_1801379f0(undefined2 *param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined1 uVar4;
  uint *local_90;
  uint ****local_88;
  undefined *local_80;
  undefined8 local_78;
  uint ****local_70;
  undefined8 local_68;
  undefined *local_60;
  uint **local_58;
  undefined1 *local_50;
  uint ***local_48;
  uint ***local_40;
  uint *local_38;
  undefined1 local_2a;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  iVar2 = 6;
  if (3 < *param_2) {
    iVar2 = *param_2 - 4;
  }
  local_38 = param_2;
  if (iVar2 == 3) {
    uVar4 = (undefined1)param_2[1];
    local_2a = uVar4;
    if (((*(longlong *)PTR_DAT_1802fd448 == 0) &&
        ((uVar3 = (uint)DAT_1802fc460, uVar3 - 1 < 2 ||
         ((uVar3 != 0 && (uVar3 = FUN_1801faaf0(&PTR_DAT_1802fc450), (char)uVar3 != '\0')))))) &&
       (cVar1 = FUN_1801601d0(PTR_DAT_1802fc450,uVar3), cVar1 != '\0')) {
      local_60 = PTR_DAT_1802fc450 + 0x30;
      local_58 = (uint **)&local_2a;
      local_50 = &LAB_180139300;
      local_48 = (uint ***)&DAT_18024d118;
      local_40 = &local_58;
      local_88 = &local_48;
      local_80 = &DAT_18024c458;
      local_78 = 1;
      local_70 = (uint ****)&local_88;
      local_68 = 1;
      FUN_180160ae0(PTR_DAT_1802fc450,&local_78);
      uVar4 = local_2a;
    }
    local_29 = uVar4;
    FUN_180132bb0(param_2);
    *local_38 = 9;
    *(undefined1 *)(local_38 + 1) = local_29;
    *(undefined1 *)param_1 = 3;
  }
  else if (iVar2 == 4) {
    if (((*(longlong *)PTR_DAT_1802fd448 == 0) &&
        ((uVar3 = (uint)DAT_1802fc478, uVar3 - 1 < 2 ||
         ((uVar3 != 0 && (uVar3 = FUN_1801faaf0(&PTR_DAT_1802fc468), (char)uVar3 != '\0')))))) &&
       (cVar1 = FUN_1801601d0(PTR_DAT_1802fc468,uVar3), cVar1 != '\0')) {
      local_60 = PTR_DAT_1802fc468 + 0x30;
      local_58 = (uint **)&DAT_18024d142;
      local_50 = (undefined1 *)0x4b;
      local_48 = &local_58;
      local_40 = (uint ***)&DAT_18024c458;
      local_78 = 1;
      local_70 = &local_48;
      local_68 = 1;
      FUN_180160ae0(PTR_DAT_1802fc468,&local_78);
    }
    FUN_180132bb0(param_2);
    *local_38 = 0;
    *(undefined1 *)param_1 = 3;
  }
  else {
    if ((*(ulonglong *)PTR_DAT_1802fd448 < 2) &&
       (((uVar3 = (uint)DAT_1802fc448, local_90 = param_2, uVar3 - 1 < 2 ||
         ((uVar3 != 0 && (uVar3 = FUN_1801faaf0(&PTR_DAT_1802fc438), (char)uVar3 != '\0')))) &&
        (cVar1 = FUN_1801601d0(PTR_DAT_1802fc438,uVar3), cVar1 != '\0')))) {
      local_60 = PTR_DAT_1802fc438 + 0x30;
      local_58 = &local_90;
      local_50 = &LAB_180139000;
      local_48 = (uint ***)&DAT_18024d167;
      local_40 = &local_58;
      local_88 = &local_48;
      local_80 = &DAT_18024c458;
      local_78 = 1;
      local_70 = (uint ****)&local_88;
      local_68 = 1;
      FUN_180160ae0(PTR_DAT_1802fc438,&local_78);
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


