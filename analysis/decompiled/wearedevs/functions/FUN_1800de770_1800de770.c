/* FUN_1800de770 @ 1800de770 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void * FUN_1800de770(undefined8 param_1,void *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  char cVar4;
  void *_Dst;
  void *pvVar5;
  uint uVar6;
  undefined8 local_1080;
  char ***local_1078;
  undefined8 uStack_1070;
  undefined8 local_1068;
  undefined4 uStack_1060;
  undefined4 uStack_105c;
  undefined4 local_1058;
  undefined4 uStack_1054;
  undefined4 uStack_1050;
  undefined4 uStack_104c;
  undefined8 local_1048;
  undefined1 local_ed8 [256];
  char **local_dd8;
  undefined8 uStack_dd0;
  undefined8 local_dc8;
  undefined8 uStack_dc0;
  undefined8 local_db8;
  undefined8 uStack_db0;
  undefined1 local_218;
  char *local_210;
  char **local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  char **local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  void *local_38;
  undefined1 local_2a;
  undefined1 local_29;
  undefined8 local_28;
  
  puVar3 = PTR_PTR_1802fb2b8;
  local_28 = 0xfffffffffffffffe;
  uVar6 = *(byte *)((longlong)param_2 + 0xd8) - 2;
  local_38 = param_2;
  if (1 < uVar6) {
    if (*(byte *)((longlong)param_2 + 0xd8) != 1) {
      local_29 = 1;
      _Dst = (void *)FUN_180103b20();
      pvVar5 = local_38;
      goto LAB_1800dea72;
    }
    if (*(char *)((longlong)param_2 + 0xb8) == '\a') {
      if (*(ulonglong *)PTR_DAT_1802fd448 < 4) {
        bVar1 = PTR_PTR_1802fb2b8[0x10];
        uVar6 = (uint)bVar1;
        if (bVar1 - 1 < 2) {
LAB_1800de89c:
          local_29 = 1;
          cVar4 = FUN_1801601d0(*(undefined8 *)puVar3,uVar6);
          if (cVar4 != '\0') {
            lVar2 = *(longlong *)puVar3;
            local_1068 = lVar2 + 0x30;
            local_210 = "CONNECT is not allowed for HTTP/1.0";
            local_208 = (char **)0x47;
            local_68 = &local_210;
            uStack_60 = &DAT_1802154c8;
            local_1080 = 1;
            local_1078 = &local_68;
            uStack_1070 = 1;
            local_29 = 1;
            FUN_180160ae0(lVar2,&local_1080);
          }
        }
        else if (bVar1 != 0) {
          local_29 = 1;
          uVar6 = FUN_1801faaf0(PTR_PTR_1802fb2b8);
          if ((char)uVar6 != '\0') goto LAB_1800de89c;
        }
      }
      pvVar5 = local_38;
      local_1080 = 3;
      local_1078 = (char ***)0x0;
      uStack_1050._0_2_ = CONCAT11(2,(undefined1)uStack_1050);
      local_1048 = CONCAT71(local_1048._1_7_,3);
      FUN_180027490();
      _Dst = (void *)thunk_FUN_1801d32d0(0x98,8);
      if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201705(8,0x98);
      }
      memcpy(_Dst,&local_1080,0x98);
      goto LAB_1800dea72;
    }
  }
  local_29 = 1;
  FUN_1801040f0(&local_210,(longlong)param_2 + 0x60,
                CONCAT31((int3)(uVar6 >> 8),*(char *)((longlong)param_2 + 0xb8) == '\a'));
  if ((int)local_210 != 1) {
    local_48 = local_1e8;
    uStack_44 = uStack_1e4;
    uStack_40 = uStack_1e0;
    uStack_3c = uStack_1dc;
    local_58 = local_1f8;
    uStack_54 = uStack_1f4;
    uStack_50 = uStack_1f0;
    uStack_4c = uStack_1ec;
    local_68 = local_208;
    uStack_60 = (undefined *)CONCAT44(uStack_1fc,uStack_200);
    local_2a = 1;
    FUN_1800e5640(&local_210,param_1);
    memcpy(local_ed8,local_38,0x100);
    local_dc8 = CONCAT44(uStack_54,local_58);
    uStack_dc0 = CONCAT44(uStack_4c,uStack_50);
    local_db8 = CONCAT44(uStack_44,local_48);
    uStack_db0 = CONCAT44(uStack_3c,uStack_40);
    local_dd8 = local_68;
    uStack_dd0 = uStack_60;
    memcpy(&local_1080,&local_210,0x1a8);
    local_218 = 0;
    FUN_180027490();
    pvVar5 = (void *)thunk_FUN_1801d32d0(0xe70,8);
    if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0xe70);
    }
    memcpy(pvVar5,&local_1080,0xe70);
    return pvVar5;
  }
  local_1048 = local_1d8;
  local_1058 = local_1e8;
  uStack_1054 = uStack_1e4;
  uStack_1050 = uStack_1e0;
  uStack_104c = uStack_1dc;
  local_1068 = CONCAT44(uStack_1f4,local_1f8);
  uStack_1060 = uStack_1f0;
  uStack_105c = uStack_1ec;
  local_1078 = (char ***)local_208;
  uStack_1070 = CONCAT44(uStack_1fc,uStack_200);
  local_1080 = 3;
  FUN_180027490();
  _Dst = (void *)thunk_FUN_1801d32d0(0x98,8);
  if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x98);
  }
  memcpy(_Dst,&local_1080,0x98);
  pvVar5 = local_38;
LAB_1800dea72:
  FUN_180091e90(pvVar5);
  return _Dst;
}


