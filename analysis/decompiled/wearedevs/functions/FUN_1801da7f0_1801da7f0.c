/* FUN_1801da7f0 @ 1801da7f0 */

void FUN_1801da7f0(undefined2 *param_1,SOCKET param_2)

{
  int iVar1;
  uint uVar2;
  undefined **ppuVar3;
  sockaddr local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined2 uStack_26;
  undefined6 local_24;
  undefined2 uStack_1e;
  undefined6 uStack_1c;
  undefined2 uStack_16;
  uint local_14;
  
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8.sa_family = 0;
  local_a8.sa_data[0] = '\0';
  local_a8.sa_data[1] = '\0';
  local_a8.sa_data[2] = '\0';
  local_a8.sa_data[3] = '\0';
  local_a8.sa_data[4] = '\0';
  local_a8.sa_data[5] = '\0';
  local_a8.sa_data[6] = '\0';
  local_a8.sa_data[7] = '\0';
  local_a8.sa_data[8] = '\0';
  local_a8.sa_data[9] = '\0';
  local_a8.sa_data[10] = '\0';
  local_a8.sa_data[0xb] = '\0';
  local_a8.sa_data[0xc] = '\0';
  local_a8.sa_data[0xd] = '\0';
  local_14 = 0x80;
  iVar1 = getpeername(param_2,&local_a8,(int *)&local_14);
  if (iVar1 == -1) {
    uVar2 = WSAGetLastError();
    ppuVar3 = (undefined **)((ulonglong)uVar2 << 0x20 | 2);
  }
  else {
    if (local_a8.sa_family == 0x17) {
      if (local_14 < 0x1c) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: len >= size_of::<c::sockaddr_in6>()",0x35,
                      &PTR_s_library_std_src_sys_net_connecti_18028f700);
      }
      local_24 = local_a8.sa_data._6_6_;
      uStack_1e = local_a8.sa_data._12_2_;
      uStack_1c = (undefined6)local_98;
      uStack_16 = (undefined2)((ulonglong)local_98 >> 0x30);
      *param_1 = 1;
      *(ulonglong *)(param_1 + 1) = CONCAT62(local_24,uStack_26);
      *(ulonglong *)(param_1 + 5) = CONCAT62(uStack_1c,uStack_1e);
      param_1[9] = uStack_16;
      *(undefined4 *)(param_1 + 10) = local_a8.sa_data._2_4_;
      *(undefined4 *)(param_1 + 0xc) = (undefined4)uStack_90;
      param_1[0xe] = local_a8.sa_data._0_2_ << 8 | (ushort)local_a8.sa_data._0_2_ >> 8;
      return;
    }
    if (local_a8.sa_family == 2) {
      if (local_14 < 0x10) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: len >= size_of::<c::sockaddr_in>()",0x34,
                      &PTR_s_library_std_src_sys_net_connecti_18028f6b0);
      }
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = local_a8.sa_data._2_4_;
      param_1[3] = local_a8.sa_data._0_2_ << 8 | (ushort)local_a8.sa_data._0_2_ >> 8;
      return;
    }
    ppuVar3 = &PTR_DAT_18028f728;
  }
  *(undefined ***)(param_1 + 4) = ppuVar3;
  *param_1 = 2;
  return;
}


