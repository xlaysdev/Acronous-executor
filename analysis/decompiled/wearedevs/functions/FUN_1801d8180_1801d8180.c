/* FUN_1801d8180 @ 1801d8180 */

/* WARNING: Removing unreachable block (ram,0x0001801d8226) */
/* WARNING: Removing unreachable block (ram,0x0001801d829f) */

void FUN_1801d8180(undefined8 *param_1,void *param_2,ulonglong param_3,ushort param_4)

{
  undefined **ppuVar1;
  short *psVar2;
  uint uVar3;
  short *psVar4;
  short sVar5;
  undefined4 uVar6;
  ulonglong unaff_RSI;
  longlong lVar7;
  ushort uVar8;
  undefined **ppuVar9;
  int iVar10;
  undefined **ppuVar11;
  longlong local_268;
  short *local_260;
  longlong local_258;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  int local_b8 [2];
  undefined8 local_b0;
  undefined8 *local_a0;
  longlong local_98;
  undefined **local_90;
  undefined **local_88;
  ushort local_80;
  undefined **local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined **local_68;
  undefined **local_60;
  uint local_58;
  ushort local_52;
  undefined4 local_50;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_52 = param_4;
  if (DAT_1802fd808 == '\0') {
    FUN_180200110();
    unaff_RSI = param_3;
  }
  uVar6 = (undefined4)unaff_RSI;
  if (param_3 < 0x180) {
    memcpy(&local_268,param_2,param_3);
    *(undefined1 *)((longlong)&local_268 + param_3) = 0;
    FUN_1801edf00(local_b8,&local_268,param_3 + 1);
    if (local_b8[0] == 1) {
      local_90 = &PTR_s_file_name_contained_an_unexpecte_18028f770;
    }
    else {
      local_e8 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      uStack_e0 = 1;
      local_78 = (undefined **)0x0;
      iVar10 = getaddrinfo(local_b0,0,&local_e8,&local_78);
      if (iVar10 == 0) {
        local_88 = local_78;
        local_90 = local_78;
        local_80 = param_4;
        goto LAB_1801d831f;
      }
      uVar3 = WSAGetLastError();
      local_90 = (undefined **)((ulonglong)uVar3 << 0x20 | 2);
    }
  }
  else {
    FUN_180200020(&local_98,param_2,param_3,&local_52);
    if (local_98 == 0) {
LAB_1801d831f:
      local_58 = (uint)local_80;
      ppuVar1 = local_88;
      do {
        ppuVar9 = ppuVar1;
        local_a0 = param_1;
        if (ppuVar9 == (undefined **)0x0) {
          freeaddrinfo();
          local_260 = (short *)&DAT_00000004;
          local_268 = 0;
          lVar7 = 0;
          goto LAB_1801d85a4;
        }
        psVar4 = (short *)ppuVar9[4];
        ppuVar1 = (undefined **)ppuVar9[5];
        local_60 = local_90;
        if (*psVar4 == 0x17) {
          if (ppuVar9[2] < (undefined *)0x1c) {
            local_49 = 1;
                    /* WARNING: Subroutine does not return */
            FUN_180201ec0("assertion failed: len >= size_of::<c::sockaddr_in6>()",0x35,
                          &PTR_s_library_std_src_sys_net_connecti_18028f700);
          }
          local_50 = *(undefined4 *)(psVar4 + 2);
          local_68 = (undefined **)CONCAT44(local_68._4_4_,*(undefined4 *)(psVar4 + 0xc));
          param_4 = psVar4[1] << 8 | (ushort)psVar4[1] >> 8;
          iVar10 = *(int *)(psVar4 + 4) << 0x10;
          uVar8 = psVar4[5];
          ppuVar9 = *(undefined ***)(psVar4 + 6);
          uVar6 = *(undefined4 *)(psVar4 + 10);
          sVar5 = 1;
          goto LAB_1801d83e0;
        }
      } while (*psVar4 != 2);
      if (ppuVar9[2] < (undefined *)0x10) {
        local_49 = 1;
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: len >= size_of::<c::sockaddr_in>()",0x34,
                      &PTR_s_library_std_src_sys_net_connecti_18028f6b0);
      }
      iVar10 = *(int *)(psVar4 + 2);
      uVar8 = psVar4[1] << 8 | (ushort)psVar4[1] >> 8;
      ppuVar9 = &PTR_DAT_18028f728;
      sVar5 = 0;
LAB_1801d83e0:
      FUN_180027490();
      psVar4 = (short *)thunk_FUN_1801d32d0(0x80,4);
      if (psVar4 == (short *)0x0) {
        local_49 = 1;
                    /* WARNING: Subroutine does not return */
        FUN_18020171e(4,0x80);
      }
      if (sVar5 == 0) {
        uVar3 = local_58;
      }
      else {
        param_4 = (ushort)local_58;
        uVar3 = (uint)uVar8;
      }
      *psVar4 = sVar5;
      *(int *)(psVar4 + 1) = iVar10;
      psVar4[3] = (short)uVar3;
      *(undefined ***)(psVar4 + 4) = ppuVar9;
      *(undefined4 *)(psVar4 + 8) = uVar6;
      *(undefined4 *)(psVar4 + 10) = local_50;
      *(undefined4 *)(psVar4 + 0xc) = local_68._0_4_;
      psVar4[0xe] = param_4;
      local_268 = 4;
      local_258 = 1;
      lVar7 = 1;
      local_260 = psVar4;
LAB_1801d84b0:
      ppuVar11 = ppuVar1;
      if (ppuVar11 == (undefined **)0x0) {
        freeaddrinfo(local_60);
LAB_1801d85a4:
        *local_a0 = local_260;
        local_a0[1] = local_260;
        local_a0[2] = local_268;
        local_a0[3] = local_260 + lVar7 * 0x10;
        return;
      }
      psVar2 = (short *)ppuVar11[4];
      ppuVar1 = (undefined **)ppuVar11[5];
      if (*psVar2 != 0x17) goto code_r0x0001801d84ce;
      if (ppuVar11[2] < (undefined *)0x1c) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: len >= size_of::<c::sockaddr_in6>()",0x35,
                      &PTR_s_library_std_src_sys_net_connecti_18028f700);
      }
      local_70 = *(undefined4 *)(psVar2 + 2);
      local_50 = *(undefined4 *)(psVar2 + 0xc);
      ppuVar9 = (undefined **)(ulonglong)(ushort)(psVar2[1] << 8 | (ushort)psVar2[1] >> 8);
      iVar10 = *(int *)(psVar2 + 4) << 0x10;
      uVar8 = psVar2[5];
      local_68 = *(undefined ***)(psVar2 + 6);
      local_6c = *(undefined4 *)(psVar2 + 10);
      sVar5 = 1;
      goto LAB_1801d854f;
    }
  }
  param_1[1] = local_90;
  *param_1 = 0;
  return;
