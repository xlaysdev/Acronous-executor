/* FUN_18016a010 @ 18016a010 */

void FUN_18016a010(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  longlong lVar5;
  uint local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  longlong lStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  longlong local_30;
  undefined1 local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (*param_2 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0("not a CurrentThread handleC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.53.1\\src\\runtime\\scheduler\\mod.rs"
                  ,0x35,&DAT_180263c00);
  }
  LOCK();
  lVar5 = *(longlong *)(param_1 + 0x20);
  *(longlong *)(param_1 + 0x20) = 0;
  UNLOCK();
  if (lVar5 == 0) {
    if (((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) ||
       (cVar4 = FUN_180200a50(), cVar4 != '\0')) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0("Oh no! We never placed the Core back, this is a bug!",0x69,
                    &PTR_s_C__Users_burne__cargo_registry_s_180261020);
    }
    return;
  }
  plVar2 = *(longlong **)(param_2 + 2);
  LOCK();
  lVar1 = *plVar2;
  *plVar2 = *plVar2 + 1;
  UNLOCK();
  if (*plVar2 == 0 || SCARRY8(lVar1,1) != *plVar2 < 0) goto LAB_18016a45a;
  local_58 = 0;
  uStack_50 = 0;
  local_78 = 0;
  local_68 = 0;
  local_48 = 8;
  uStack_40 = 0;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  uStack_70 = plVar2;
  lStack_60 = lVar5;
  local_38 = param_1;
  if (*(char *)(lVar1 + 0xb8) == '\x01') {
LAB_18016a0cb:
    lVar5 = lStack_60;
    if (0x7ffffffffffffffe < *(ulonglong *)(lVar1 + 0x70)) {
      local_21 = 1;
      FUN_180201940(&PTR_s_C__Users_burne__cargo_registry_s_180260f50);
LAB_18016a45a:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (*(int *)(lVar1 + 0x78) != 2) {
      local_c8 = (uint)local_78;
      uStack_c4 = local_78._4_4_;
      uStack_c0 = (undefined4)uStack_70;
      uStack_bc = uStack_70._4_4_;
      local_88 = local_38;
      local_98 = (undefined4)local_48;
      uStack_94 = local_48._4_4_;
      uStack_90 = (undefined4)uStack_40;
      uStack_8c = uStack_40._4_4_;
      local_a8 = (undefined4)local_58;
      uStack_a4 = local_58._4_4_;
      uStack_a0 = (undefined4)uStack_50;
      uStack_9c = uStack_50._4_4_;
      local_b8 = local_68;
      lStack_b0 = lVar5;
      if ((local_78 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ee0(&DAT_180263c37,0x43,&PTR_s_C__Users_burne__cargo_registry_s_180261168);
      }
      if (local_68 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1802018f0(&PTR_s_C__Users_burne__cargo_registry_s_180261180);
      }
      local_b8 = 0xffffffffffffffff;
      lStack_b0 = 0;
      if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201b60("core missing",0xc,&PTR_s_C__Users_burne__cargo_registry_s_180261198);
      }
      local_b8 = 0;
      local_30 = *(longlong *)(lVar1 + 0x98);
      *(uint **)(lVar1 + 0x98) = &local_c8;
      FUN_18016b780(lStack_60,plVar2 + 0x10);
      *(longlong *)(lVar1 + 0x98) = local_30;
      if (local_b8 != 0) {
        local_30 = lVar5;
                    /* WARNING: Subroutine does not return */
        FUN_1802018f0(&PTR_s_C__Users_burne__cargo_registry_s_1802611b0);
      }
      local_b8 = -1;
      if (lStack_b0 == 0) {
        local_b8 = 0;
        lStack_b0 = lVar5;
        if ((local_c8 & 1) != 0) goto LAB_18016a442;
      }
      else {
        local_30 = lVar5;
        FUN_180168500();
        local_b8 = local_b8 + 1;
        lStack_b0 = local_30;
        if ((local_c8 & 1) != 0) {
LAB_18016a442:
                    /* WARNING: Subroutine does not return */
          FUN_180201ee0(&DAT_180263c37,0x43,&PTR_s_C__Users_burne__cargo_registry_s_180261228);
        }
        lVar5 = local_30;
        if (local_b8 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1802018f0(&PTR_s_C__Users_burne__cargo_registry_s_180261240);
        }
      }
      local_b8 = -1;
      lStack_b0 = 0;
      LOCK();
      lVar1 = *(longlong *)(local_88 + 0x20);
      *(longlong *)(local_88 + 0x20) = lVar5;
      UNLOCK();
      if (lVar1 != 0) {
        FUN_180168500(lVar1);
      }
      FUN_180166ec0(local_88,0);
      local_b8 = local_b8 + 1;
      local_21 = 0;
      FUN_180167ef0(&local_c8);
      return;
    }
    if ((uint)local_78 == 1) {
      local_21 = 1;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_180263c37,0x43,&PTR_s_C__Users_burne__cargo_registry_s_180261038);
    }
  }
  else if (*(char *)(lVar1 + 0xb8) != '\x02') {
    local_21 = 1;
    FUN_1801d8880((ulonglong *)(lVar1 + 0x70),FUN_18016d130);
    *(undefined1 *)(lVar1 + 0xb8) = 1;
    goto LAB_18016a0cb;
  }
  lVar5 = lStack_60;
  if (local_68 != 0) {
    local_21 = 1;
                    /* WARNING: Subroutine does not return */
    FUN_1802018f0(&PTR_s_C__Users_burne__cargo_registry_s_180261050);
  }
  local_68 = 0xffffffffffffffff;
  lStack_60 = 0;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180261068);
  }
  local_68 = 0;
  local_21 = 1;
  FUN_18016b780(lVar5,plVar2 + 0x10);
  if (local_68 != 0) {
    local_30 = lVar5;
                    /* WARNING: Subroutine does not return */
    FUN_1802018f0(&PTR_s_C__Users_burne__cargo_registry_s_180261080);
  }
  local_68 = -1;
  if (lStack_60 == 0) {
    local_68 = 0;
    lStack_60 = lVar5;
    if ((uint)local_78 == 1) goto LAB_18016a3c2;
  }
  else {
    local_30 = lVar5;
    FUN_180168500();
    local_68 = local_68 + 1;
    lStack_60 = local_30;
    if ((char)local_78 != '\0') {
LAB_18016a3c2:
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_180263c37,0x43,&PTR_s_C__Users_burne__cargo_registry_s_180261228);
    }
    lVar5 = local_30;
    if (local_68 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1802018f0(&PTR_s_C__Users_burne__cargo_registry_s_180261240);
    }
  }
  local_68 = -1;
  lStack_60 = 0;
  LOCK();
  lVar1 = *(longlong *)(local_38 + 0x20);
  *(longlong *)(local_38 + 0x20) = lVar5;
  UNLOCK();
  if (lVar1 != 0) {
    FUN_180168500(lVar1);
  }
  FUN_180166ec0(local_38,0);
  local_68 = local_68 + 1;
  FUN_180167ef0(&local_78);
  return;
}


