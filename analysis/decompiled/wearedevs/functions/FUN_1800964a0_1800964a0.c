/* FUN_1800964a0 @ 1800964a0 */

ulonglong FUN_1800964a0(longlong param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                       longlong param_5,longlong *param_6)

{
  undefined1 uVar1;
  byte bVar2;
  bool bVar3;
  undefined *puVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 local_1b8;
  undefined ***local_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  void *local_90;
  code *local_88;
  longlong local_80;
  undefined1 *local_78;
  undefined *local_70;
  void **local_68;
  undefined **local_60;
  undefined *local_58;
  void *local_50;
  undefined1 local_41;
  undefined8 local_40;
  
  puVar4 = PTR_PTR_1802fc5b0;
  local_40 = 0xfffffffffffffffe;
  local_50 = param_2;
  if (*(longlong *)PTR_DAT_1802fd448 == 0) {
    bVar2 = PTR_PTR_1802fc5b0[0x10];
    uVar6 = (uint)bVar2;
    if (bVar2 - 1 < 2) {
LAB_1800965e1:
      local_41 = 1;
      cVar5 = FUN_1801601d0(*(undefined8 *)puVar4,uVar6);
      if (cVar5 != '\0') {
        lVar7 = *(longlong *)puVar4;
        local_1a0 = lVar7 + 0x30;
        local_80 = param_1 + 0x6c;
        local_90 = local_50;
        local_88 = FUN_180136270;
        local_78 = &LAB_180096fe0;
        local_70 = &DAT_18020f412;
        local_68 = &local_90;
        local_60 = &local_70;
        local_58 = &DAT_18020f2b0;
        local_1b8 = 1;
        local_1b0 = &local_60;
        local_1a8 = 1;
        local_41 = 1;
        FUN_180160ae0(lVar7,&local_1b8);
      }
    }
    else if (bVar2 != 0) {
      local_41 = 1;
      uVar6 = FUN_1801faaf0(PTR_PTR_1802fc5b0);
      if ((char)uVar6 != '\0') goto LAB_1800965e1;
    }
  }
  local_41 = 1;
  uVar6 = FUN_180137360(local_50);
  if ((char)uVar6 != '\r') {
LAB_180096595:
    FUN_18009a670(local_50);
    FUN_1800663c0((longlong)local_50 + 0x60);
    return (ulonglong)uVar6;
  }
  uVar1 = *(undefined1 *)((longlong)local_50 + 0x11c);
  local_41 = 1;
  lVar7 = FUN_180152f00(param_4);
  local_41 = 1;
  uVar6 = FUN_180138f00(lVar7 + 0x40,CONCAT31((int3)(uVar6 >> 8),uVar1) & 0xffffff01);
  if ((char)uVar6 != '\r') goto LAB_180096595;
  local_1b8 = CONCAT71(local_1b8._1_7_,*(undefined1 *)(param_5 + 0x68));
  local_41 = 1;
  cVar5 = FUN_18014a2e0(&local_1b8,*(undefined4 *)((longlong)local_50 + 0x118));
  if (cVar5 != '\0') {
    local_41 = 1;
    lVar7 = FUN_180152e90(param_4);
    if (*(char *)(lVar7 + 0x13d) == '\0') {
      local_41 = 1;
      bVar3 = true;
      FUN_18012e6c0(param_1 + 8,param_4);
      goto LAB_1800966ee;
    }
  }
  bVar3 = false;
LAB_1800966ee:
  memcpy(&local_1b0,local_50,0x120);
  local_1b8 = CONCAT71(local_1b8._1_7_,1);
  local_41 = 0;
  FUN_180061f80(param_1 + 8,&local_1b8,param_3,param_4,param_6);
  uVar8 = CONCAT71((uint7)(uint3)(uVar6 >> 8),0xd);
  if (!bVar3) {
    return uVar8;
  }
  lVar7 = *param_6;
  *param_6 = 0;
  if (lVar7 == 0) {
    return uVar8;
  }
  local_41 = 0;
  (**(code **)(lVar7 + 8))(param_6[1]);
  return uVar8;
}


