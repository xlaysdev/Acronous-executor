/* FUN_1800967f0 @ 1800967f0 */

ulonglong FUN_1800967f0(longlong param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6)

{
  byte bVar1;
  undefined *puVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 local_198;
  undefined8 **local_190;
  undefined8 local_188;
  longlong local_180;
  void *local_70;
  code *local_68;
  undefined *local_60;
  void **local_58;
  undefined **local_50;
  undefined *local_48;
  void *local_40;
  undefined1 local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_31 = 1;
  local_40 = param_2;
  uVar4 = FUN_180137360(param_2);
  uVar7 = (ulonglong)uVar4;
  if ((char)uVar4 == '\r') {
    local_31 = 1;
    lVar5 = FUN_180152e90(param_4);
    iVar6 = 6;
    if (3 < *(uint *)(lVar5 + 0x40)) {
      iVar6 = *(uint *)(lVar5 + 0x40) - 4;
    }
    uVar7 = CONCAT71((uint7)(uint3)(uVar4 >> 8),1);
    if (((iVar6 == 5) || (iVar6 == 3)) && (*(char *)(lVar5 + 0x44) == '\x01')) {
      local_31 = 1;
      lVar5 = FUN_180152f00(param_4);
      local_31 = 1;
      FUN_180137f70(lVar5 + 0x40);
      puVar2 = PTR_PTR_1802fc5b8;
      if (*(longlong *)PTR_DAT_1802fd448 == 0) {
        bVar1 = PTR_PTR_1802fc5b8[0x10];
        uVar4 = (uint)bVar1;
        if (bVar1 - 1 < 2) {
LAB_180096955:
          local_31 = 1;
          cVar3 = FUN_1801601d0(*(undefined8 *)puVar2,uVar4);
          if (cVar3 != '\0') {
            lVar5 = *(longlong *)puVar2;
            local_180 = lVar5 + 0x30;
            local_70 = local_40;
            local_68 = FUN_180136270;
            local_60 = &DAT_18020f439;
            local_58 = &local_70;
            local_50 = &local_60;
            local_48 = &DAT_18020f2b0;
            local_198 = 1;
            local_190 = &local_50;
            local_188 = 1;
            local_31 = 1;
            FUN_180160ae0(lVar5,&local_198);
          }
        }
        else if (bVar1 != 0) {
          local_31 = 1;
          uVar4 = FUN_1801faaf0(PTR_PTR_1802fc5b8);
          if ((char)uVar4 != '\0') goto LAB_180096955;
        }
      }
      memcpy(&local_190,local_40,0x120);
      local_198 = CONCAT71(local_198._1_7_,1);
      local_31 = 0;
      FUN_180061f80(param_1 + 8,&local_198,param_3,param_4,param_6);
      local_31 = 0;
      uVar7 = CONCAT71((int7)((ulonglong)param_6 >> 8),0xd);
      FUN_18012ec50(param_1 + 8,0,param_4,param_5);
      goto LAB_180096929;
    }
  }
  FUN_18009a670(local_40);
  FUN_1800663c0((longlong)local_40 + 0x60);
LAB_180096929:
  return uVar7 & 0xffffffff;
}


