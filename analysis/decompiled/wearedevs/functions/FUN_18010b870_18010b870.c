/* FUN_18010b870 @ 18010b870 */

undefined8 *
FUN_18010b870(undefined8 *param_1,byte *param_2,char *param_3,undefined8 param_4,undefined4 param_5)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  SOCKET *pSVar4;
  ulonglong *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  SOCKET SVar9;
  undefined *puVar10;
  longlong ***ppplVar11;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  ulonglong local_158;
  longlong ***local_150;
  undefined8 local_148;
  undefined *local_140;
  int local_138;
  SOCKET local_d0;
  longlong *local_c8;
  code *local_c0;
  longlong **local_b8;
  longlong **local_b0;
  SOCKET local_a8;
  undefined2 local_a0;
  undefined2 uStack_9e;
  undefined2 uStack_9c;
  undefined2 uStack_9a;
  undefined4 uStack_98;
  undefined2 uStack_94;
  undefined2 uStack_92;
  undefined4 uStack_90;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined4 uStack_88;
  undefined2 uStack_84;
  undefined2 uStack_82;
  longlong ***local_80;
  undefined *local_78;
  longlong local_70;
  longlong local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  longlong local_50;
  undefined1 local_41;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  bVar1 = *param_2;
  uVar7 = 2;
  if ((bVar1 & 1) != 0) {
    uVar7 = 0x17;
  }
  SVar9 = 1;
  ppplVar11 = (longlong ***)0x1;
  uVar3 = FUN_180186740(uVar7,1,1,6);
  if ((uVar3 & 1) != 0) {
    local_158 = SVar9;
    FUN_180027490();
    pSVar4 = (SOCKET *)thunk_FUN_1801d32d0(8,8);
    if (pSVar4 == (SOCKET *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,8);
    }
    *pSVar4 = SVar9;
    *(undefined2 *)(param_1 + 1) = 2;
    param_1[5] = &DAT_18023cac8;
    param_1[6] = 0xe;
    param_1[7] = pSVar4;
    param_1[8] = &PTR_FUN_18023ca70;
    *param_1 = 1;
    return param_1;
  }
  local_41 = 1;
  local_d0 = SVar9;
  local_a8 = SVar9;
  uVar3 = FUN_1801865b0(&local_a8,1);
  if (uVar3 != 0) {
    local_158 = uVar3;
    FUN_180027490();
    puVar5 = (ulonglong *)thunk_FUN_1801d32d0(8,8);
    if (puVar5 == (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,8);
    }
    *puVar5 = uVar3;
    uVar7 = 0x19;
    puVar10 = &DAT_18023cad6;
    goto LAB_18010bc97;
  }
  if (*(int *)(param_3 + 0x30) == 1000000000) {
    if (*(int *)(param_3 + 0x40) != 1000000000) goto LAB_18010b9ab;
LAB_18010bac8:
    if ((bVar1 & 1) != 0) goto LAB_18010bad2;
LAB_18010bbc2:
    if ((param_3[0x69] & 1U) == 0) {
      uStack_9e = 0;
      local_a0 = 0;
      goto LAB_18010bc2a;
    }
    uStack_9e = (undefined2)*(undefined4 *)(param_3 + 0x6a);
    uStack_9c = (undefined2)((uint)*(undefined4 *)(param_3 + 0x6a) >> 0x10);
    uStack_9a = 0;
    local_a0 = 0;
    local_41 = 1;
    FUN_1801864e0(&local_158,&local_a0);
    local_41 = 1;
    uVar3 = FUN_180186810(&local_a8,&local_158);
  }
  else {
    ppplVar11 = *(longlong ****)(param_3 + 0x28);
LAB_18010b9ab:
    local_158 = local_158 & 0xffffffff00000000;
    local_148 = CONCAT44(local_148._4_4_,*(int *)(param_3 + 0x30));
    local_41 = 1;
    local_150 = ppplVar11;
    local_140 = *(undefined **)(param_3 + 0x38);
    local_138 = *(int *)(param_3 + 0x40);
    lVar6 = FUN_180186640(&local_a8,&local_158);
    if (lVar6 == 0) goto LAB_18010bac8;
    local_70 = lVar6;
    if ((*(ulonglong *)PTR_DAT_1802fd448 < 4) &&
       (((uVar8 = (uint)DAT_1802fb360, uVar8 - 1 < 2 ||
         ((uVar8 != 0 && (uVar8 = FUN_1801faaf0(&PTR_DAT_1802fb350), (char)uVar8 != '\0')))) &&
        (cVar2 = FUN_1801601d0(PTR_DAT_1802fb350,uVar8), cVar2 != '\0')))) {
      puVar10 = PTR_DAT_1802fb350 + 0x30;
      local_c8 = &local_70;
      local_c0 = FUN_1801e3c90;
      local_b8 = (longlong **)&DAT_18023caef;
      local_b0 = &local_c8;
      local_80 = &local_b8;
      local_78 = &DAT_18023c1c8;
      local_a0 = 1;
      uStack_9e = 0;
      uStack_9c = 0;
      uStack_9a = 0;
      uStack_98 = SUB84(&local_80,0);
      uStack_94 = (undefined2)((ulonglong)&local_80 >> 0x20);
      uStack_92 = (undefined2)((ulonglong)&local_80 >> 0x30);
      uStack_90 = 1;
      uStack_8c = 0;
      uStack_8a = 0;
      uStack_88 = SUB84(puVar10,0);
      uStack_84 = (undefined2)((ulonglong)puVar10 >> 0x20);
      uStack_82 = (undefined2)((ulonglong)puVar10 >> 0x30);
      FUN_180160ae0(PTR_DAT_1802fb350,&local_a0);
    }
    if (((uint)local_70 & 3) != 1) goto LAB_18010bac8;
    local_60 = (undefined8 *)(local_70 + -1);
    local_50 = *(undefined8 *)(local_70 + -1);
    local_58 = *(undefined8 **)(local_70 + 7);
    if ((code *)*local_58 != (code *)0x0) {
      (*(code *)*local_58)(local_50);
    }
    if (local_58[1] != 0) {
      thunk_FUN_1801d3330(local_50,local_58[1],local_58[2]);
    }
    thunk_FUN_1801d3330(local_60,0x18,8);
    if ((bVar1 & 1) == 0) goto LAB_18010bbc2;
LAB_18010bad2:
    if (param_3[0x6e] == '\0') {
      uStack_8c = 0;
      uStack_8a = 0;
      uStack_88 = 0;
      uStack_84 = 0;
      uStack_98 = 0;
      uStack_94 = 0;
      uStack_92 = 0;
      uStack_90 = 0;
      local_a0 = 1;
LAB_18010bc2a:
      uStack_9a = 0;
      uStack_9c = 0;
      local_41 = 1;
      FUN_1801864e0(&local_158,&local_a0);
      local_41 = 1;
      uVar3 = FUN_180186810(&local_a8,&local_158);
    }
    else {
      uStack_98 = *(undefined4 *)(param_3 + 0x73);
      uStack_90 = *(undefined4 *)(param_3 + 0x7b);
      uStack_9c = (undefined2)*(undefined4 *)(param_3 + 0x6f);
      uStack_9a = (undefined2)((uint)*(undefined4 *)(param_3 + 0x6f) >> 0x10);
      uStack_94 = (undefined2)*(undefined4 *)(param_3 + 0x77);
      uStack_92 = (undefined2)((uint)*(undefined4 *)(param_3 + 0x77) >> 0x10);
      uStack_8c = 0;
      uStack_8a = 0;
      uStack_88 = 0;
      uStack_84 = 0;
      local_a0 = 1;
      local_41 = 1;
      FUN_1801864e0(&local_158,&local_a0);
      local_41 = 1;
      uVar3 = FUN_180186810(&local_a8,&local_158);
    }
  }
  if (uVar3 == 0) {
    local_41 = 0;
    uVar7 = FUN_180186c10(local_d0);
    local_41 = 0;
    local_70 = thunk_FUN_180186580(uVar7);
    local_50 = local_70;
    if ((param_3[0x80] != '\0') &&
       (ppplVar11 = (longlong ***)thunk_FUN_1801865f0(&local_70,1), ppplVar11 != (longlong ***)0x0))
    {
      local_80 = ppplVar11;
      if (((*(ulonglong *)PTR_DAT_1802fd448 < 4) &&
          ((uVar8 = (uint)DAT_1802fb348, uVar8 - 1 < 2 ||
           ((uVar8 != 0 && (uVar8 = FUN_1801faaf0(&PTR_DAT_1802fb338), (char)uVar8 != '\0')))))) &&
         (cVar2 = FUN_1801601d0(PTR_DAT_1802fb338,uVar8), cVar2 != '\0')) {
        local_140 = PTR_DAT_1802fb338 + 0x30;
        local_a0 = SUB82(&local_80,0);
        uStack_9e = (undefined2)((ulonglong)&local_80 >> 0x10);
        uStack_9c = (undefined2)((ulonglong)&local_80 >> 0x20);
        uStack_9a = (undefined2)((ulonglong)&local_80 >> 0x30);
        uStack_98 = 0x801e3c90;
        uStack_94 = 1;
        uStack_92 = 0;
        local_c8 = (longlong *)&DAT_18023cb1f;
        local_c0 = (code *)&local_a0;
        local_b8 = &local_c8;
        local_b0 = (longlong **)&DAT_18023c1c8;
        local_158 = 1;
        local_150 = &local_b8;
        local_148 = 1;
        FUN_180160ae0(PTR_DAT_1802fb338,&local_158);
      }
      if (((uint)local_80 & 3) == 1) {
        local_68 = (longlong)local_80 + -1;
        local_58 = *(undefined8 **)((longlong)local_80 + -1);
        local_60 = *(undefined8 **)((longlong)local_80 + 7);
        if ((code *)*local_60 != (code *)0x0) {
          (*(code *)*local_60)(local_58);
        }
        if (local_60[1] != 0) {
          thunk_FUN_1801d3330(local_58,local_60[1],local_60[2]);
        }
        thunk_FUN_1801d3330(local_68,0x18,8);
      }
    }
    if (*param_3 != '\0') {
      uVar3 = 0xffffffff;
      if (*(ulonglong *)(param_3 + 8) < 0xffffffff) {
        uVar3 = *(ulonglong *)(param_3 + 8);
      }
      ppplVar11 = (longlong ***)FUN_180171b00(&local_70,uVar3);
      if (ppplVar11 != (longlong ***)0x0) {
        local_80 = ppplVar11;
        if (((*(ulonglong *)PTR_DAT_1802fd448 < 4) &&
            ((uVar8 = (uint)DAT_1802fb378, uVar8 - 1 < 2 ||
             ((uVar8 != 0 && (uVar8 = FUN_1801faaf0(&PTR_DAT_1802fb368), (char)uVar8 != '\0'))))))
           && (cVar2 = FUN_1801601d0(PTR_DAT_1802fb368,uVar8), cVar2 != '\0')) {
          local_140 = PTR_DAT_1802fb368 + 0x30;
          local_a0 = SUB82(&local_80,0);
          uStack_9e = (undefined2)((ulonglong)&local_80 >> 0x10);
          uStack_9c = (undefined2)((ulonglong)&local_80 >> 0x20);
          uStack_9a = (undefined2)((ulonglong)&local_80 >> 0x30);
          uStack_98 = 0x801e3c90;
          uStack_94 = 1;
          uStack_92 = 0;
          local_c8 = (longlong *)&DAT_18023cb3f;
          local_c0 = (code *)&local_a0;
          local_b8 = &local_c8;
          local_b0 = (longlong **)&DAT_18023c1c8;
          local_158 = 1;
          local_150 = &local_b8;
          local_148 = 1;
          FUN_180160ae0(PTR_DAT_1802fb368,&local_158);
        }
        if (((uint)local_80 & 3) == 1) {
          local_68 = (longlong)local_80 + -1;
          local_58 = *(undefined8 **)((longlong)local_80 + -1);
          local_60 = *(undefined8 **)((longlong)local_80 + 7);
          if ((code *)*local_60 != (code *)0x0) {
            (*(code *)*local_60)(local_58);
          }
          if (local_60[1] != 0) {
            thunk_FUN_1801d3330(local_58,local_60[1],local_60[2]);
          }
          thunk_FUN_1801d3330(local_68,0x18,8);
        }
      }
    }
    if (param_3[0x10] != '\0') {
      uVar3 = 0xffffffff;
      if (*(ulonglong *)(param_3 + 0x18) < 0xffffffff) {
        uVar3 = *(ulonglong *)(param_3 + 0x18);
      }
      ppplVar11 = (longlong ***)FUN_180171af0(&local_70,uVar3);
      if (ppplVar11 != (longlong ***)0x0) {
        local_80 = ppplVar11;
        if ((*(ulonglong *)PTR_DAT_1802fd448 < 4) &&
           (((uVar8 = (uint)DAT_1802fb390, uVar8 - 1 < 2 ||
             ((uVar8 != 0 && (uVar8 = FUN_1801faaf0(&PTR_DAT_1802fb380), (char)uVar8 != '\0')))) &&
            (cVar2 = FUN_1801601d0(PTR_DAT_1802fb380,uVar8), cVar2 != '\0')))) {
          local_140 = PTR_DAT_1802fb380 + 0x30;
          local_a0 = SUB82(&local_80,0);
          uStack_9e = (undefined2)((ulonglong)&local_80 >> 0x10);
          uStack_9c = (undefined2)((ulonglong)&local_80 >> 0x20);
          uStack_9a = (undefined2)((ulonglong)&local_80 >> 0x30);
          uStack_98 = 0x801e3c90;
          uStack_94 = 1;
          uStack_92 = 0;
          local_c8 = (longlong *)&DAT_18023cb5d;
          local_c0 = (code *)&local_a0;
          local_b8 = &local_c8;
          local_b0 = (longlong **)&DAT_18023c1c8;
          local_158 = 1;
          local_150 = &local_b8;
          local_148 = 1;
          FUN_180160ae0(PTR_DAT_1802fb380,&local_158);
          ppplVar11 = local_80;
        }
        if (((uint)ppplVar11 & 3) == 1) {
          local_68 = (longlong)ppplVar11 + -1;
          local_58 = *(undefined8 **)((longlong)ppplVar11 + -1);
          local_60 = *(undefined8 **)((longlong)ppplVar11 + 7);
          if ((code *)*local_60 != (code *)0x0) {
            (*(code *)*local_60)(local_58);
          }
          if (local_60[1] != 0) {
            thunk_FUN_1801d3330(local_58,local_60[1],local_60[2]);
          }
          thunk_FUN_1801d3330(local_68,0x18,8);
        }
      }
    }
    local_168 = (undefined4)*(undefined8 *)(param_2 + 0x10);
    uStack_164 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
    uStack_160 = (undefined4)*(undefined8 *)(param_2 + 0x18);
    uStack_15c = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
    local_178 = (undefined4)*(undefined8 *)param_2;
    uStack_174 = (undefined4)((ulonglong)*(undefined8 *)param_2 >> 0x20);
    uStack_170 = (undefined4)*(undefined8 *)(param_2 + 8);
    uStack_16c = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 8) >> 0x20);
    *param_1 = 0;
    param_1[1] = param_4;
    *(undefined4 *)(param_1 + 2) = param_5;
    *(ulonglong *)((longlong)param_1 + 0x14) = CONCAT44(local_178,uStack_17c);
    *(ulonglong *)((longlong)param_1 + 0x1c) = CONCAT44(uStack_170,uStack_174);
    *(ulonglong *)((longlong)param_1 + 0x24) = CONCAT44(local_168,uStack_16c);
    *(ulonglong *)((longlong)param_1 + 0x2c) = CONCAT44(uStack_160,uStack_164);
    *(undefined4 *)((longlong)param_1 + 0x34) = uStack_15c;
    param_1[7] = local_50;
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(undefined1 *)(param_1 + 0x13) = 0;
    return param_1;
  }
  local_158 = uVar3;
  FUN_180027490();
  puVar5 = (ulonglong *)thunk_FUN_1801d32d0(8,8);
  if (puVar5 == (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,8);
  }
  *puVar5 = uVar3;
  uVar7 = 0x14;
  puVar10 = &DAT_18023cb0b;
LAB_18010bc97:
  *(undefined2 *)(param_1 + 1) = 2;
  param_1[5] = puVar10;
  param_1[6] = uVar7;
  param_1[7] = puVar5;
  param_1[8] = &PTR_FUN_18023ca70;
  *param_1 = 1;
  closesocket(local_d0);
  return param_1;
}


