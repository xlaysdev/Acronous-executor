/* FUN_180084ac0 @ 180084ac0 */

void FUN_180084ac0(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 local_68;
  undefined ***local_60;
  longlong local_58;
  longlong local_50;
  undefined **local_48;
  undefined *local_40;
  undefined *local_38;
  longlong *local_30;
  longlong local_28;
  code *local_20;
  
  puVar3 = PTR_PTR_1802fc588;
  if (*(longlong *)PTR_DAT_1802fd448 == 0) {
    bVar1 = PTR_PTR_1802fc588[0x10];
    uVar5 = (uint)bVar1;
    if (((bVar1 - 1 < 2) ||
        ((bVar1 != 0 && (uVar5 = FUN_1801faaf0(PTR_PTR_1802fc588), (char)uVar5 != '\0')))) &&
       (cVar4 = FUN_1801601d0(*(undefined8 *)puVar3,uVar5), cVar4 != '\0')) {
      lVar2 = *(longlong *)puVar3;
      local_50 = lVar2 + 0x30;
      local_28 = (longlong)param_1 + 0x24;
      local_20 = FUN_1801310a0;
      local_38 = &DAT_18020d7a8;
      local_30 = &local_28;
      local_48 = &local_38;
      local_40 = &DAT_18020d788;
      local_68 = (undefined **)0x1;
      local_60 = &local_48;
      local_58 = 1;
      FUN_180160ae0(lVar2,&local_68);
    }
  }
  uVar6 = param_1[2] + 8;
  local_68 = (undefined **)
             (uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 | (uVar6 & 0xff0000000000) >> 0x18
              | (uVar6 & 0xff00000000) >> 8 | (uVar6 & 0xff000000) << 8 | (uVar6 & 0xff0000) << 0x18
              | (uVar6 & 0xff00) << 0x28 | uVar6 << 0x38);
  FUN_1801b2af0(param_2,(longlong)&local_68 + 5,3);
  local_68._0_1_ = 7;
  FUN_1801b2af0(param_2,&local_68,1);
  local_68 = (undefined **)((ulonglong)local_68._1_7_ << 8);
  FUN_1801b2af0(param_2,&local_68,1);
  local_68 = (undefined **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_1801b2af0(param_2,&local_68,4);
  uVar5 = *(uint *)(param_1 + 4);
  local_68._0_4_ = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  FUN_1801b2af0(param_2,&local_68,4);
  uVar5 = *(uint *)((longlong)param_1 + 0x24);
  local_68 = (undefined **)
             CONCAT44(local_68._4_4_,
                      uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                      uVar5 << 0x18);
  FUN_1801b2af0(param_2,&local_68,4);
  lVar2 = param_1[2];
  if (lVar2 == 0) {
    local_60 = (undefined ***)param_1[1];
    local_50 = 0;
    local_68 = &PTR_LAB_18020de18;
  }
  else {
    (**(code **)*param_1)(&local_68,param_1 + 3,param_1[1],lVar2);
  }
  local_58 = lVar2;
  FUN_180046750(param_2,&local_68);
  return;
}


