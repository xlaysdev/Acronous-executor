/* FUN_180138900 @ 180138900 */

undefined2 * FUN_180138900(undefined2 *param_1,uint *param_2,longlong param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  ushort uVar6;
  uint ****local_a0;
  undefined *local_98;
  uint *local_90;
  uint *local_88;
  undefined8 local_80;
  uint ****local_78;
  undefined8 local_70;
  undefined *local_68;
  uint **local_60;
  undefined1 *local_58;
  uint ***local_50;
  uint ***local_48;
  uint local_3c;
  undefined1 local_35;
  uint local_34;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  uVar4 = 6;
  if (3 < *param_2) {
    uVar4 = *param_2 - 4;
  }
  if (uVar4 < 5) {
    bVar1 = *(byte *)(param_3 + 0x11c);
    local_34 = (uint)bVar1;
    switch(uVar4) {
    case 0:
      uVar5 = 1;
      if ((bVar1 & 1) == 0) {
        uVar6 = (short)*(undefined4 *)(param_3 + 0xf8) - 200;
        if ((((0xff9b < uVar6) && (*(longlong *)PTR_DAT_1802fd448 == 0)) &&
            ((uVar4 = (uint)DAT_1802fc580, uVar4 - 1 < 2 ||
             ((uVar4 != 0 && (uVar4 = FUN_1801faaf0(&PTR_DAT_1802fc570), (char)uVar4 != '\0'))))))
           && (cVar2 = FUN_1801601d0(PTR_DAT_1802fc570,uVar4), cVar2 != '\0')) {
          local_68 = PTR_DAT_1802fc570 + 0x30;
          local_60 = (uint **)&DAT_18024dda8;
          local_58 = (undefined1 *)0x3b;
          local_50 = &local_60;
          local_48 = (uint ***)&DAT_18024c458;
          local_80 = 1;
          local_78 = &local_50;
          local_70 = 1;
          FUN_180160ae0(PTR_DAT_1802fc570,&local_80);
        }
        local_35 = uVar6 < 0xff9c;
        local_3c = 7;
        local_34 = 0;
      }
      else {
        local_3c = 9;
        local_34 = 0;
      }
      break;
    case 1:
      goto switchD_180138952_caseD_1;
    case 2:
      if ((bVar1 & 1) == 0) {
        iVar3 = *(int *)(param_3 + 0xf8) + -100;
        if ((ushort)iVar3 < 100) {
          local_3c = 6;
          if (*(longlong *)PTR_DAT_1802fd448 == 0) {
            local_34 = 1;
            uVar4 = (uint)DAT_1802fc520;
            if (((uVar4 - 1 < 2) ||
                ((uVar4 != 0 && (uVar4 = FUN_1801faaf0(&PTR_DAT_1802fc510), (char)uVar4 != '\0'))))
               && (cVar2 = FUN_1801601d0(PTR_DAT_1802fc510,uVar4), cVar2 != '\0')) {
              local_68 = PTR_DAT_1802fc510 + 0x30;
              local_60 = (uint **)&DAT_18024dda8;
              local_58 = (undefined1 *)0x3b;
              local_50 = &local_60;
              local_48 = (uint ***)&DAT_18024c458;
              local_80 = 1;
              local_78 = &local_50;
              local_70 = 1;
              FUN_180160ae0(PTR_DAT_1802fc510,&local_80);
              uVar5 = 1;
            }
            else {
              uVar5 = 1;
            }
          }
          else {
            local_34 = (uint)CONCAT71((int7)((ulonglong)*(longlong *)PTR_DAT_1802fd448 >> 8),1);
            uVar5 = 1;
          }
        }
        else {
          local_34 = (uint)CONCAT71((uint7)(uint3)((uint)iVar3 >> 8),1);
          local_3c = 8;
          uVar5 = 1;
        }
      }
      else {
        uVar5 = 1;
        local_3c = 0;
      }
      break;
    case 3:
      if (*(char *)((longlong)param_2 + 5) != '\0') goto switchD_180138952_caseD_1;
      local_34 = (uint)(byte)param_2[1];
      if ((bVar1 & 1) == 0) {
        uVar6 = (short)*(undefined4 *)(param_3 + 0xf8) - 200;
        if ((((0xff9b < uVar6) && (*(longlong *)PTR_DAT_1802fd448 == 0)) &&
            ((uVar4 = (uint)DAT_1802fc538, uVar4 - 1 < 2 ||
             ((uVar4 != 0 && (uVar4 = FUN_1801faaf0(&PTR_DAT_1802fc528), (char)uVar4 != '\0'))))))
           && (cVar2 = FUN_1801601d0(PTR_DAT_1802fc528,uVar4), cVar2 != '\0')) {
          local_68 = PTR_DAT_1802fc528 + 0x30;
          local_60 = (uint **)&DAT_18024dda8;
          local_58 = (undefined1 *)0x3b;
          local_50 = &local_60;
          local_48 = (uint ***)&DAT_18024c458;
          local_80 = 1;
          local_78 = &local_50;
          local_70 = 1;
          FUN_180160ae0(PTR_DAT_1802fc528,&local_80);
        }
        local_35 = uVar6 < 0xff9c;
        local_3c = 7;
LAB_180138ba8:
        uVar5 = 0;
      }
      else {
        local_3c = 9;
        uVar5 = 0;
      }
      break;
    case 4:
      if ((char)param_2[1] != '\0') goto switchD_180138952_caseD_1;
      if ((bVar1 & 1) != 0) {
        local_3c = 0;
        goto LAB_180138ba8;
      }
      iVar3 = *(int *)(param_3 + 0xf8) + -100;
      local_3c = 8;
      if ((ushort)iVar3 < 100) {
        if (*(longlong *)PTR_DAT_1802fd448 == 0) {
          uVar4 = (uint)DAT_1802fc568;
          if (1 < uVar4 - 1) {
            if (uVar4 == 0) {
              uVar5 = 0;
              local_34 = 0;
              break;
            }
            uVar4 = FUN_1801faaf0(&PTR_DAT_1802fc558);
            if ((char)uVar4 == '\0') goto LAB_180138b49;
          }
          cVar2 = FUN_1801601d0(PTR_DAT_1802fc558,uVar4);
          if (cVar2 != '\0') {
            local_68 = PTR_DAT_1802fc558 + 0x30;
            local_60 = (uint **)&DAT_18024dda8;
            local_58 = (undefined1 *)0x3b;
            local_50 = &local_60;
            local_48 = (uint ***)&DAT_18024c458;
            local_80 = 1;
            local_78 = &local_50;
            local_70 = 1;
            FUN_180160ae0(PTR_DAT_1802fc558,&local_80);
            local_34 = 0;
            goto LAB_180138ba8;
          }
        }
LAB_180138b49:
        local_34 = 0;
        goto LAB_180138ba8;
      }
      local_34 = (uint)CONCAT71((uint7)(uint3)((uint)iVar3 >> 8),1);
      uVar5 = 0;
    }
    local_88 = param_2;
    FUN_180132bb0(param_2);
    *local_88 = local_3c;
    *(char *)(local_88 + 1) = (char)local_34;
    *(undefined1 *)((longlong)local_88 + 5) = local_35;
    *(undefined1 *)((longlong)param_1 + 1) = uVar5;
    *(undefined1 *)param_1 = 3;
  }
  else {
switchD_180138952_caseD_1:
    if (((*(ulonglong *)PTR_DAT_1802fd448 < 2) &&
        ((uVar4 = (uint)DAT_1802fc550, local_90 = param_2, uVar4 - 1 < 2 ||
         ((uVar4 != 0 && (uVar4 = FUN_1801faaf0(&PTR_DAT_1802fc540), (char)uVar4 != '\0')))))) &&
       (cVar2 = FUN_1801601d0(PTR_DAT_1802fc540,uVar4), cVar2 != '\0')) {
      local_68 = PTR_DAT_1802fc540 + 0x30;
      local_60 = &local_90;
      local_58 = &LAB_180139000;
      local_50 = (uint ***)&DAT_18024ddc5;
      local_48 = &local_60;
      local_a0 = &local_50;
      local_98 = &DAT_18024c458;
      local_80 = 1;
      local_78 = (uint ****)&local_a0;
      local_70 = 1;
      FUN_180160ae0(PTR_DAT_1802fc540,&local_80);
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


