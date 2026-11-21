/* FUN_180084930 @ 180084930 */

void FUN_180084930(uint *param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  char cVar4;
  uint uVar5;
  undefined8 local_78;
  undefined ***local_70;
  undefined8 local_68;
  longlong local_60;
  undefined **local_58;
  undefined *local_50;
  undefined *local_48;
  uint **local_40;
  uint *local_38;
  code *local_30;
  uint *local_28;
  code *local_20;
  
  puVar3 = PTR_PTR_1802fbba8;
  if (*(longlong *)PTR_DAT_1802fd448 == 0) {
    bVar1 = PTR_PTR_1802fbba8[0x10];
    uVar5 = (uint)bVar1;
    if (((bVar1 - 1 < 2) ||
        ((bVar1 != 0 && (uVar5 = FUN_1801faaf0(PTR_PTR_1802fbba8), (char)uVar5 != '\0')))) &&
       (cVar4 = FUN_1801601d0(*(undefined8 *)puVar3,uVar5), cVar4 != '\0')) {
      lVar2 = *(longlong *)puVar3;
      local_60 = lVar2 + 0x30;
      local_28 = param_1 + 1;
      local_30 = FUN_1800901b0;
      local_20 = FUN_1801310a0;
      local_48 = &DAT_18020d76a;
      local_40 = &local_38;
      local_58 = &local_48;
      local_50 = &DAT_18020d788;
      local_78 = 1;
      local_70 = &local_58;
      local_68 = 1;
      local_38 = param_1;
      FUN_180160ae0(lVar2,&local_78);
    }
  }
  uVar5 = *param_1;
  local_78 = 0x400000000000000;
  FUN_1801b2af0(param_2,(longlong)&local_78 + 5,3);
  local_78._0_1_ = 3;
  FUN_1801b2af0(param_2,&local_78,1);
  local_78 = (ulonglong)local_78._1_7_ << 8;
  FUN_1801b2af0(param_2,&local_78,1);
  local_78._0_4_ = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  FUN_1801b2af0(param_2,&local_78,4);
  uVar5 = param_1[1];
  local_78 = CONCAT44(local_78._4_4_,
                      uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                      uVar5 << 0x18);
  FUN_1801b2af0(param_2,&local_78,4);
  return;
}


