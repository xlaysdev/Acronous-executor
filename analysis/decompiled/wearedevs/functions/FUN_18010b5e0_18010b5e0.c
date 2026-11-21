/* FUN_18010b5e0 @ 18010b5e0 */

undefined2 * FUN_18010b5e0(undefined2 *param_1,longlong param_2,char *param_3)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  undefined *puVar5;
  char *local_c8;
  char **local_c0;
  code *local_b8;
  undefined8 *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  code *local_98;
  undefined **local_90;
  undefined *local_88;
  undefined *local_80;
  char ***local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined ***local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined1 local_40 [24];
  
  if ((*(longlong *)PTR_DAT_1802fd448 == 0) &&
     (((uVar3 = (uint)DAT_1802fb2d0, uVar3 - 1 < 2 ||
       ((uVar3 != 0 && (uVar3 = FUN_1801faaf0(&PTR_DAT_1802fb2c0), (char)uVar3 != '\0')))) &&
      (cVar1 = FUN_1801601d0(PTR_DAT_1802fb2c0,uVar3), cVar1 != '\0')))) {
    puVar5 = PTR_DAT_1802fb2c0 + 0x30;
    local_70 = 0;
    local_c8 = param_3;
    if (*param_3 == '\0') {
      local_c8 = (char *)0x0;
    }
    lVar4 = *(longlong *)(param_3 + 0x20);
    if (lVar4 != 0) {
      local_70 = FUN_1801ac970(*(undefined8 *)(param_3 + 0x18));
      local_68 = lVar4;
    }
    FUN_1801ac510(local_40,param_3);
    local_c0 = &local_c8;
    local_b8 = FUN_18010c830;
    local_b0 = &local_70;
    local_a8 = FUN_18010c7d0;
    local_98 = FUN_18010c770;
    local_80 = &DAT_18023c198;
    local_78 = &local_c0;
    local_90 = &local_80;
    local_88 = &DAT_18023c1c8;
    local_60 = 1;
    local_58 = &local_90;
    local_50 = 1;
    local_a0 = local_40;
    local_48 = puVar5;
    FUN_180160ae0(PTR_DAT_1802fb2c0,&local_60);
  }
  if (*(char *)(param_2 + 0x68) == '\0') {
    if (*param_3 == '\0') {
      *param_1 = 2;
      *(char **)(param_1 + 0x10) =
           "invalid URL, scheme is missingevent C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\hyper-util-0.1.20\\src\\client\\legacy\\connect\\http.rs:927"
      ;
      *(undefined8 *)(param_1 + 0x14) = 0x1e;
      goto LAB_18010b7f0;
    }
  }
  else if ((*param_3 == '\0') || (cVar1 = FUN_1801ae3a0(param_3,&DAT_18023c1e8), cVar1 == '\0')) {
    *param_1 = 2;
    *(undefined **)(param_1 + 0x10) = &DAT_18023c208;
    *(undefined8 *)(param_1 + 0x14) = 0x1f;
    goto LAB_18010b7f0;
  }
  lVar4 = *(longlong *)(param_3 + 0x20);
  if ((lVar4 != 0) && (lVar2 = FUN_1801ac970(*(undefined8 *)(param_3 + 0x18)), lVar2 != 0)) {
    FUN_1801ac510(&local_c0,param_3);
    if (local_c0 == (char **)0x0) {
      if (*param_3 == '\0') {
        local_b0._0_2_ = 0x50;
      }
      else {
        cVar1 = FUN_1801ae3a0(param_3,&DAT_18023c1f8);
        local_b0._0_2_ = 0x50;
        if (cVar1 != '\0') {
          local_b0._0_2_ = 0x1bb;
        }
      }
    }
    else {
    }
    *(longlong *)(param_1 + 4) = lVar2;
    *(longlong *)(param_1 + 8) = lVar4;
    param_1[0xc] = local_b0._0_2_;
    *param_1 = 3;
    return param_1;
  }
  *param_1 = 2;
  *(char **)(param_1 + 0x10) =
       "invalid URL, host is missingevent C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\hyper-util-0.1.20\\src\\client\\legacy\\connect\\http.rs:561"
  ;
  *(undefined8 *)(param_1 + 0x14) = 0x1c;
LAB_18010b7f0:
  *(undefined8 *)(param_1 + 0x18) = 0;
  return param_1;
}


