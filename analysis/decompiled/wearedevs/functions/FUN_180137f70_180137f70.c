/* FUN_180137f70 @ 180137f70 */

void FUN_180137f70(uint *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined1 uVar4;
  uint ***local_80;
  undefined *local_78;
  uint ***local_70;
  uint **local_68;
  uint **local_60;
  uint ****local_58;
  undefined8 local_50;
  undefined *local_48;
  uint **local_40;
  undefined1 *local_38;
  uint *local_30;
  undefined1 local_22;
  undefined1 local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  iVar2 = 6;
  if (3 < *param_1) {
    iVar2 = *param_1 - 4;
  }
  local_30 = param_1;
  if (iVar2 == 3) {
    uVar4 = *(undefined1 *)((longlong)param_1 + 5);
    local_22 = uVar4;
    if ((*(longlong *)PTR_DAT_1802fd448 == 0) &&
       (((uVar3 = (uint)DAT_1802fc4a8, uVar3 - 1 < 2 ||
         ((uVar3 != 0 && (uVar3 = FUN_1801faaf0(&PTR_DAT_1802fc498), (char)uVar3 != '\0')))) &&
        (cVar1 = FUN_1801601d0(PTR_DAT_1802fc498,uVar3), cVar1 != '\0')))) {
      local_48 = PTR_DAT_1802fc498 + 0x30;
      local_40 = (uint **)&local_22;
      local_38 = &LAB_180139300;
      local_70 = (uint ***)&DAT_18024d4a8;
      local_68 = (uint **)&local_40;
      local_80 = (uint ***)&local_70;
      local_78 = &DAT_18024c458;
      local_60 = (uint **)0x1;
      local_58 = &local_80;
      local_50 = 1;
      FUN_180160ae0(PTR_DAT_1802fc498,&local_60);
      uVar4 = local_22;
    }
    local_21 = uVar4;
    FUN_180132bb0(param_1);
    *local_30 = 8;
    *(undefined1 *)(local_30 + 1) = local_21;
  }
  else {
    if (iVar2 != 5) {
      local_60 = (uint **)&local_40;
      local_58 = (uint ****)&LAB_180139000;
      local_40 = (uint **)param_1;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_18024d4f7,&local_60,&PTR_s_C__Users_burne__cargo_registry_s_18024d580);
    }
    if (((*(longlong *)PTR_DAT_1802fd448 == 0) &&
        ((uVar3 = (uint)DAT_1802fc4c0, uVar3 - 1 < 2 ||
         ((uVar3 != 0 && (uVar3 = FUN_1801faaf0(&PTR_DAT_1802fc4b0), (char)uVar3 != '\0')))))) &&
       (cVar1 = FUN_1801601d0(PTR_DAT_1802fc4b0,uVar3), cVar1 != '\0')) {
      local_48 = PTR_DAT_1802fc4b0 + 0x30;
      local_40 = (uint **)&DAT_18024d4d1;
      local_38 = (undefined1 *)0x4d;
      local_70 = &local_40;
      local_68 = (uint **)&DAT_18024c458;
      local_60 = (uint **)0x1;
      local_58 = &local_70;
      local_50 = 1;
      FUN_180160ae0(PTR_DAT_1802fc4b0,&local_60);
    }
    FUN_180132bb0(param_1);
    *local_30 = 0;
  }
  return;
}


