/* FUN_1800ebc60 @ 1800ebc60 */

byte FUN_1800ebc60(char *param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  char **local_60;
  undefined *local_58;
  char *local_50;
  undefined8 local_48;
  undefined8 local_40;
  char ***local_38;
  undefined8 local_30;
  longlong local_28;
  
  puVar7 = PTR_DAT_1802fd448;
  puVar5 = PTR_PTR_1802fcfd0;
  if (*(longlong *)PTR_DAT_1802fd448 == 0) {
    bVar1 = PTR_PTR_1802fcfd0[0x10];
    uVar9 = (uint)bVar1;
    if (((bVar1 - 1 < 2) ||
        ((bVar1 != 0 && (uVar9 = FUN_1801faaf0(PTR_PTR_1802fcfd0), (char)uVar9 != '\0')))) &&
       (cVar8 = FUN_1801601d0(*(undefined8 *)puVar5,uVar9), cVar8 != '\0')) {
      lVar10 = *(longlong *)puVar5;
      local_28 = lVar10 + 0x30;
      local_50 = "Queue::push_front";
      local_48 = 0x23;
      local_60 = &local_50;
      local_58 = &DAT_180216218;
      local_40 = 1;
      local_38 = &local_60;
      local_30 = 1;
      FUN_180160ae0(lVar10,&local_40);
    }
  }
  lVar10 = FUN_180152e90(param_2);
  puVar5 = PTR_PTR_1802fcfc8;
  bVar1 = *(byte *)(lVar10 + 0x139);
  if (bVar1 == 0) {
    lVar10 = FUN_180152f00(param_2);
    *(undefined1 *)(lVar10 + 0x139) = 1;
    puVar6 = PTR_PTR_1802fcfc0;
    puVar5 = PTR_PTR_1802fcfb8;
    lVar10 = *(longlong *)puVar7;
    if (*param_1 == '\0') {
      if (lVar10 == 0) {
        bVar2 = PTR_PTR_1802fcfb8[0x10];
        uVar9 = (uint)bVar2;
        if (((bVar2 - 1 < 2) ||
            ((bVar2 != 0 && (uVar9 = FUN_1801faaf0(PTR_PTR_1802fcfb8), (char)uVar9 != '\0')))) &&
           (cVar8 = FUN_1801601d0(*(undefined8 *)puVar5,uVar9), cVar8 != '\0')) {
          lVar10 = *(longlong *)puVar5;
          local_28 = lVar10 + 0x30;
          local_50 = " -> first entry";
          local_48 = 0x1f;
          local_60 = &local_50;
          local_58 = &DAT_180216218;
          local_40 = 1;
          local_38 = &local_60;
          local_30 = 1;
          FUN_180160ae0(lVar10,&local_40);
        }
      }
      param_1[0] = '\x01';
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      uVar3 = *(undefined4 *)(param_2 + 8);
      uVar4 = *(undefined4 *)(param_2 + 0xc);
      *(undefined4 *)(param_1 + 4) = uVar3;
      *(undefined4 *)(param_1 + 8) = uVar4;
      *(undefined4 *)(param_1 + 0xc) = uVar3;
      *(undefined4 *)(param_1 + 0x10) = uVar4;
    }
    else {
      if (lVar10 == 0) {
        bVar2 = PTR_PTR_1802fcfc0[0x10];
        uVar9 = (uint)bVar2;
        if (((bVar2 - 1 < 2) ||
            ((bVar2 != 0 && (uVar9 = FUN_1801faaf0(PTR_PTR_1802fcfc0), (char)uVar9 != '\0')))) &&
           (cVar8 = FUN_1801601d0(*(undefined8 *)puVar6,uVar9), cVar8 != '\0')) {
          lVar10 = *(longlong *)puVar6;
          local_28 = lVar10 + 0x30;
          local_50 = " -> existing entries";
          local_48 = 0x29;
          local_60 = &local_50;
          local_58 = &DAT_180216218;
          local_40 = 1;
          local_38 = &local_60;
          local_30 = 1;
          FUN_180160ae0(lVar10,&local_40);
        }
      }
      lVar10 = FUN_180152f00(param_2);
      *(undefined4 *)(lVar10 + 0xd0) = 1;
      *(undefined8 *)(lVar10 + 0xd4) = *(undefined8 *)(param_1 + 4);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 8);
    }
  }
  else if (*(longlong *)puVar7 == 0) {
    bVar2 = PTR_PTR_1802fcfc8[0x10];
    uVar9 = (uint)bVar2;
    if (((bVar2 - 1 < 2) ||
        ((bVar2 != 0 && (uVar9 = FUN_1801faaf0(PTR_PTR_1802fcfc8), (char)uVar9 != '\0')))) &&
       (cVar8 = FUN_1801601d0(*(undefined8 *)puVar5,uVar9), cVar8 != '\0')) {
      lVar10 = *(longlong *)puVar5;
      local_28 = lVar10 + 0x30;
      local_50 = " -> already queued";
      local_48 = 0x25;
      local_60 = &local_50;
      local_58 = &DAT_180216218;
      local_40 = 1;
      local_38 = &local_60;
      local_30 = 1;
      FUN_180160ae0(lVar10,&local_40);
    }
  }
  return bVar1 ^ 1;
}


