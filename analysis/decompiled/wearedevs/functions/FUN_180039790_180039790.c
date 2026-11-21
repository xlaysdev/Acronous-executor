/* FUN_180039790 @ 180039790 */

void FUN_180039790(uint *param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  char cVar4;
  uint uVar5;
  undefined8 local_68;
  undefined ***local_60;
  undefined8 local_58;
  longlong local_50;
  undefined **local_48;
  undefined *local_40;
  undefined *local_38;
  uint **local_30;
  uint *local_28;
  code *local_20;
  
  puVar3 = PTR_PTR_1802fbba0;
  if (*(longlong *)PTR_DAT_1802fd448 == 0) {
    bVar1 = PTR_PTR_1802fbba0[0x10];
    uVar5 = (uint)bVar1;
    if (((bVar1 - 1 < 2) ||
        ((bVar1 != 0 && (uVar5 = FUN_1801faaf0(PTR_PTR_1802fbba0), (char)uVar5 != '\0')))) &&
       (cVar4 = FUN_1801601d0(*(undefined8 *)puVar3,uVar5), cVar4 != '\0')) {
      lVar2 = *(longlong *)puVar3;
      local_50 = lVar2 + 0x30;
      local_20 = FUN_18003ea40;
      local_38 = &DAT_180206f60;
      local_30 = &local_28;
      local_48 = &local_38;
      local_40 = &DAT_180206f80;
      local_68 = 1;
      local_60 = &local_48;
      local_58 = 1;
      local_28 = param_1;
      FUN_180160ae0(lVar2,&local_68);
    }
  }
  uVar5 = *param_1;
  local_68 = 0x400000000000000;
  FUN_1801b2af0(param_2,(longlong)&local_68 + 5,3);
  local_68._0_1_ = 8;
  FUN_1801b2af0(param_2,&local_68,1);
  local_68 = (ulonglong)local_68._1_7_ << 8;
  FUN_1801b2af0(param_2,&local_68,1);
  local_68._0_4_ = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  FUN_1801b2af0(param_2,&local_68,4);
  uVar5 = param_1[1];
  local_68 = CONCAT44(local_68._4_4_,
                      uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                      uVar5 << 0x18);
  FUN_1801b2af0(param_2,&local_68,4);
  return;
}


