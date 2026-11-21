/* FUN_1800b88b0 @ 1800b88b0 */

char * FUN_1800b88b0(char *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined *puVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  char local_e0 [40];
  char *local_b8;
  undefined8 local_b0;
  char **local_a8;
  undefined *local_a0;
  undefined **local_98;
  char ***local_90;
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined4 local_74;
  char local_70;
  undefined7 uStack_6f;
  undefined1 local_68;
  undefined4 uStack_67;
  undefined2 uStack_63;
  char cStack_61;
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  longlong lStack_48;
  undefined1 local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  lVar1 = param_2 + 0x4c8;
  cVar4 = FUN_18008d910(lVar1);
  if (cVar4 == '\0') {
    lVar2 = param_2 + 1000;
    local_60 = param_2 + 0x4d8;
    lStack_58 = param_2 + 0x4a0;
    local_70 = (char)(param_2 + 0x4c0);
    uStack_6f = (undefined7)((ulonglong)(param_2 + 0x4c0) >> 8);
    local_68 = (undefined1)lVar2;
    uStack_67 = (undefined4)((ulonglong)lVar2 >> 8);
    uStack_63 = (undefined2)((ulonglong)lVar2 >> 0x28);
    cStack_61 = (char)((ulonglong)lVar2 >> 0x38);
    local_50 = *(longlong *)(param_2 + 0x4c8) + 0x10;
    lStack_48 = *(longlong *)(param_2 + 0x4d0) + 0x10;
    local_40 = 0;
    local_78 = FUN_180089890(&local_50);
    local_74 = 0;
    local_98 = &PTR_LAB_180209fa0;
    local_90 = (char ***)0x1;
    local_88 = (undefined1  [16])0x0;
    FUN_180136d10(lVar2,&local_98);
  }
  bVar5 = FUN_18008d910(lVar1);
  FUN_18005de00(local_e0,param_2,param_3);
  if (local_e0[0] == '\x03') {
    local_70 = '\x05';
  }
  else {
    if (local_e0[0] == '\x04') {
      local_70 = '\x06';
      bVar5 = bVar5 & 1;
    }
    else {
      FUN_18012e200(&local_70,local_e0);
      bVar5 = bVar5 & local_70 == '\x06';
    }
    if ((bVar5 != 0) && (cVar4 = FUN_18008d910(lVar1), puVar3 = PTR_PTR_1802fcdd0, cVar4 == '\0')) {
      if (*(longlong *)PTR_DAT_1802fd448 == 0) {
        bVar5 = PTR_PTR_1802fcdd0[0x10];
        uVar6 = (uint)bVar5;
        if (((bVar5 - 1 < 2) ||
            ((bVar5 != 0 && (uVar6 = FUN_1801faaf0(PTR_PTR_1802fcdd0), (char)uVar6 != '\0')))) &&
           (cVar4 = FUN_1801601d0(*(undefined8 *)puVar3,uVar6), cVar4 != '\0')) {
          lVar1 = *(longlong *)puVar3;
          local_b8 = "last stream closed during poll, wake again";
          local_b0 = 0x55;
          local_a8 = &local_b8;
          local_a0 = &DAT_180210a98;
          local_98 = (undefined **)0x1;
          local_90 = &local_a8;
          local_88._8_8_ = lVar1 + 0x30;
          local_88._0_8_ = 1;
          FUN_180160ae0(lVar1,&local_98);
        }
      }
      (**(code **)(*(longlong *)*param_3 + 0x10))(((longlong *)*param_3)[1]);
    }
  }
  *(longlong *)(param_1 + 0x20) = local_50;
  *(longlong *)(param_1 + 0x10) = local_60;
  *(longlong *)(param_1 + 0x18) = lStack_58;
  *param_1 = local_70;
  *(ulonglong *)(param_1 + 1) = CONCAT17(local_68,uStack_6f);
  *(undefined4 *)(param_1 + 9) = uStack_67;
  *(undefined2 *)(param_1 + 0xd) = uStack_63;
  param_1[0xf] = cStack_61;
  return param_1;
}


