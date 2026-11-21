/* FUN_1801c47c0 @ 1801c47c0 */

void FUN_1801c47c0(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  byte bVar4;
  int local_118 [3];
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e0;
  undefined8 local_d0;
  undefined2 local_c0;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 local_68;
  undefined2 local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  int local_38;
  undefined4 uStack_34;
  longlong *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  plVar2 = *(longlong **)*param_1;
  *(undefined8 *)*param_1 = 0;
  if (plVar2 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ba0(&PTR_s_C__Users_burne__rustup_toolchain_180288048);
  }
  local_58 = 0;
  uStack_88 = 0;
  local_b0 = 0;
  uStack_78 = 0;
  local_68 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_c0 = 0;
  local_d0 = 0;
  uStack_e0 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118[0] = 0;
  local_118[1] = 0;
  local_118[2] = uStack_a8;
  uStack_10c = uStack_a4;
  FUN_1801c3490(&local_38,local_118);
  local_48 = CONCAT44(uStack_34,local_38);
  if (local_48 == 3) {
  }
  else {
    bVar4 = FUN_1801c16d0(&local_38);
    if ((bVar4 & *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  200) == 0) == 0) {
      local_50 = local_30;
      goto LAB_1801c492e;
    }
    local_a0 = 1;
    local_58 = CONCAT11(local_58._1_1_,1);
    FUN_1801c3490(local_118,&local_b0);
    if (local_118[0] == 3) {
      plVar3 = (longlong *)CONCAT44(uStack_10c,local_118[2]);
      if (local_38 == 3) {
        LOCK();
        *local_30 = *local_30 + -1;
        lVar1 = *local_30;
        UNLOCK();
        local_30 = plVar3;
        if (lVar1 == 0) {
          FUN_1801c64c0(&local_30);
        }
      }
      else {
        FUN_1801c5140(&local_38);
        local_30 = plVar3;
      }
    }
    else {
      FUN_1801c5140(local_118);
      local_48 = CONCAT44(uStack_34,local_38);
      local_50 = local_30;
      if (local_48 != 3) goto LAB_1801c492e;
    }
  }
  local_48 = 3;
  local_50 = (longlong *)&DAT_1802fd760;
  DAT_1802fd760 = local_30;
LAB_1801c492e:
  local_40 = plVar2;
  if ((int)*plVar2 != 3) {
    FUN_1801c5140(plVar2);
  }
  *local_40 = local_48;
  local_40[1] = (longlong)local_50;
  return;
}


