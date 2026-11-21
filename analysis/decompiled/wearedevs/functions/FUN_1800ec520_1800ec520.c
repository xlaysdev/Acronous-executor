/* FUN_1800ec520 @ 1800ec520 */

byte FUN_1800ec520(char *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  char **local_60;
  undefined *local_58;
  char *local_50;
  undefined8 local_48;
  undefined8 local_40;
  char ***local_38;
  undefined8 local_30;
  longlong local_28;
  
  puVar8 = PTR_DAT_1802fd448;
  puVar6 = PTR_PTR_1802fcfe8;
  if (*(longlong *)PTR_DAT_1802fd448 == 0) {
    bVar1 = PTR_PTR_1802fcfe8[0x10];
    uVar10 = (uint)bVar1;
    if (((bVar1 - 1 < 2) ||
        ((bVar1 != 0 && (uVar10 = FUN_1801faaf0(PTR_PTR_1802fcfe8), (char)uVar10 != '\0')))) &&
       (cVar9 = FUN_1801601d0(*(undefined8 *)puVar6,uVar10), cVar9 != '\0')) {
      lVar11 = *(longlong *)puVar6;
      local_28 = lVar11 + 0x30;
      local_50 = &DAT_180216578;
      local_48 = 0x21;
      local_60 = &local_50;
      local_58 = &DAT_180216218;
      local_40 = 1;
      local_38 = &local_60;
      local_30 = 1;
      FUN_180160ae0(lVar11,&local_40);
    }
  }
  lVar11 = FUN_180152e90(param_2);
  puVar6 = PTR_PTR_1802fcfe0;
  bVar1 = *(byte *)(lVar11 + 0x13e);
  if (bVar1 == 0) {
    lVar11 = FUN_180152f00(param_2);
    *(undefined1 *)(lVar11 + 0x13e) = 1;
    puVar7 = PTR_PTR_1802fcff0;
    puVar6 = PTR_PTR_1802fcfd8;
    lVar11 = *(longlong *)puVar8;
    if (*param_1 == '\0') {
      if (lVar11 == 0) {
        bVar2 = PTR_PTR_1802fcfd8[0x10];
        uVar10 = (uint)bVar2;
        if (((bVar2 - 1 < 2) ||
            ((bVar2 != 0 && (uVar10 = FUN_1801faaf0(PTR_PTR_1802fcfd8), (char)uVar10 != '\0')))) &&
           (cVar9 = FUN_1801601d0(*(undefined8 *)puVar6,uVar10), cVar9 != '\0')) {
          lVar11 = *(longlong *)puVar6;
          local_28 = lVar11 + 0x30;
          local_50 = " -> first entry";
          local_48 = 0x1f;
          local_60 = &local_50;
          local_58 = &DAT_180216218;
          local_40 = 1;
          local_38 = &local_60;
          local_30 = 1;
          FUN_180160ae0(lVar11,&local_40);
        }
      }
      param_1[0] = '\x01';
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      uVar4 = *(undefined4 *)(param_2 + 1);
      uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
      *(undefined4 *)(param_1 + 4) = uVar4;
      *(undefined4 *)(param_1 + 8) = uVar5;
      *(undefined4 *)(param_1 + 0xc) = uVar4;
      *(undefined4 *)(param_1 + 0x10) = uVar5;
    }
    else {
      if (lVar11 == 0) {
        bVar2 = PTR_PTR_1802fcff0[0x10];
        uVar10 = (uint)bVar2;
        if (((bVar2 - 1 < 2) ||
            ((bVar2 != 0 && (uVar10 = FUN_1801faaf0(PTR_PTR_1802fcff0), (char)uVar10 != '\0')))) &&
           (cVar9 = FUN_1801601d0(*(undefined8 *)puVar7,uVar10), cVar9 != '\0')) {
          lVar11 = *(longlong *)puVar7;
          local_28 = lVar11 + 0x30;
          local_50 = " -> existing entries";
          local_48 = 0x29;
          local_60 = &local_50;
          local_58 = &DAT_180216218;
          local_40 = 1;
          local_38 = &local_60;
          local_30 = 1;
          FUN_180160ae0(lVar11,&local_40);
        }
      }
      local_40 = *param_2;
      local_38 = *(char ****)(param_1 + 0xc);
      uVar3 = param_2[1];
      lVar11 = FUN_180152f00(&local_40);
      *(undefined4 *)(lVar11 + 0xf4) = 1;
      *(undefined8 *)(lVar11 + 0xf8) = uVar3;
      *(undefined8 *)(param_1 + 0xc) = param_2[1];
    }
  }
  else if (*(longlong *)puVar8 == 0) {
    bVar2 = PTR_PTR_1802fcfe0[0x10];
    uVar10 = (uint)bVar2;
    if (((bVar2 - 1 < 2) ||
        ((bVar2 != 0 && (uVar10 = FUN_1801faaf0(PTR_PTR_1802fcfe0), (char)uVar10 != '\0')))) &&
       (cVar9 = FUN_1801601d0(*(undefined8 *)puVar6,uVar10), cVar9 != '\0')) {
      lVar11 = *(longlong *)puVar6;
      local_28 = lVar11 + 0x30;
      local_50 = " -> already queued";
      local_48 = 0x25;
      local_60 = &local_50;
      local_58 = &DAT_180216218;
      local_40 = 1;
      local_38 = &local_60;
      local_30 = 1;
      FUN_180160ae0(lVar11,&local_40);
    }
  }
  return bVar1 ^ 1;
}


