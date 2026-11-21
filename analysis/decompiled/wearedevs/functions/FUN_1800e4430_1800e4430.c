/* FUN_1800e4430 @ 1800e4430 */

void FUN_1800e4430(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  undefined8 ***local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 ***local_88;
  undefined8 local_80;
  longlong local_78;
  char *local_70;
  code *local_68;
  char **local_60;
  char **local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 *local_38;
  undefined1 local_29;
  undefined8 local_28;
  
  puVar4 = PTR_DAT_1802fd448;
  puVar3 = PTR_PTR_1802fb290;
  local_28 = 0xfffffffffffffffe;
  local_98 = param_1;
  local_48 = param_2;
  if (*(ulonglong *)PTR_DAT_1802fd448 < 2) {
    bVar1 = PTR_PTR_1802fb290[0x10];
    uVar6 = (uint)bVar1;
    if (bVar1 - 1 < 2) {
LAB_1800e4480:
      local_29 = 1;
      cVar5 = FUN_1801601d0(*(undefined8 *)puVar3,uVar6);
      if (cVar5 != '\0') {
        lVar2 = *(longlong *)puVar3;
        local_78 = lVar2 + 0x30;
        local_68 = FUN_180115390;
        local_60 = (char **)&DAT_18021555a;
        local_58 = &local_70;
        local_a8 = (undefined8 ***)&local_60;
        local_a0 = &DAT_1802154c8;
        local_90 = 1;
        local_88 = &local_a8;
        local_80 = 1;
        local_29 = 1;
        local_70 = (char *)&local_48;
        FUN_180160ae0(lVar2,&local_90);
      }
    }
    else if (bVar1 != 0) {
      local_29 = 1;
      uVar6 = FUN_1801faaf0(PTR_PTR_1802fb290);
      if ((char)uVar6 != '\0') goto LAB_1800e4480;
    }
  }
  puVar3 = PTR_PTR_1802fb280;
  if (*(longlong *)puVar4 != 0) goto LAB_1800e450a;
  bVar1 = PTR_PTR_1802fb280[0x10];
  uVar6 = (uint)bVar1;
  if (1 < bVar1 - 1) {
    if (bVar1 == 0) goto LAB_1800e450a;
    local_29 = 1;
    uVar6 = FUN_1801faaf0(PTR_PTR_1802fb280);
    if ((char)uVar6 == '\0') goto LAB_1800e450a;
  }
  local_29 = 1;
  cVar5 = FUN_1801601d0(*(undefined8 *)puVar3,uVar6);
  if (cVar5 != '\0') {
    lVar2 = *(longlong *)puVar3;
    local_78 = lVar2 + 0x30;
    local_70 = "sending connection error to error channel";
    local_68 = (code *)0x53;
    local_60 = &local_70;
    local_58 = (char **)&DAT_1802154c8;
    local_90 = 1;
    local_88 = (undefined8 ***)&local_60;
    local_80 = 1;
    local_29 = 1;
    FUN_180160ae0(lVar2,&local_90);
  }
LAB_1800e450a:
  local_29 = 0;
  plVar7 = (longlong *)FUN_1800aa7e0(param_1,local_48);
  if (plVar7 != (longlong *)0x0) {
    local_40 = *plVar7;
    if (local_40 != 0) {
      local_38 = (undefined8 *)plVar7[1];
      local_50 = plVar7;
      if ((code *)*local_38 != (code *)0x0) {
        (*(code *)*local_38)(local_40);
      }
      plVar7 = local_50;
      if (local_38[1] != 0) {
        thunk_FUN_1801d3330(local_40,local_38[1],local_38[2]);
      }
    }
    thunk_FUN_1801d3330(plVar7,0x18,8);
  }
  return;
}


