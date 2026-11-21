/* FUN_1800d49f0 @ 1800d49f0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void * FUN_1800d49f0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_1dd0;
  char *local_1dc8;
  undefined8 local_1dc0;
  undefined8 local_1db8;
  char *local_1db0;
  undefined8 local_1da8;
  undefined8 local_1da0;
  char *local_1d98;
  undefined8 local_1d90;
  undefined8 local_1d88;
  undefined *local_1d80;
  undefined8 **local_1d78;
  undefined1 local_1be0;
  undefined1 local_1bd8;
  undefined2 local_1b50;
  undefined1 local_1b48;
  undefined1 local_1888;
  undefined1 local_1268;
  int local_698 [68];
  undefined8 *local_588;
  undefined1 *local_580;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 *local_50;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_50 = param_2;
  if (3 < *(ulonglong *)PTR_DAT_1802fd518) {
    local_580 = &LAB_1801ac550;
    local_1da0 = 4;
    local_1d98 = "reqwest::connect";
    local_1d90 = 0x10;
    local_1d80 = &DAT_180214bb5;
    local_1d78 = &local_588;
    local_1dd0 = 0;
    local_1dc8 = "reqwest::connect";
    local_1dc0 = 0x10;
    local_1db8 = 0;
    local_1db0 = 
    "C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\reqwest-0.12.28\\src\\connect.rs"
    ;
    local_1da8 = 0x62;
    local_1d88 = 0x3a100000001;
    local_41 = 1;
    local_588 = param_2;
    FUN_1801905c0(&local_43,&local_1dd0);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x78) == 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18);
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x20) * 0x1d0 + lVar4;
    do {
      if (lVar4 == lVar5) {
        local_41 = 1;
        FUN_1800cbf10(&local_1dd0,param_1,local_50);
        local_4a8 = local_50[10];
        local_4b8 = local_50[8];
        uStack_4b0 = local_50[9];
        local_4f8 = *local_50;
        uStack_4f0 = local_50[1];
        local_4e8 = local_50[2];
        uStack_4e0 = local_50[3];
        local_4d8 = local_50[4];
        uStack_4d0 = local_50[5];
        local_4c8 = local_50[6];
        uStack_4c0 = local_50[7];
        memcpy(&local_588,&local_1dd0,0x90);
        memcpy(&local_1dc0,&local_588,0x270);
        local_1b50 = 0;
        local_1dc8 = (char *)CONCAT44(local_1dc8._4_4_,uVar1);
        local_1b48 = 0;
        local_1dd0 = uVar2;
        FUN_180027490();
        pvVar3 = (void *)thunk_FUN_1801d32d0(0x578,8);
        if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_180201705(8,0x578);
        }
        memcpy(pvVar3,&local_1dd0,0x578);
        return pvVar3;
      }
      local_41 = 1;
      FUN_18004e2f0(local_698,lVar4);
      lVar4 = lVar4 + 0x1d0;
    } while (local_698[0] == 4);
    local_42 = 1;
    FUN_1800cbf10(&local_1dd0,param_1,local_50);
    local_398 = local_50[10];
    local_3a8 = local_50[8];
    uStack_3a0 = local_50[9];
    local_3e8 = *local_50;
    uStack_3e0 = local_50[1];
    local_3d8 = local_50[2];
    uStack_3d0 = local_50[3];
    local_3c8 = local_50[4];
    uStack_3c0 = local_50[5];
    local_3b8 = local_50[6];
    uStack_3b0 = local_50[7];
    memcpy(&local_4f8,local_698,0x110);
    memcpy(&local_588,&local_1dd0,0x90);
    memcpy(&local_1dc0,&local_588,0x538);
    local_1888 = 0;
    local_1dc8 = (char *)CONCAT44(local_1dc8._4_4_,uVar1);
    local_1268 = 0;
    local_1dd0 = uVar2;
    FUN_180027490();
    pvVar3 = (void *)thunk_FUN_1801d32d0(0x1738,8);
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x1738);
    }
    memcpy(pvVar3,&local_1dd0,0x1738);
  }
  else {
    local_41 = 1;
    FUN_1800cbf10(&local_1dd0,param_1,local_50);
    local_4a8 = local_50[10];
    local_4b8 = local_50[8];
    uStack_4b0 = local_50[9];
    local_4f8 = *local_50;
    uStack_4f0 = local_50[1];
    local_4e8 = local_50[2];
    uStack_4e0 = local_50[3];
    local_4d8 = local_50[4];
    uStack_4d0 = local_50[5];
    local_4c8 = local_50[6];
    uStack_4c0 = local_50[7];
    memcpy(&local_588,&local_1dd0,0x90);
    memcpy(&local_1dc0,&local_588,0x1e0);
    local_1be0 = 0;
    local_1dc8 = (char *)CONCAT44(local_1dc8._4_4_,uVar1);
    local_1bd8 = 0;
    local_1dd0 = uVar2;
    FUN_180027490();
    pvVar3 = (void *)thunk_FUN_1801d32d0(0x458,8);
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x458);
    }
    memcpy(pvVar3,&local_1dd0,0x458);
  }
  return pvVar3;
}


