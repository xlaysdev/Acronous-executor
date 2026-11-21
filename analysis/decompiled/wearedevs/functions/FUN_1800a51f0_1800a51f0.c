/* FUN_1800a51f0 @ 1800a51f0 */

void FUN_1800a51f0(undefined1 *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  byte bVar2;
  longlong lVar3;
  undefined *puVar4;
  char cVar5;
  uint uVar6;
  undefined8 local_80;
  undefined ***local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined **local_58;
  undefined *local_50;
  undefined *local_48;
  undefined1 **local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined8 *local_28;
  code *local_20;
  
  puVar4 = PTR_PTR_1802fc828;
  local_60 = 8;
  if (*(longlong *)PTR_DAT_1802fd448 == 0) {
    bVar2 = PTR_PTR_1802fc828[0x10];
    uVar6 = (uint)bVar2;
    if (((bVar2 - 1 < 2) ||
        ((bVar2 != 0 && (uVar6 = FUN_1801faaf0(PTR_PTR_1802fc828), (char)uVar6 != '\0')))) &&
       (cVar5 = FUN_1801601d0(*(undefined8 *)puVar4,uVar6), cVar5 != '\0')) {
      lVar3 = *(longlong *)puVar4;
      local_68 = lVar3 + 0x30;
      local_30 = &LAB_1801edcd0;
      local_28 = &local_60;
      local_20 = FUN_1801ee720;
      local_48 = &DAT_1802102b8;
      local_40 = &local_38;
      local_58 = &local_48;
      local_50 = &DAT_1802102d8;
      local_80 = 1;
      local_78 = &local_58;
      local_70 = 1;
      local_38 = param_1;
      FUN_180160ae0(lVar3,&local_80);
    }
  }
  uVar1 = *param_1;
  local_80 = 0x800000000000000;
  FUN_1801b2af0(param_2,(longlong)&local_80 + 5,3);
  local_80._0_1_ = 6;
  FUN_1801b2af0(param_2,&local_80,1);
  local_80 = CONCAT71(local_80._1_7_,uVar1);
  FUN_1801b2af0(param_2,&local_80,1);
  local_80 = local_80 & 0xffffffff00000000;
  FUN_1801b2af0(param_2,&local_80,4);
  FUN_1801b2af0(param_2,param_1 + 1,8);
  return;
}


