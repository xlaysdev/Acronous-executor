/* FUN_180061b50 @ 180061b50 */

void FUN_180061b50(longlong param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *local_310;
  undefined *local_308;
  undefined8 local_1e8;
  longlong **local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  char **local_c0;
  undefined *local_b8;
  undefined8 **local_b0;
  undefined *local_a8;
  char *local_a0;
  undefined8 local_98;
  longlong local_90;
  char ***local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 *local_70;
  longlong local_68;
  longlong *local_60 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  puVar3 = PTR_DAT_1802fd448;
  puVar2 = PTR_PTR_1802fbbb0;
  local_40 = 0xfffffffffffffffe;
  if (*(longlong *)PTR_DAT_1802fd448 == 0) {
    bVar1 = PTR_PTR_1802fbbb0[0x10];
    uVar5 = (uint)bVar1;
    if (((bVar1 - 1 < 2) ||
        ((bVar1 != 0 && (uVar5 = FUN_1801faaf0(PTR_PTR_1802fbbb0), (char)uVar5 != '\0')))) &&
       (cVar4 = FUN_1801601d0(*(undefined8 *)puVar2,uVar5), cVar4 != '\0')) {
      lVar7 = *(longlong *)puVar2;
      local_90 = FUN_180152e90(param_3);
      local_90 = local_90 + 300;
      local_310 = &local_90;
      local_308 = &DAT_18020a038;
      local_1e8 = 1;
      local_1e0 = &local_310;
      local_1d8 = 1;
      local_1d0 = lVar7 + 0x30;
      FUN_180160410(&local_68,lVar7,&local_1e8);
      if (local_68 != 2) {
        FUN_180161780(&local_68,&local_50);
      }
      goto LAB_180061c7c;
    }
  }
  local_68 = 2;
  local_48 = 0;
LAB_180061c7c:
  while( true ) {
    uVar6 = FUN_180152f00(param_3);
    FUN_180084cb0(&local_310,uVar6,param_2);
    if ((char)local_310 == '\t') break;
    memcpy(&local_1e8,&local_310,0x128);
    puVar2 = PTR_PTR_1802fbbb8;
    if (*(longlong *)puVar3 == 0) {
      bVar1 = PTR_PTR_1802fbbb8[0x10];
      uVar5 = (uint)bVar1;
      if (((bVar1 - 1 < 2) ||
          ((bVar1 != 0 && (uVar5 = FUN_1801faaf0(PTR_PTR_1802fbbb8), (char)uVar5 != '\0')))) &&
         (cVar4 = FUN_1801601d0(*(undefined8 *)puVar2,uVar5), cVar4 != '\0')) {
        lVar7 = *(longlong *)puVar2;
        local_78 = lVar7 + 0x30;
        local_a0 = "dropping";
        local_98 = 0x11;
        local_c0 = &local_a0;
        local_b8 = &DAT_180209b90;
        local_b0 = &local_70;
        local_a8 = &DAT_18020a160;
        local_90 = 1;
        local_88 = &local_c0;
        local_80 = 2;
        local_70 = &local_1e8;
        FUN_180160ae0(lVar7,&local_90);
      }
    }
    FUN_180066870(&local_1e8);
  }
  lVar7 = FUN_180152f00(param_3);
  *(undefined8 *)(lVar7 + 0x90) = 0;
  lVar7 = FUN_180152f00(param_3);
  *(undefined4 *)(lVar7 + 0x130) = 0;
  if ((*(int *)(param_1 + 0x4c) == 1) &&
     (*(longlong *)(param_3 + 8) == *(longlong *)(param_1 + 0x50))) {
    *(undefined4 *)(param_1 + 0x4c) = 2;
  }
  if ((((int)local_68 != 2) && (FUN_180161750(&local_68,&local_50), lVar7 = local_68, local_68 != 2)
      ) && (FUN_1801617b0(&local_68,local_50), lVar7 != 0)) {
    LOCK();
    *local_60[0] = *local_60[0] + -1;
    UNLOCK();
    if (*local_60[0] == 0) {
      FUN_18003cc40(local_60);
    }
  }
  return;
}


