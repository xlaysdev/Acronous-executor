/* FUN_180061f80 @ 180061f80 */

void FUN_180061f80(undefined8 param_1,void *param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  char cVar4;
  uint uVar5;
  int *piVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 local_1c0;
  longlong **local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  longlong *local_88;
  undefined *local_80;
  longlong local_78;
  void *local_70;
  longlong local_68;
  longlong *local_60 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined8 local_38;
  
  puVar3 = PTR_PTR_1802fbbc0;
  local_38 = 0xfffffffffffffffe;
  local_70 = param_2;
  if (*(longlong *)PTR_DAT_1802fd448 == 0) {
    bVar1 = PTR_PTR_1802fbbc0[0x10];
    uVar5 = (uint)bVar1;
    if (1 < bVar1 - 1) {
      if (bVar1 != 0) {
        local_39 = 1;
        uVar5 = FUN_1801faaf0(PTR_PTR_1802fbbc0);
        if ((char)uVar5 != '\0') goto LAB_18006211a;
      }
      goto LAB_180061fc5;
    }
LAB_18006211a:
    local_39 = 1;
    cVar4 = FUN_1801601d0(*(undefined8 *)puVar3,uVar5);
    if (cVar4 == '\0') goto LAB_180061fc5;
    lVar8 = *(longlong *)puVar3;
    local_39 = 1;
    local_78 = FUN_180152e90(param_4);
    local_1a8 = lVar8 + 0x30;
    local_78 = local_78 + 300;
    local_88 = &local_78;
    local_80 = &DAT_18020a038;
    local_1c0 = 1;
    local_1b8 = &local_88;
    local_1b0 = 1;
    local_39 = 1;
    FUN_180160410(&local_68,lVar8,&local_1c0);
    if (local_68 != 2) {
      local_3b = 1;
      FUN_180161780(&local_68,&local_50);
    }
  }
  else {
LAB_180061fc5:
    local_68 = 2;
    local_48 = 0;
  }
  local_3a = 1;
  piVar6 = (int *)FUN_180152f00(param_4);
  memcpy(&local_1b0,local_70,0x128);
  local_1c0 = 0;
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  local_3a = 0;
  FUN_1800920e0(param_3,uVar2,&local_1c0);
  if (*piVar6 == 1) {
    if (*(ulonglong *)(piVar6 + 4) < *(ulonglong *)(param_3 + 0x10)) {
      lVar8 = *(ulonglong *)(piVar6 + 4) * 0x138;
      if (*(int *)(*(longlong *)(param_3 + 8) + lVar8) != 2) {
        puVar7 = (undefined8 *)(*(longlong *)(param_3 + 8) + lVar8);
        *puVar7 = 1;
        puVar7[1] = uVar2;
        goto LAB_180062069;
      }
    }
    local_3a = 0;
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("invalid key",0xb,&PTR_s_C__Users_burne__cargo_registry_s_18020d9b8);
  }
  piVar6[0] = 1;
  piVar6[1] = 0;
  *(undefined8 *)(piVar6 + 2) = uVar2;
LAB_180062069:
  *(undefined8 *)(piVar6 + 4) = uVar2;
  local_3a = 0;
  FUN_18012e6d0(param_1,param_4,param_5);
  if ((int)local_68 != 2) {
    local_3b = 0;
    FUN_180161750(&local_68,&local_50);
    lVar8 = local_68;
    if ((local_68 != 2) && (FUN_1801617b0(&local_68,local_50), lVar8 != 0)) {
      LOCK();
      *local_60[0] = *local_60[0] + -1;
      UNLOCK();
      if (*local_60[0] == 0) {
        local_39 = 0;
        FUN_18003cc40(local_60);
      }
    }
  }
  return;
}


