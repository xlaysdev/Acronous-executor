/* FUN_180095f80 @ 180095f80 */

void FUN_180095f80(longlong param_1,undefined4 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  byte *pbVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 local_1bc;
  char local_1bb;
  char local_1ba;
  byte local_1b9;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined **local_1b0;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined4 **local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 *local_188;
  undefined ***local_180;
  undefined8 local_178;
  longlong local_170;
  undefined8 local_168;
  undefined ***local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined4 *local_148;
  code *local_140;
  char *local_138;
  undefined *local_130;
  char *local_128;
  undefined *local_120;
  byte *local_118;
  undefined *local_110;
  longlong local_108;
  undefined1 *local_100;
  
  local_1bc = param_3;
  local_1b8 = param_2;
  lVar6 = FUN_180152e90(param_5);
  uVar9 = *(int *)(lVar6 + 0x40) - 1;
  local_1bb = uVar9 < 3;
  lVar6 = FUN_180152e90(param_5);
  local_1ba = *(uint *)(lVar6 + 0x40) < 4;
  pbVar7 = (byte *)FUN_180152e90(param_5);
  local_1b9 = *pbVar7 ^ 1;
  lVar6 = FUN_180152e90(param_5);
  puVar3 = PTR_DAT_1802fd448;
  puVar2 = PTR_PTR_1802fc590;
  local_1b4 = *(undefined4 *)(lVar6 + 300);
  if (*(longlong *)PTR_DAT_1802fd448 - 1U < 5) {
LAB_180096291:
    if (uVar9 < 3) {
LAB_18009629a:
      puVar2 = PTR_PTR_1802fc5a0;
      if (*(longlong *)puVar3 != 0) {
        return;
      }
      bVar1 = PTR_PTR_1802fc5a0[0x10];
      uVar9 = (uint)bVar1;
      if (1 < bVar1 - 1) {
        if (bVar1 == 0) {
          return;
        }
        uVar9 = FUN_1801faaf0(PTR_PTR_1802fc5a0);
        if ((char)uVar9 == '\0') {
          return;
        }
      }
      cVar4 = FUN_1801601d0(*(undefined8 *)puVar2,uVar9);
      if (cVar4 == '\0') {
        return;
      }
      lVar6 = *(longlong *)puVar2;
      local_1a0 = &DAT_18020f3e0;
      goto LAB_1800962f4;
    }
  }
  else {
    bVar1 = PTR_PTR_1802fc590[0x10];
    uVar5 = (uint)bVar1;
    if (((1 < bVar1 - 1) &&
        ((bVar1 == 0 || (uVar5 = FUN_1801faaf0(PTR_PTR_1802fc590), (char)uVar5 == '\0')))) ||
       (cVar4 = FUN_1801601d0(*(undefined8 *)puVar2,uVar5), cVar4 == '\0')) goto LAB_180096291;
    lVar6 = *(longlong *)puVar2;
    local_108 = FUN_180152e90(param_5);
    local_108 = local_108 + 0x40;
    local_168 = &local_1b8;
    local_160 = (undefined ***)FUN_1801310a0;
    local_158 = &local_1bc;
    local_150 = &LAB_18009c7e0;
    local_148 = &local_1b4;
    local_140 = FUN_18009d010;
    local_138 = &local_1bb;
    local_130 = &DAT_180039950;
    local_128 = &local_1ba;
    local_120 = &DAT_180039950;
    local_118 = &local_1b9;
    local_110 = &DAT_180039950;
    local_100 = &LAB_1801394b0;
    local_1a0 = &DAT_18020f2f6;
    local_198 = (undefined4 **)&local_168;
    local_1b0 = &local_1a0;
    local_1a8 = &DAT_18020f2b0;
    local_188 = (undefined4 *)0x1;
    local_180 = &local_1b0;
    local_178 = 1;
    local_170 = lVar6 + 0x30;
    FUN_180160ae0(*(undefined8 *)puVar2,&local_188);
    if (local_1bb != '\0') goto LAB_18009629a;
  }
  uVar8 = FUN_180152f00(param_5);
  FUN_180132820(uVar8,local_1b8,local_1bc);
  puVar2 = PTR_PTR_1802fc5a8;
  if ((local_1ba != '\x01') || (local_1b9 == 0)) {
    lVar6 = FUN_180152e90(param_5);
    if (*(char *)(lVar6 + 0x13c) == '\0') {
      FUN_180061b50(param_1 + 8,param_4,param_5);
    }
    lVar6 = FUN_180152e90(param_5);
    uVar11 = local_1b8;
    puVar2 = PTR_PTR_1802fc598;
    uVar10 = *(undefined4 *)(lVar6 + 300);
    local_18c = local_1b8;
    local_190 = uVar10;
    if (*(longlong *)puVar3 == 0) {
      bVar1 = PTR_PTR_1802fc598[0x10];
      uVar9 = (uint)bVar1;
      if (((bVar1 - 1 < 2) ||
          ((bVar1 != 0 && (uVar9 = FUN_1801faaf0(PTR_PTR_1802fc598), (char)uVar9 != '\0')))) &&
         (cVar4 = FUN_1801601d0(*(undefined8 *)puVar2,uVar9), cVar4 != '\0')) {
        lVar6 = *(longlong *)puVar2;
        local_150 = (undefined1 *)(lVar6 + 0x30);
        local_188 = &local_190;
        local_180 = (undefined ***)FUN_18009c760;
        local_1a0 = &DAT_18020f36f;
        local_198 = &local_188;
        local_1b0 = &local_1a0;
        local_1a8 = &DAT_18020f2b0;
        local_168 = (undefined4 *)0x1;
        local_160 = &local_1b0;
        local_158 = (undefined1 *)0x1;
        FUN_180160ae0(lVar6,&local_168);
        uVar10 = local_190;
        uVar11 = local_18c;
      }
    }
    local_168 = (undefined4 *)CONCAT44(uVar10,(undefined4)local_168);
    local_160 = (undefined ***)CONCAT44(local_160._4_4_,uVar11);
    local_168 = (undefined4 *)CONCAT71(local_168._1_7_,8);
    FUN_180061f80(param_1 + 8,&local_168,param_4,param_5,param_7);
    FUN_18012fe10(param_1 + 8,param_5,param_6);
    return;
  }
  if (*(longlong *)puVar3 != 0) {
    return;
  }
  bVar1 = PTR_PTR_1802fc5a8[0x10];
  uVar9 = (uint)bVar1;
  if (1 < bVar1 - 1) {
    if (bVar1 == 0) {
      return;
    }
    uVar9 = FUN_1801faaf0(PTR_PTR_1802fc5a8);
    if ((char)uVar9 == '\0') {
      return;
    }
  }
  cVar4 = FUN_1801601d0(*(undefined8 *)puVar2,uVar9);
  if (cVar4 == '\0') {
    return;
  }
  lVar6 = *(longlong *)puVar2;
  local_1a0 = &DAT_18020f390;
LAB_1800962f4:
  local_180 = (undefined ***)FUN_18009d010;
  local_188 = &local_1b4;
  local_150 = (undefined1 *)(lVar6 + 0x30);
  local_198 = &local_188;
  local_1b0 = &local_1a0;
  local_1a8 = &DAT_18020f2b0;
  local_168 = (undefined4 *)0x1;
  local_160 = &local_1b0;
  local_158 = (undefined1 *)0x1;
  FUN_180160ae0(lVar6,&local_168);
  return;
}


