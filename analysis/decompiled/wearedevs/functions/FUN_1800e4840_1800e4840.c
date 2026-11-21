/* FUN_1800e4840 @ 1800e4840 */

void FUN_1800e4840(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  char cVar4;
  uint uVar5;
  undefined8 local_90;
  undefined ***local_88;
  undefined8 local_80;
  longlong local_78;
  longlong **local_70;
  undefined1 *local_68;
  undefined *local_60;
  longlong ***local_58;
  undefined **local_50;
  undefined *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong local_30;
  undefined8 *local_28;
  undefined8 local_20;
  
  puVar3 = PTR_PTR_1802fb288;
  local_20 = 0xfffffffffffffffe;
  local_38 = param_1;
  if (*(ulonglong *)PTR_DAT_1802fd448 < 2) {
    bVar1 = PTR_PTR_1802fb288[0x10];
    uVar5 = (uint)bVar1;
    if (((bVar1 - 1 < 2) ||
        ((bVar1 != 0 && (uVar5 = FUN_1801faaf0(PTR_PTR_1802fb288), (char)uVar5 != '\0')))) &&
       (cVar4 = FUN_1801601d0(*(undefined8 *)puVar3,uVar5), cVar4 != '\0')) {
      lVar2 = *(longlong *)puVar3;
      local_78 = lVar2 + 0x30;
      local_68 = &LAB_180115400;
      local_60 = &DAT_18021555a;
      local_58 = &local_70;
      local_50 = &local_60;
      local_48 = &DAT_1802154c8;
      local_90 = 1;
      local_88 = &local_50;
      local_80 = 1;
      local_70 = &local_38;
      FUN_180160ae0(lVar2,&local_90);
      param_1 = local_38;
    }
  }
  local_30 = *param_1;
  if (local_30 != 0) {
    local_28 = (undefined8 *)param_1[1];
    local_40 = param_1;
    if ((code *)*local_28 != (code *)0x0) {
      (*(code *)*local_28)(local_30);
    }
    param_1 = local_40;
    if (local_28[1] != 0) {
      thunk_FUN_1801d3330(local_30,local_28[1],local_28[2]);
    }
  }
  thunk_FUN_1801d3330(param_1,0x18,8);
  return;
}