code_r0x0001801d84ce:
  if (*psVar2 == 2) {
    if (ppuVar11[2] < (undefined *)0x10) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("assertion failed: len >= size_of::<c::sockaddr_in>()",0x34,
                    &PTR_s_library_std_src_sys_net_connecti_18028f6b0);
    }
    iVar10 = *(int *)(psVar2 + 2);
    uVar8 = psVar2[1] << 8 | (ushort)psVar2[1] >> 8;
    sVar5 = 0;
    local_68 = &PTR_DAT_18028f728;
LAB_1801d854f:
    if (sVar5 == 0) {
      uVar8 = (ushort)local_58;
    }
    ppuVar9 = (undefined **)((ulonglong)ppuVar9 & 0xffffffff);
    if (sVar5 != 0) {
      ppuVar9 = (undefined **)(ulonglong)local_58;
    }
    if (lVar7 == local_268) {
      FUN_180200f70(&local_268,lVar7,1,4,0x20);
      psVar4 = local_260;
    }
    psVar4[lVar7 * 0x10] = sVar5;
    *(int *)(psVar4 + lVar7 * 0x10 + 1) = iVar10;
    psVar4[lVar7 * 0x10 + 3] = uVar8;
    *(undefined ***)(psVar4 + lVar7 * 0x10 + 4) = local_68;
    *(undefined4 *)(psVar4 + lVar7 * 0x10 + 8) = local_6c;
    *(undefined4 *)(psVar4 + lVar7 * 0x10 + 10) = local_70;
    *(undefined4 *)(psVar4 + lVar7 * 0x10 + 0xc) = local_50;
    psVar4[lVar7 * 0x10 + 0xe] = (short)ppuVar9;
    lVar7 = lVar7 + 1;
    local_258 = lVar7;
  }
  goto LAB_1801d84b0;
}


