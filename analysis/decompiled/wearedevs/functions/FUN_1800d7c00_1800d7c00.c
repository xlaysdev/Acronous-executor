/* FUN_1800d7c00 @ 1800d7c00 */

void FUN_1800d7c00(undefined8 *param_1,char *param_2,char *param_3)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  longlong *plVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 local_280;
  undefined8 local_278;
  char *local_270;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined2 local_15c;
  longlong *local_158;
  undefined8 local_150;
  longlong *local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  char local_e0;
  char local_df;
  undefined8 *local_d8;
  undefined1 local_d0 [32];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 *local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined3 uStack_5c;
  char *local_58;
  char local_4c;
  char local_4b;
  char local_4a;
  char local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  plVar6 = *(longlong **)(param_2 + 0x188);
  LOCK();
  lVar1 = *plVar6;
  *plVar6 = *plVar6 + 1;
  UNLOCK();
  if (*plVar6 == 0 || SCARRY8(lVar1,1) != *plVar6 < 0) goto LAB_1800d80c4;
  local_88 = *(undefined8 *)(param_2 + 0x188);
  uStack_80 = *(undefined8 *)(param_2 + 400);
  plVar6 = *(longlong **)(param_2 + 0x198);
  if (plVar6 == (longlong *)0x0) {
    local_68 = 0;
    if (*param_2 != '\0') goto LAB_1800d7c71;
LAB_1800d7ca8:
    uVar15 = 0;
    if (*(int *)(param_2 + 0x10) != 1) goto LAB_1800d7c88;
LAB_1800d7cb1:
    local_98 = *(undefined8 *)(param_2 + 0x18);
    local_140 = 1;
    if (*(int *)(param_2 + 0x20) != 1) goto LAB_1800d7c95;
LAB_1800d7ccc:
    local_90 = *(undefined8 *)(param_2 + 0x28);
    uVar13 = 1;
  }
  else {
    LOCK();
    lVar1 = *plVar6;
    *plVar6 = *plVar6 + 1;
    UNLOCK();
    if (*plVar6 == 0 || SCARRY8(lVar1,1) != *plVar6 < 0) goto LAB_1800d80c4;
    local_68 = *(undefined8 *)(param_2 + 0x198);
    if (*param_2 == '\0') goto LAB_1800d7ca8;
LAB_1800d7c71:
    local_a0 = *(undefined8 *)(param_2 + 8);
    uVar15 = 1;
    if (*(int *)(param_2 + 0x10) == 1) goto LAB_1800d7cb1;
LAB_1800d7c88:
    local_140 = 0;
    if (*(int *)(param_2 + 0x20) == 1) goto LAB_1800d7ccc;
LAB_1800d7c95:
    uVar13 = 0;
  }
  cVar2 = param_2[0x30];
  cVar3 = param_2[0x38];
  cVar4 = param_2[0x3a];
  cVar5 = param_2[0x39];
  uStack_60 = *(undefined4 *)(param_2 + 0x31);
  uStack_5c = (undefined3)((uint)*(undefined4 *)(param_2 + 0x34) >> 8);
  local_158 = *(longlong **)(param_2 + 0xd8);
  local_150 = *(undefined8 *)(param_2 + 0xe0);
  LOCK();
  lVar1 = *local_158;
  *local_158 = *local_158 + 1;
  UNLOCK();
  if (*local_158 == 0 || SCARRY8(lVar1,1) != *local_158 < 0) {
LAB_1800d80c4:
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  local_148 = *(longlong **)(param_2 + 0xe8);
  local_b0 = local_140;
  local_a8 = uVar13;
  local_58 = param_3;
  local_4c = cVar4;
  local_4b = cVar2;
  local_4a = cVar3;
  local_49 = cVar5;
  if (local_148 != (longlong *)0x0) {
    LOCK();
    lVar1 = *local_148;
    *local_148 = *local_148 + 1;
    UNLOCK();
    if (*local_148 == 0 || SCARRY8(lVar1,1) != *local_148 < 0) goto LAB_1800d80c4;
    local_140 = *(undefined8 *)(param_2 + 0xf0);
  }
  local_15c = *(undefined2 *)(param_2 + 0xd4);
  local_1f0 = *(undefined8 *)(param_2 + 0x40);
  uStack_1e8 = *(undefined8 *)(param_2 + 0x48);
  local_1e0 = *(undefined4 *)(param_2 + 0x50);
  uStack_1dc = *(undefined4 *)(param_2 + 0x54);
  uStack_1d8 = *(undefined4 *)(param_2 + 0x58);
  uStack_1d4 = *(undefined4 *)(param_2 + 0x5c);
  local_1d0 = *(undefined4 *)(param_2 + 0x60);
  uStack_1cc = *(undefined4 *)(param_2 + 100);
  uStack_1c8 = *(undefined4 *)(param_2 + 0x68);
  uStack_1c4 = *(undefined4 *)(param_2 + 0x6c);
  local_1c0 = *(undefined4 *)(param_2 + 0x70);
  uStack_1bc = *(undefined4 *)(param_2 + 0x74);
  uStack_1b8 = *(undefined4 *)(param_2 + 0x78);
  uStack_1b4 = *(undefined4 *)(param_2 + 0x7c);
  local_160 = *(undefined4 *)(param_2 + 0xd0);
  local_190 = *(undefined4 *)(param_2 + 0xa0);
  local_198 = *(undefined8 *)(param_2 + 0x98);
  local_1a0 = *(undefined4 *)(param_2 + 0x90);
  local_1b0 = *(undefined8 *)(param_2 + 0x80);
  uStack_1a8 = *(undefined8 *)(param_2 + 0x88);
  local_180 = *(undefined4 *)(param_2 + 0xb0);
  local_188 = *(undefined8 *)(param_2 + 0xa8);
  local_178 = *(undefined4 *)(param_2 + 0xb8);
  uStack_174 = *(undefined4 *)(param_2 + 0xbc);
  uStack_170 = *(undefined4 *)(param_2 + 0xc0);
  uStack_16c = *(undefined4 *)(param_2 + 0xc4);
  local_168 = *(undefined8 *)(param_2 + 200);
  cVar2 = param_2[0x1a2];
  if (*(int *)(param_2 + 0xf8) == 2) {
    puVar14 = *(undefined8 **)(param_2 + 0x100);
    uVar13 = (**(code **)(*(longlong *)(param_2 + 0x108) + 0x28))();
    local_280 = 2;
    local_278 = uVar13;
    local_270 = param_2;
  }
  else {
    puVar14 = &local_280;
    uVar13 = FUN_1800cbf10(puVar14,param_2 + 0xf8);
  }
  local_df = (char)uVar13;
  cVar3 = *local_58;
  if (cVar3 != '\0') {
    if (cVar3 == '\x01') {
      local_df = local_58[1];
    }
    else {
      puVar14 = *(undefined8 **)(local_58 + 8);
      FUN_180027490();
      local_70 = (undefined8 *)thunk_FUN_1801d32d0(0x20,8);
      if (local_70 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201705(8,0x20);
      }
      local_df = (**(code **)*puVar14)(&local_138,puVar14 + 3,puVar14[1],puVar14[2]);
      local_70[2] = local_128;
      local_70[3] = uStack_120;
      *(undefined4 *)local_70 = local_138;
      *(undefined4 *)((longlong)local_70 + 4) = uStack_134;
      *(undefined4 *)(local_70 + 1) = uStack_130;
      *(undefined4 *)((longlong)local_70 + 0xc) = uStack_12c;
      puVar14 = local_70;
    }
  }
  local_e0 = cVar3;
  local_d8 = puVar14;
  (*(code *)**(undefined8 **)(local_58 + 0x10))
            (local_d0,local_58 + 0x28,*(undefined8 *)(local_58 + 0x18),
             *(undefined8 *)(local_58 + 0x20));
  FUN_1801037c0(&local_138,&local_e0);
  uVar12 = local_68;
  uVar13 = *(undefined8 *)local_58;
  uVar8 = *(undefined8 *)(local_58 + 8);
  uVar9 = *(undefined8 *)(local_58 + 0x10);
  uVar10 = *(undefined8 *)(local_58 + 0x18);
  uVar11 = *(undefined8 *)(local_58 + 0x28);
  param_1[0x36] = *(undefined8 *)(local_58 + 0x20);
  param_1[0x37] = uVar11;
  param_1[0x34] = uVar9;
  param_1[0x35] = uVar10;
  param_1[0x32] = uVar13;
  param_1[0x33] = uVar8;
  memcpy(param_1 + 0x20,&local_280,0x90);
  param_1[0x38] = CONCAT44(uStack_134,local_138);
  param_1[0x39] = CONCAT44(uStack_12c,uStack_130);
  param_1[0x3a] = local_128;
  param_1[0x3b] = uStack_120;
  param_1[0x3c] = local_118;
  param_1[0x3d] = uStack_110;
  param_1[0x3e] = local_108;
  param_1[0x3f] = uStack_100;
  param_1[0x40] = local_f8;
  param_1[0x41] = uStack_f0;
  param_1[0x42] = local_e8;
  memcpy(param_1 + 1,&local_1f0,0xb8);
  *(undefined4 *)((longlong)param_1 + 0xf1) = uStack_60;
  *(uint *)((longlong)param_1 + 0xf4) = CONCAT31(uStack_5c,uStack_60._3_1_);
  *param_1 = 6;
  param_1[0x18] = uVar15;
  param_1[0x19] = local_a0;
  param_1[0x1a] = local_b0;
  param_1[0x1b] = local_98;
  param_1[0x1c] = local_a8;
  param_1[0x1d] = local_90;
  *(char *)(param_1 + 0x1e) = local_4b;
  *(char *)(param_1 + 0x1f) = local_4a;
  *(char *)((longlong)param_1 + 0xf9) = local_49;
  *(char *)((longlong)param_1 + 0xfa) = local_4c;
  param_1[0x43] = local_88;
  param_1[0x44] = uStack_80;
  param_1[0x45] = uVar12;
  *(char *)(param_1 + 0x46) = cVar2;
  *(char *)((longlong)param_1 + 0x231) = cVar2;
  return;
}


