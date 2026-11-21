/* FUN_1800e4700 @ 1800e4700 */

void FUN_1800e4700(undefined4 *param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  char cVar4;
  uint uVar5;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined ***local_60;
  undefined8 local_58;
  longlong local_50;
  undefined4 *local_48;
  code *local_40;
  undefined *local_38;
  undefined4 **local_30;
  undefined **local_28;
  undefined *local_20;
  undefined8 local_18;
  
  puVar3 = PTR_PTR_1802fb2b0;
  local_18 = 0xfffffffffffffffe;
  local_78 = *(undefined8 *)(param_1 + 0xc);
  local_a8 = *param_1;
  uStack_a4 = param_1[1];
  uStack_a0 = param_1[2];
  uStack_9c = param_1[3];
  local_98 = param_1[4];
  uStack_94 = param_1[5];
  uStack_90 = param_1[6];
  uStack_8c = param_1[7];
  local_88 = param_1[8];
  uStack_84 = param_1[9];
  uStack_80 = param_1[10];
  uStack_7c = param_1[0xb];
  if (*(longlong *)PTR_DAT_1802fd448 == 0) {
    bVar1 = PTR_PTR_1802fb2b0[0x10];
    uVar5 = (uint)bVar1;
    if (((bVar1 - 1 < 2) ||
        ((bVar1 != 0 && (uVar5 = FUN_1801faaf0(PTR_PTR_1802fb2b0), (char)uVar5 != '\0')))) &&
       (cVar4 = FUN_1801601d0(*(undefined8 *)puVar3,uVar5), cVar4 != '\0')) {
      lVar2 = *(longlong *)puVar3;
      local_50 = lVar2 + 0x30;
      local_48 = &local_a8;
      local_40 = FUN_180105370;
      local_38 = &DAT_180215690;
      local_28 = &local_38;
      local_20 = &DAT_1802154c8;
      local_68 = 1;
      local_60 = &local_28;
      local_58 = 1;
      local_30 = &local_48;
      FUN_180160ae0(lVar2,&local_68);
    }
  }
  FUN_18009acf0(&local_a8);
  return;
}


