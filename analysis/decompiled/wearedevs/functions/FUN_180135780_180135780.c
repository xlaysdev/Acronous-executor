/* FUN_180135780 @ 180135780 */

undefined8 * FUN_180135780(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined1 uVar10;
  ulonglong uVar11;
  undefined1 *local_a8;
  code *local_a0;
  undefined *local_98;
  undefined1 **local_90;
  undefined **local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined ***local_70;
  undefined8 local_68;
  undefined *local_60;
  int local_58;
  undefined1 local_54;
  int local_50;
  undefined1 uStack_4c;
  undefined8 *local_48;
  undefined1 local_39;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_39 = (undefined1)(param_2 >> 0x20);
  if ((*(longlong *)PTR_DAT_1802fd448 == 0) &&
     (((uVar8 = (uint)DAT_1802fc2c8, uVar8 - 1 < 2 ||
       ((uVar8 != 0 &&
        (local_48 = param_3, uVar8 = FUN_1801faaf0(&PTR_DAT_1802fc2b8), param_3 = local_48,
        (char)uVar8 != '\0')))) &&
      (local_48 = param_3, cVar6 = FUN_1801601d0(PTR_DAT_1802fc2b8,uVar8), param_3 = local_48,
      cVar6 != '\0')))) {
    local_60 = PTR_DAT_1802fc2b8 + 0x30;
    local_a8 = &local_39;
    local_a0 = FUN_1801363a0;
    local_98 = &DAT_18024b7f8;
    local_90 = &local_a8;
    local_88 = &local_98;
    local_80 = &DAT_18024a3a8;
    local_78 = 1;
    local_70 = &local_88;
    local_68 = 1;
    FUN_180160ae0(PTR_DAT_1802fc2b8,&local_78);
    param_3 = local_48;
  }
  iVar9 = (int)param_2;
  if (iVar9 == 0) {
    uVar5 = 0x12;
    goto LAB_180135a58;
  }
  if ((param_2 & 0x800000000) == 0) {
    uVar11 = 0;
  }
  else {
    if (param_3[1] == 0) {
      uVar5 = 0x13;
      goto LAB_180135a58;
    }
    uVar11 = (ulonglong)*(byte *)*param_3;
    local_48 = param_3;
    FUN_1801b2540(param_3,1);
    param_3 = local_48;
  }
  if ((param_2 & 0x2000000000) == 0) {
    uVar10 = 2;
  }
  else {
    uVar5 = 0x13;
    if ((ulonglong)param_3[1] < 5) goto LAB_180135a58;
    uVar8 = *(uint *)*param_3;
    uVar7 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | (uVar8 & 0x7f) << 0x18
    ;
    uStack_4c = (undefined1)((uint *)*param_3)[1];
    uVar4 = (ulonglong)local_78 >> 0x28;
    local_78._5_3_ = (undefined3)uVar4;
    local_78._0_5_ = CONCAT14(uStack_4c,uVar7);
    local_50 = CONCAT31((int3)(uVar7 >> 8),(char)(uVar8 >> 0x18));
    uVar5 = 0x15;
    if (local_50 == iVar9) goto LAB_180135a58;
    local_48 = param_3;
    FUN_1801b2540(param_3,5);
    uVar10 = (undefined1)((uVar8 & 0xff) >> 7);
    param_3 = local_48;
    local_58 = local_50;
    local_54 = uStack_4c;
  }
  if (uVar11 != 0) {
    uVar5 = 0xd;
    if ((ulonglong)param_3[1] < uVar11) {
LAB_180135a58:
      *(undefined1 *)(param_1 + 1) = uVar5;
      *param_1 = 3;
      FUN_1801b2a70(param_3);
      return param_1;
    }
    param_3[1] = param_3[1] - uVar11;
  }
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[4] = 8;
  param_1[7] = 8;
  param_1[8] = 0;
  param_1[9] = 2;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  *(int *)(param_1 + 0x22) = local_58;
  *(undefined1 *)((longlong)param_1 + 0x114) = local_54;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  param_1[0x24] = *param_3;
  param_1[0x25] = uVar1;
  param_1[0x26] = uVar2;
  param_1[0x27] = uVar3;
  *(undefined1 *)(param_1 + 0xc) = 0xc;
  param_1[0xf] = 0;
  param_1[0x13] = 0;
  param_1[0x17] = 0;
  param_1[0x1b] = 0;
  *(undefined2 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)((longlong)param_1 + 0x115) = uVar10;
  *(undefined2 *)((longlong)param_1 + 0x116) = 0;
  *(int *)(param_1 + 0x23) = iVar9;
  *(undefined1 *)((longlong)param_1 + 0x11c) = local_39;
  return param_1;
}


