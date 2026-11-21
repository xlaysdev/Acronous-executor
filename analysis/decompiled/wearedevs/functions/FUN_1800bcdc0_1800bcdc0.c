/* FUN_1800bcdc0 @ 1800bcdc0 */

/* WARNING: Type propagation algorithm not settling */

void FUN_1800bcdc0(undefined4 *param_1,PCCERT_CHAIN_CONTEXT param_2)

{
  ushort *puVar1;
  uchar uVar2;
  char cVar3;
  undefined8 uVar4;
  CERT_TRUST_STATUS CVar5;
  bool bVar6;
  uchar uVar7;
  uint uVar8;
  BOOL BVar9;
  int iVar10;
  undefined4 uVar11;
  DWORD DVar12;
  PCCERT_CHAIN_CONTEXT *ppCVar13;
  undefined8 uVar14;
  PCCERT_CHAIN_CONTEXT pCVar15;
  PCCERT_CHAIN_CONTEXT pCVar16;
  PCCERT_CHAIN_CONTEXT _Buf2;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  byte bVar21;
  undefined4 unaff_R12D;
  undefined1 *_Dst;
  ulonglong uVar22;
  undefined8 uVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  size_t _Size;
  longlong lVar27;
  undefined4 *puVar28;
  bool bVar29;
  PCERT_CHAIN_PARA in_stack_fffffffffffffe08;
  PCCERT_CHAIN_CONTEXT in_stack_fffffffffffffe10;
  PCCERT_CHAIN_CONTEXT *in_stack_fffffffffffffe20;
  ulonglong local_1b0;
  PCCERT_CHAIN_CONTEXT local_188;
  PCCERT_CHAIN_CONTEXT *local_180;
  DWORD *local_178;
  PCCERT_CHAIN_CONTEXT local_170;
  PCCERT_CHAIN_CONTEXT local_168;
  DWORD DStack_160;
  ulong uStack_15c;
  _CERT_CHAIN_PARA local_158;
  undefined8 uStack_138;
  longlong local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  PCCERT_CHAIN_CONTEXT local_f8;
  undefined1 local_f0 [24];
  PCCERT_CHAIN_CONTEXT local_d8;
  PCCERT_CHAIN_CONTEXT *ppCStack_d0;
  PCCERT_CHAIN_CONTEXT local_c8;
  PCCERT_CHAIN_CONTEXT local_c0;
  byte local_b8;
  undefined7 uStack_b7;
  undefined4 *local_b0;
  undefined1 local_a8 [36];
  uint uStack_84;
  PCCERT_CHAIN_CONTEXT pCStack_80;
  undefined8 local_78;
  undefined1 local_62;
  undefined1 local_61;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_f8 = (PCCERT_CHAIN_CONTEXT)&param_2[3].cLowerQualityChainContext;
  local_178 = &(param_2->TrustStatus).dwInfoStatus;
  puVar1 = &param_2[1].ChainId.Data2;
  pCVar15 = param_2;
  puVar28 = param_1;
  local_b0 = param_1;
LAB_1800bce2d:
  local_f0._16_4_ = unaff_R12D;
  do {
    uVar7 = param_2[2].ChainId.Data4[4];
    if (uVar7 != '\0') {
      if (uVar7 == '\x01') {
        puVar28[5] = param_2[3].cChain;
        CVar5 = param_2[3].TrustStatus;
        *(undefined8 *)(puVar28 + 1) = *(undefined8 *)&param_2[2].field_0x44;
        *(CERT_TRUST_STATUS *)(puVar28 + 3) = CVar5;
        uVar11 = 1;
      }
      else {
        uVar11 = 0;
      }
      goto LAB_1800bdd10;
    }
    uVar7 = param_2[2].ChainId.Data4[5];
    bVar21 = param_2[2].ChainId.Data4[6];
    uVar2 = param_2[2].ChainId.Data4[7];
    cVar3 = param_2[2].field_0x44;
    if ((char)param_2[4].TrustStatus.dwErrorStatus != '\0') {
LAB_1800bce83:
      if (uVar7 != '\0') goto LAB_1800bce88;
LAB_1800bcea0:
      if (uVar2 != '\0') goto LAB_1800bcea9;
LAB_1800bcf6b:
      puVar28 = local_b0;
      if ((cVar3 == '\0') && (*(char *)((longlong)&param_2[4].cbSize + 2) == '\0')) {
        local_b8 = bVar21;
        local_158._0_8_ = FUN_180101530(local_f8);
        local_158.RequestedUsage.dwType = (DWORD)pCVar15;
        local_158.RequestedUsage._4_4_ = SUB84((ulonglong)pCVar15 >> 0x20,0);
        if ((local_b8 & (byte)local_158._0_8_) != 0) {
          FUN_1800b9a50(&local_158);
          uVar8 = (uint)((ulonglong)in_stack_fffffffffffffe08 >> 0x20);
          uVar22._0_4_ = param_2[1].dwCreateFlags;
          uVar22._4_4_ = param_2[1].ChainId.Data1;
          uVar17._0_2_ = param_2[3].ChainId.Data2;
          uVar17._2_2_ = param_2[3].ChainId.Data3;
          uVar17._4_1_ = param_2[3].ChainId.Data4[0];
          uVar17._5_1_ = param_2[3].ChainId.Data4[1];
          uVar17._6_1_ = param_2[3].ChainId.Data4[2];
          uVar17._7_1_ = param_2[3].ChainId.Data4[3];
          goto joined_r0x0001800bd578;
        }
        if ((local_158._0_8_ & 1) == 0) {
          local_c0 = pCVar15;
          register0x00000000 = (char *)FUN_180101110(&local_c0);
          uVar11 = (undefined4)((ulonglong)in_stack_fffffffffffffe10 >> 0x20);
          cVar3 = (char)param_2->cbSize;
          if (((ulonglong)register0x00000000 & 1) == 0) {
            if (cVar3 == '\0') {
              pCVar15 = (PCCERT_CHAIN_CONTEXT)0x0;
            }
            else {
              pCVar15 = *(PCCERT_CHAIN_CONTEXT *)local_178;
            }
          }
          else {
            local_170 = (PCCERT_CHAIN_CONTEXT)CONCAT71(local_170._1_7_,cVar3);
            pCStack_80 = pCVar15;
            local_78 = param_2;
            if (cVar3 == '\0') {
              local_158._0_8_ = pCVar15;
              FUN_180101150(&local_158);
            }
            else {
              local_158._0_8_ = (PCCERT_CHAIN_CONTEXT)0x0;
              local_158.RequestedUsage.Usage.cUsageIdentifier = (DWORD)local_178;
              local_158.RequestedUsage.Usage._4_4_ = SUB84((ulonglong)local_178 >> 0x20,0);
              pCVar16 = pCVar15;
              while( true ) {
                uVar18 = FUN_180101170(&local_158);
                uVar11 = (undefined4)((ulonglong)in_stack_fffffffffffffe10 >> 0x20);
                if ((uVar18 & 1) == 0) break;
                pCVar15 = (PCCERT_CHAIN_CONTEXT)local_a8;
                local_a8._0_8_ = pCVar16;
                uVar18 = FUN_180101230(&pCStack_80);
                if ((uVar18 & 1) != 0) {
                  FUN_180101100(local_a8);
                  if ((PCCERT_CHAIN_CONTEXT)local_158._0_8_ != (PCCERT_CHAIN_CONTEXT)0x0) {
                    FUN_180101100((CERT_USAGE_MATCH *)((longlong)&local_158 + 8));
                  }
                  if ((PCCERT_CHAIN_CONTEXT)stack0xffffffffffffff78 != (PCCERT_CHAIN_CONTEXT)0x0) {
                    FUN_180101150(&pCStack_80);
                  }
                  goto LAB_1800bde25;
                }
                local_d8 = pCVar15;
                FUN_180101100(&local_d8);
                FUN_180101100(local_a8);
                pCVar16 = pCVar15;
              }
              if ((PCCERT_CHAIN_CONTEXT)local_158._0_8_ != (PCCERT_CHAIN_CONTEXT)0x0) {
                FUN_180101100((CERT_USAGE_MATCH *)((longlong)&local_158 + 8));
              }
              pCVar15 = pCStack_80;
              if (local_a8[0x20] != '\0') {
                FUN_180101150(&pCStack_80);
              }
            }
          }
          local_158.RequestedUsage._4_4_ = 0;
          local_108 = 0;
          uStack_100 = 0;
          local_118 = 0;
          uStack_110 = 0;
          local_128 = 0;
          uStack_120 = 0;
          uStack_138 = 0;
          local_130 = 0;
          local_158.RequestedUsage.Usage._4_4_ = 0;
          local_158._0_8_ = &DAT_00000060;
          local_158.RequestedUsage.dwType = 1;
          stack0xffffffffffffff78 = "1.3.6.1.5.5.7.3.1";
          pCStack_80 = (PCCERT_CHAIN_CONTEXT)0x180212aa2;
          local_78 = (PCCERT_CHAIN_CONTEXT)&DAT_180212ab9;
          local_158.RequestedUsage.Usage.cUsageIdentifier = 3;
          local_158.RequestedUsage.Usage.rgpszUsageIdentifier = (LPSTR *)(local_a8 + 0x20);
          local_d8 = (PCCERT_CHAIN_CONTEXT)0x0;
          in_stack_fffffffffffffe20 = &local_d8;
          in_stack_fffffffffffffe08 = &local_158;
          in_stack_fffffffffffffe10 = (PCCERT_CHAIN_CONTEXT)CONCAT44(uVar11,0xc0000001);
          BVar9 = CertGetCertificateChain
                            ((HCERTCHAINENGINE)0x0,(PCCERT_CONTEXT)local_c0,(LPFILETIME)0x0,pCVar15,
                             in_stack_fffffffffffffe08,0xc0000001,(LPVOID)0x0,
                             in_stack_fffffffffffffe20);
          if (BVar9 == 0) {
            DVar12 = GetLastError();
            pCVar15 = (PCCERT_CHAIN_CONTEXT)((ulonglong)DVar12 << 0x20 | 2);
          }
          else {
            local_f0._0_8_ = local_d8;
            uVar8 = 0xf00;
            if ((char)param_2->cbSize != '\0') {
              local_61 = 1;
              pCVar15 = (PCCERT_CHAIN_CONTEXT)local_f0;
              FUN_180101c10(local_a8 + 0x20);
              uVar8 = 0xf00;
              if (local_a8._32_4_ == 1) {
                local_a8._0_8_ = pCStack_80;
                local_a8._8_8_ = local_78;
                local_d8 = (PCCERT_CHAIN_CONTEXT)local_a8;
                ppCStack_d0 = (PCCERT_CHAIN_CONTEXT *)0x0;
                do {
                  uVar8 = FUN_180102050(&local_d8);
                  if ((uVar8 & 1) == 0) break;
                  local_158.RequestedUsage.Usage.cUsageIdentifier = (DWORD)local_178;
                  local_158.RequestedUsage.Usage._4_4_ = SUB84((ulonglong)local_178 >> 0x20,0);
                  local_158._0_8_ = (PCCERT_CHAIN_CONTEXT)0x0;
                  pCVar16 = pCVar15;
                  local_188 = pCVar15;
                  do {
                    while( true ) {
                      uVar18 = FUN_180101170(&local_158);
                      if ((uVar18 & 1) == 0) goto LAB_1800bdaaa;
                      local_168 = pCVar16;
                      if (*(uint *)&pCVar16->rgpChain == *(uint *)&pCVar15->rgpChain) break;
                      FUN_180101100(&local_168);
                    }
                    _Buf2 = *(PCCERT_CHAIN_CONTEXT *)&(pCVar15->TrustStatus).dwInfoStatus;
                    iVar10 = memcmp(*(void **)&(pCVar16->TrustStatus).dwInfoStatus,_Buf2,
                                    (ulonglong)*(uint *)&pCVar16->rgpChain);
                    FUN_180101100(&local_168);
                    pCVar16 = _Buf2;
                  } while (iVar10 != 0);
LAB_1800bdaaa:
                  pCVar15 = pCVar16;
                  if ((PCCERT_CHAIN_CONTEXT)local_158._0_8_ != (PCCERT_CHAIN_CONTEXT)0x0) {
                    FUN_180101100((CERT_USAGE_MATCH *)((longlong)&local_158 + 8));
                  }
                  FUN_180101100(&local_188);
                  puVar28 = local_b0;
                } while ((uVar18 & 1) == 0);
                local_61 = 1;
                FUN_180101bf0(local_a8 + 8);
                uVar8 = (uVar8 & 1) << 4 | 0xf00;
              }
            }
            ppCStack_d0 = (PCCERT_CHAIN_CONTEXT *)0x0;
            local_c8 = (PCCERT_CHAIN_CONTEXT)0x0;
            local_d8 = (PCCERT_CHAIN_CONTEXT)0x200000018;
            if ((!SBORROW8(0,(longlong)param_2[2].rgpChain)) &&
               (*(char *)((longlong)&param_2[4].cbSize + 1) == '\0')) {
              local_c8 = *(PCCERT_CHAIN_CONTEXT *)&param_2[2].cLowerQualityChainContext;
            }
            local_a8._4_4_ = uVar8;
            local_a8._0_4_ = 0x10;
            local_a8._8_8_ = &local_d8;
            pCStack_80 = (PCCERT_CHAIN_CONTEXT)0x0;
            local_78 = (PCCERT_CHAIN_CONTEXT)0x0;
            stack0xffffffffffffff78 = &DAT_00000018;
            BVar9 = CertVerifyCertificateChainPolicy
                              (&DAT_00000004,(PCCERT_CHAIN_CONTEXT)local_f0._0_8_,
                               (PCERT_CHAIN_POLICY_PARA)local_a8,
                               (PCERT_CHAIN_POLICY_STATUS)(local_a8 + 0x20));
            if (BVar9 != 0) {
              pCVar15 = (PCCERT_CHAIN_CONTEXT)((ulonglong)uStack_84 << 0x20 | 2);
              if (*(longlong *)&param_2[3].fHasRevocationFreshnessTime == 0) {
                if (uStack_84 != 0) goto LAB_1800bde14;
                FUN_180101bf0(local_f0);
              }
              else {
                local_158._0_8_ = local_f0._0_8_;
                local_158.RequestedUsage.dwType = uStack_84;
                local_158.RequestedUsage._4_4_ = SUB84(pCStack_80,0);
                local_158.RequestedUsage.Usage.cUsageIdentifier =
                     (DWORD)((ulonglong)pCStack_80 >> 0x20);
                local_170 = pCVar15;
                pCVar15 = (PCCERT_CHAIN_CONTEXT)
                          (**(code **)(*(longlong *)&param_2[3].dwCreateFlags + 0x28))
                                    ((*(longlong *)(*(longlong *)&param_2[3].dwCreateFlags + 0x10) -
                                      1U & 0xfffffffffffffff0) +
                                     *(longlong *)&param_2[3].fHasRevocationFreshnessTime + 0x10);
                if (pCVar15 != (PCCERT_CHAIN_CONTEXT)0x0) goto LAB_1800bde25;
              }
              FUN_180101100(&local_c0);
              bVar21 = local_b8;
              if (param_2[2].ChainId.Data4[4] == '\0') {
                param_2[2].field_0x44 = 1;
              }
              goto LAB_1800bcf84;
            }
            local_61 = 1;
            DVar12 = GetLastError();
            pCVar15 = (PCCERT_CHAIN_CONTEXT)((ulonglong)DVar12 << 0x20 | 2);
LAB_1800bde14:
            FUN_180101bf0(local_f0);
          }
LAB_1800bde25:
          FUN_180101100(&local_c0);
        }
        *(PCCERT_CHAIN_CONTEXT *)(puVar28 + 2) = pCVar15;
        goto LAB_1800bdd0b;
      }
LAB_1800bcf84:
      if (bVar21 != '\0') goto LAB_1800bcf8d;
      pCVar15 = local_f8;
      FUN_180101580(&local_158);
      uVar18 = CONCAT44(local_158.RequestedUsage._4_4_,local_158.RequestedUsage.dwType);
      if ((char)local_158.cbSize != '\0') break;
      param_1 = (undefined4 *)
                CONCAT44(local_158.RequestedUsage.Usage._4_4_,
                         local_158.RequestedUsage.Usage.cUsageIdentifier);
      uVar7 = '\x01';
      local_1b0 = uVar18;
      unaff_R12D = local_158._4_4_;
      goto LAB_1800bdcc3;
    }
    pCVar15 = *(PCCERT_CHAIN_CONTEXT *)(param_2 + 2);
    pCVar16 = *(PCCERT_CHAIN_CONTEXT *)&param_2[2].TrustStatus.dwInfoStatus;
    if (pCVar16 == pCVar15) goto LAB_1800bce83;
    local_b8 = bVar21;
    lVar27 = 0;
    do {
      if (pCVar15 < pCVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_180201a30(pCVar16,pCVar15,pCVar15,&PTR_s_C__Users_burne__cargo_registry_s_180212ad0);
      }
      uVar18._0_2_ = (param_2->ChainId).Data2;
      uVar18._2_2_ = (param_2->ChainId).Data3;
      uVar18._4_1_ = (param_2->ChainId).Data4[0];
      uVar18._5_1_ = (param_2->ChainId).Data4[1];
      uVar18._6_1_ = (param_2->ChainId).Data4[2];
      uVar18._7_1_ = (param_2->ChainId).Data4[3];
      if (uVar18 == 0) goto LAB_1800bddc3;
      uVar22 = thunk_FUN_18016e2f0(&param_2->rgpChain,uVar18,
                                   (pCVar16->ChainId).Data4 +
                                   *(longlong *)(param_2[1].ChainId.Data4 + 4) + -0x3c,
                                   (longlong)pCVar15 - (longlong)pCVar16);
      if ((uVar22 == 2) || ((uVar22 & 1) != 0)) {
        if (uVar22 == 2) {
          uVar18 = 0xd00000003;
        }
        goto LAB_1800bdd00;
      }
      lVar27 = lVar27 + uVar18;
      pCVar16 = (PCCERT_CHAIN_CONTEXT)((pCVar16->ChainId).Data4 + (uVar18 - 0x3c));
      *(PCCERT_CHAIN_CONTEXT *)&param_2[2].TrustStatus.dwInfoStatus = pCVar16;
      pCVar15 = *(PCCERT_CHAIN_CONTEXT *)(param_2 + 2);
    } while (pCVar16 != pCVar15);
    unaff_R12D = local_f0._16_4_;
    bVar21 = local_b8;
    if (lVar27 == 0) goto LAB_1800bce83;
    if (param_2[2].ChainId.Data4[4] == '\0') {
      param_2[2].ChainId.Data4[5] = '\x01';
    }
LAB_1800bce88:
    lVar27._0_2_ = (param_2->ChainId).Data2;
    lVar27._2_2_ = (param_2->ChainId).Data3;
    lVar27._4_1_ = (param_2->ChainId).Data4[0];
    lVar27._5_1_ = (param_2->ChainId).Data4[1];
    lVar27._6_1_ = (param_2->ChainId).Data4[2];
    lVar27._7_1_ = (param_2->ChainId).Data4[3];
    if (lVar27 == 0) {
LAB_1800bddc3:
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("assertion failed: !self.context.is_null()",0x29,
                    &PTR_s_C__Users_burne__cargo_registry_s_180216370);
    }
    if (param_2[2].ChainId.Data4[4] != '\0') goto LAB_1800bcea0;
    param_2[2].ChainId.Data4[5] = '\0';
    if (uVar2 == '\0') goto LAB_1800bcf6b;
LAB_1800bcea9:
    puVar28 = local_b0;
    if (bVar21 == '\0') goto LAB_1800bdc93;
LAB_1800bcf8d:
    uVar8 = (uint)((ulonglong)in_stack_fffffffffffffe08 >> 0x20);
    uVar22._0_4_ = param_2[1].dwCreateFlags;
    uVar22._4_4_ = param_2[1].ChainId.Data1;
    uVar17._0_2_ = param_2[3].ChainId.Data2;
    uVar17._2_2_ = param_2[3].ChainId.Data3;
    uVar17._4_1_ = param_2[3].ChainId.Data4[0];
    uVar17._5_1_ = param_2[3].ChainId.Data4[1];
    uVar17._6_1_ = param_2[3].ChainId.Data4[2];
    uVar17._7_1_ = param_2[3].ChainId.Data4[3];
joined_r0x0001800bd578:
    if (uVar17 != 0) {
      lVar27 = 0;
      do {
        if (uVar17 < uVar22 * 2) {
          uVar17 = uVar22 * 2;
        }
        if (uVar17 < 0x401) {
          uVar17 = 0x400;
        }
        uVar26 = *(ulonglong *)&param_2[1].fHasRevocationFreshnessTime;
        uVar18 = uVar17 - uVar26;
        if (uVar26 <= uVar17 && uVar18 != 0) {
          if (*(longlong *)&param_2[1].cLowerQualityChainContext - uVar26 < uVar18) {
            in_stack_fffffffffffffe08 = (PCERT_CHAIN_PARA)0x0;
            FUN_1801f6a80(&param_2[1].cLowerQualityChainContext,uVar26,uVar18,1,1);
            uVar26 = *(ulonglong *)&param_2[1].fHasRevocationFreshnessTime;
            ppCVar13 = param_2[1].rgpLowerQualityChainContext;
            _Dst = (undefined1 *)((longlong)ppCVar13 + uVar26);
          }
          else {
            ppCVar13 = param_2[1].rgpLowerQualityChainContext;
            _Dst = (undefined1 *)((longlong)ppCVar13 + uVar26);
          }
          if (1 < uVar18) {
            memset(_Dst,0,uVar18 - 1);
            uVar26 = (uVar26 + uVar18) - 1;
            _Dst = (undefined1 *)((longlong)ppCVar13 + uVar26);
          }
          *_Dst = 0;
          uVar26 = uVar26 + 1;
          *(ulonglong *)&param_2[1].fHasRevocationFreshnessTime = uVar26;
          unaff_R12D = local_f0._16_4_;
        }
        if (uVar26 < uVar22) {
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(uVar22,uVar26,uVar26,&PTR_s_C__Users_burne__cargo_registry_s_180212a78);
        }
        uVar18 = (longlong)param_2[1].rgpLowerQualityChainContext + uVar22;
        uVar17 = FUN_1800f0400(&param_2->rgpChain,uVar18,uVar26 - uVar22);
        puVar28 = local_b0;
        uVar8 = (uint)((ulonglong)in_stack_fffffffffffffe08 >> 0x20);
        if ((uVar17 & 1) != 0) goto LAB_1800bdd00;
        uVar22 = uVar22 + uVar18;
        *(ulonglong *)&param_2[1].dwCreateFlags = uVar22;
        uVar26 = *(ulonglong *)&param_2[3].ChainId.Data2;
        uVar17 = 0;
        if (uVar18 <= uVar26) {
          uVar17 = uVar26 - uVar18;
        }
        param_2[3].ChainId.Data2 = (short)uVar17;
        param_2[3].ChainId.Data3 = (short)(uVar17 >> 0x10);
        param_2[3].ChainId.Data4[0] = (char)(uVar17 >> 0x20);
        param_2[3].ChainId.Data4[1] = (char)(uVar17 >> 0x28);
        param_2[3].ChainId.Data4[2] = (char)(uVar17 >> 0x30);
        param_2[3].ChainId.Data4[3] = (char)(uVar17 >> 0x38);
      } while ((uVar18 != 0) && (lVar27 = lVar27 + uVar18, uVar18 < uVar26));
      if (lVar27 != 0) goto LAB_1800bd0d0;
      uVar18 = FUN_1801d6710(CONCAT71((int7)(uVar26 - uVar18 >> 8),0x25),
                             "unexpected EOF during handshake",0x1f);
      break;
    }
LAB_1800bd0d0:
    FUN_180027490();
    ppCVar13 = (PCCERT_CHAIN_CONTEXT *)thunk_FUN_1801d32d0(0x20,8);
    if (ppCVar13 == (PCCERT_CHAIN_CONTEXT *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x20);
    }
    uVar26._0_4_ = param_2[1].fHasRevocationFreshnessTime;
    uVar26._4_4_ = param_2[1].dwRevocationFreshnessTime;
    if (uVar26 < uVar22) {
      local_f0._16_8_ = ppCVar13;
                    /* WARNING: Subroutine does not return */
      FUN_180201a30(0,uVar22,uVar26,&PTR_s_C__Users_burne__cargo_registry_s_1802129d0);
    }
    pCVar15 = (PCCERT_CHAIN_CONTEXT)param_2[1].rgpLowerQualityChainContext;
    *(int *)ppCVar13 = (int)uVar22;
    *(undefined4 *)((longlong)ppCVar13 + 4) = 2;
    ppCVar13[1] = pCVar15;
    ppCVar13[2] = (PCCERT_CHAIN_CONTEXT)0x0;
    ppCVar13[3] = (PCCERT_CHAIN_CONTEXT)0x0;
    local_a8._0_8_ = (PCCERT_CHAIN_CONTEXT)0x2;
    local_a8._16_8_ = (PCCERT_CHAIN_CONTEXT)0x2;
    local_a8._8_8_ = ppCVar13;
    if (SBORROW8(0,*(longlong *)&param_2[2].fHasRevocationFreshnessTime)) {
      local_d8 = (PCCERT_CHAIN_CONTEXT)0x0;
    }
    else {
      uVar14._0_4_ = param_2[2].dwCreateFlags;
      uVar14._4_4_ = param_2[2].ChainId.Data1;
      uVar4._0_2_ = param_2[2].ChainId.Data2;
      uVar4._2_2_ = param_2[2].ChainId.Data3;
      uVar4._4_1_ = param_2[2].ChainId.Data4[0];
      uVar4._5_1_ = param_2[2].ChainId.Data4[1];
      uVar4._6_1_ = param_2[2].ChainId.Data4[2];
      uVar4._7_1_ = param_2[2].ChainId.Data4[3];
      FUN_180101d80(&local_158,uVar14,uVar4);
      uVar14 = local_a8._16_8_;
      DVar12 = local_158.RequestedUsage.dwType;
      pCVar15 = (PCCERT_CHAIN_CONTEXT)
                CONCAT44(local_158.RequestedUsage.Usage._4_4_,
                         local_158.RequestedUsage.Usage.cUsageIdentifier);
      local_d8 = (PCCERT_CHAIN_CONTEXT)local_158._0_8_;
      ppCStack_d0 = (PCCERT_CHAIN_CONTEXT *)
                    CONCAT44(local_158.RequestedUsage._4_4_,local_158.RequestedUsage.dwType);
      local_c8 = pCVar15;
      if ((PCCERT_CHAIN_CONTEXT)local_158._0_8_ != (PCCERT_CHAIN_CONTEXT)0x0) {
        if (local_a8._16_8_ == local_a8._0_8_) {
          FUN_1801f8fa0(local_a8);
        }
        *(DWORD *)(local_a8._8_8_ + uVar14 * 2 * 8) = DVar12;
        *(undefined4 *)(local_a8._8_8_ + uVar14 * 0x10 + 4) = 0x12;
        *(PCCERT_CHAIN_CONTEXT *)(local_a8._8_8_ + (uVar14 * 2 + 1) * 8) = pCVar15;
        local_a8._16_8_ = (longlong)(DWORD *)uVar14 + 1;
        puVar28 = local_b0;
      }
    }
    local_f0._0_8_ = local_a8._16_8_ << 0x20;
    local_f0._8_8_ = local_a8._8_8_;
    local_158._0_8_ = (PCCERT_CHAIN_CONTEXT)0x200000000;
    local_158.RequestedUsage.dwType = 0;
    local_158.RequestedUsage._4_4_ = 0;
    local_158.RequestedUsage.Usage.cUsageIdentifier = 0;
    local_158.RequestedUsage.Usage._4_4_ = 0x11;
    local_158.RequestedUsage.Usage.rgpszUsageIdentifier = (LPSTR *)0x0;
    uStack_138 = 0;
    local_130 = 0;
    local_188 = (PCCERT_CHAIN_CONTEXT)0x300000000;
    local_180 = (PCCERT_CHAIN_CONTEXT *)&local_158;
    local_c0 = (PCCERT_CHAIN_CONTEXT)((ulonglong)local_c0 & 0xffffffff00000000);
    if (*(char *)((longlong)&param_2[4].cbSize + 2) == '\0') {
      uVar14 = 0;
      if ((param_2[4].cbSize & 1) != 0) {
        uVar14 = *(undefined8 *)&param_2[2].cLowerQualityChainContext;
      }
      if (SBORROW8(0,(longlong)param_2[2].rgpChain)) {
        uVar14 = 0;
      }
      unique0x10000e32 = (char *)param_2[3].rgpChain[2];
      pCStack_80 = (PCCERT_CHAIN_CONTEXT)param_2[3].rgpChain[3];
      in_stack_fffffffffffffe20 =
           (PCCERT_CHAIN_CONTEXT *)((ulonglong)in_stack_fffffffffffffe20 & 0xffffffff00000000);
      in_stack_fffffffffffffe10 =
           (PCCERT_CHAIN_CONTEXT)((ulonglong)in_stack_fffffffffffffe10 & 0xffffffff00000000);
      in_stack_fffffffffffffe08 = (PCERT_CHAIN_PARA)((ulonglong)uVar8 << 0x20);
      uVar8 = InitializeSecurityContextW
                        (local_a8 + 0x20,local_f8,uVar14,0x9819c,in_stack_fffffffffffffe08,
                         in_stack_fffffffffffffe10,local_f0,in_stack_fffffffffffffe20,0,&local_188,
                         &local_c0,0);
    }
    else {
      pCVar15 = local_f8;
      if (*(char *)((longlong)&param_2[4].cbSize + 3) != '\0') {
        pCVar15 = (PCCERT_CHAIN_CONTEXT)0x0;
      }
      unique0x10000e22 = (char *)param_2[3].rgpChain[2];
      pCStack_80 = (PCCERT_CHAIN_CONTEXT)param_2[3].rgpChain[3];
      in_stack_fffffffffffffe20 = &local_c0;
      in_stack_fffffffffffffe08 = (PCERT_CHAIN_PARA)((ulonglong)uVar8 << 0x20);
      in_stack_fffffffffffffe10 = local_f8;
      uVar8 = AcceptSecurityContext
                        (local_a8 + 0x20,pCVar15,local_f0,0x1011c,in_stack_fffffffffffffe08,local_f8
                         ,&local_188,in_stack_fffffffffffffe20,0);
    }
    if (local_158.RequestedUsage.Usage.rgpszUsageIdentifier != (LPSTR *)0x0) {
      FreeContextBuffer();
    }
    if (local_130 != 0) {
      FreeContextBuffer();
    }
    if (uVar8 == 0x80090318) {
      if ((ulonglong)local_a8._16_8_ < (PCCERT_CHAIN_CONTEXT)0x2) {
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(1,local_a8._16_8_,&PTR_s_C__Users_burne__cargo_registry_s_1802129b8);
      }
      if (*(int *)(local_a8._8_8_ + 0x14) == 4) {
        uVar18 = (ulonglong)*(uint *)(local_a8._8_8_ + 0x10);
        param_2[3].ChainId.Data2 = (short)uVar18;
        param_2[3].ChainId.Data3 = (short)(uVar18 >> 0x10);
        param_2[3].ChainId.Data4[0] = (char)(uVar18 >> 0x20);
        param_2[3].ChainId.Data4[1] = (char)(uVar18 >> 0x28);
        param_2[3].ChainId.Data4[2] = (char)(uVar18 >> 0x30);
        param_2[3].ChainId.Data4[3] = (char)(uVar18 >> 0x38);
      }
      else {
        param_2[3].ChainId.Data2 = 1;
        param_2[3].ChainId.Data3 = 0;
        param_2[3].ChainId.Data4[0] = '\0';
        param_2[3].ChainId.Data4[1] = '\0';
        param_2[3].ChainId.Data4[2] = '\0';
        param_2[3].ChainId.Data4[3] = '\0';
      }
joined_r0x0001800bd4fc:
      if (local_d8 != (PCCERT_CHAIN_CONTEXT)0x0) {
        FUN_180101bd0(&local_d8);
      }
      uVar18 = 0;
      pCVar15 = (PCCERT_CHAIN_CONTEXT)local_a8._0_8_;
      uVar22 = 0;
      if ((PCCERT_CHAIN_CONTEXT)local_a8._0_8_ != (PCCERT_CHAIN_CONTEXT)0x0) goto LAB_1800bd886;
    }
    else {
      if (uVar8 == 0) {
        if ((ulonglong)local_a8._16_8_ < (PCCERT_CHAIN_CONTEXT)0x2) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(1,local_a8._16_8_,&PTR_s_C__Users_burne__cargo_registry_s_180212988);
        }
        if (*(int *)(local_a8._8_8_ + 0x14) == 5) {
          uVar18 = *(ulonglong *)&param_2[1].dwCreateFlags;
          uVar20 = uVar18 - *(uint *)(local_a8._8_8_ + 0x10);
          if (CONCAT44(local_158.RequestedUsage._4_4_,local_158.RequestedUsage.dwType) != 0)
          goto LAB_1800bd49a;
LAB_1800bd597:
          bVar6 = false;
          stack0xffffffffffffff78 = (char *)0x0;
          bVar29 = uVar18 == uVar20;
          if (uVar18 < uVar20) {
LAB_1800bde83:
            register0x000000ac = local_158.RequestedUsage._4_1_;
            register0x000000ad = local_158.RequestedUsage._5_1_;
            register0x000000ae = local_158.RequestedUsage._6_1_;
            register0x000000af = local_158.RequestedUsage._7_1_;
            _local_b8 = (undefined2)local_158.RequestedUsage.dwType;
            register0x000000aa = local_158.RequestedUsage.dwType._2_2_;
            local_62 = 1;
                    /* WARNING: Subroutine does not return */
            FUN_180201ec0("assertion failed: size >= nread",0x1f,
                          &PTR_s_C__Users_burne__cargo_registry_s_180212970);
          }
        }
        else {
          uVar20._0_4_ = param_2[1].dwCreateFlags;
          uVar20._4_4_ = param_2[1].ChainId.Data1;
          uVar18 = uVar20;
          if (CONCAT44(local_158.RequestedUsage._4_4_,local_158.RequestedUsage.dwType) == 0)
          goto LAB_1800bd597;
LAB_1800bd49a:
          pCStack_80 = (PCCERT_CHAIN_CONTEXT)local_158._0_8_;
          local_78 = (PCCERT_CHAIN_CONTEXT)
                     CONCAT44(local_158.RequestedUsage._4_4_,local_158.RequestedUsage.dwType);
          bVar6 = true;
          stack0xffffffffffffff78 = (char *)0x1;
          bVar29 = uVar18 == uVar20;
          if (uVar18 < uVar20) goto LAB_1800bde83;
        }
        uVar23._4_1_ = local_158.RequestedUsage._4_1_;
        uVar23._5_1_ = local_158.RequestedUsage._5_1_;
        uVar23._6_1_ = local_158.RequestedUsage._6_1_;
        uVar23._7_1_ = local_158.RequestedUsage._7_1_;
        uVar23._0_2_ = (undefined2)local_158.RequestedUsage.dwType;
        uVar23._2_2_ = local_158.RequestedUsage.dwType._2_2_;
        if (!bVar29) {
          uVar22 = *(ulonglong *)&param_2[1].fHasRevocationFreshnessTime;
          if (uVar22 < uVar20) {
            local_62 = 1;
            _local_b8 = uVar23;
                    /* WARNING: Subroutine does not return */
            FUN_180201a30(0,uVar20,uVar22,&PTR_s_C__Users_burne__rustup_toolchain_18020f518);
          }
          param_2[1].fHasRevocationFreshnessTime = 0;
          param_2[1].dwRevocationFreshnessTime = 0;
          if (uVar20 == 0) {
            if (uVar22 != 0) goto LAB_1800bd6ef;
          }
          else if (uVar22 != uVar20) {
            memmove(param_2[1].rgpLowerQualityChainContext,
                    (void *)((longlong)param_2[1].rgpLowerQualityChainContext + uVar20),
                    uVar22 - uVar20);
LAB_1800bd6ef:
            *(ulonglong *)&param_2[1].fHasRevocationFreshnessTime = uVar22 - uVar20;
          }
        }
        puVar28 = local_b0;
        uVar22 = (ulonglong)(uVar18 - uVar20 == 0);
        *(ulonglong *)&param_2[1].dwCreateFlags = uVar18 - uVar20;
        param_2[3].ChainId.Data2 = (short)uVar22;
        param_2[3].ChainId.Data3 = (short)(uVar22 >> 0x10);
        param_2[3].ChainId.Data4[0] = (char)(uVar22 >> 0x20);
        param_2[3].ChainId.Data4[1] = (char)(uVar22 >> 0x28);
        param_2[3].ChainId.Data4[2] = (char)(uVar22 >> 0x30);
        param_2[3].ChainId.Data4[3] = (char)(uVar22 >> 0x38);
        unaff_R12D = local_f0._16_4_;
        if (bVar6) {
          local_168 = pCStack_80;
          DStack_160 = (DWORD)local_78;
          uStack_15c = local_78._4_4_;
          uVar18 = (ulonglong)pCStack_80 & 0xffffffff;
          pCVar15 = (PCCERT_CHAIN_CONTEXT)0x1;
          if ((int)pCStack_80 != 0) {
            pCVar15 = local_78;
          }
          lVar24 = *(longlong *)(param_2 + 2);
          _local_b8 = uVar23;
          if ((ulonglong)(*(longlong *)&param_2[1].ChainId.Data2 - lVar24) < uVar18) {
            in_stack_fffffffffffffe08 = (PCERT_CHAIN_PARA)0x0;
            FUN_1801f6a80(puVar1,lVar24,uVar18,1,1);
            lVar24._0_4_ = param_2[2].cbSize;
            lVar24._4_4_ = param_2[2].TrustStatus.dwErrorStatus;
          }
          memcpy((void *)(*(longlong *)(param_2[1].ChainId.Data4 + 4) + lVar24),pCVar15,uVar18);
          *(ulonglong *)(param_2 + 2) = lVar24 + uVar18;
          local_62 = 0;
          FUN_180101c00(&local_168);
        }
        if (param_2[2].ChainId.Data4[4] == '\0') {
          param_2[2].ChainId.Data4[6] = '\0';
        }
        goto joined_r0x0001800bd4fc;
      }
      if (uVar8 == 0x90312) {
        *(undefined1 *)((longlong)&param_2[4].cbSize + 3) = 0;
        if ((ulonglong)local_a8._16_8_ < (PCCERT_CHAIN_CONTEXT)0x2) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(1,local_a8._16_8_,&PTR_s_C__Users_burne__cargo_registry_s_1802129a0);
        }
        if (*(int *)(local_a8._8_8_ + 0x14) == 5) {
          uVar18 = *(ulonglong *)&param_2[1].dwCreateFlags;
          uVar8 = *(uint *)(local_a8._8_8_ + 0x10);
          unique0x10000e42 = (char *)local_158._0_8_;
          pCStack_80 = (PCCERT_CHAIN_CONTEXT)
                       CONCAT44(local_158.RequestedUsage._4_4_,local_158.RequestedUsage.dwType);
          uVar19 = uVar18 - uVar8;
          if (uVar18 < uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_180201ec0("assertion failed: size >= nread",0x1f,
                          &PTR_s_C__Users_burne__cargo_registry_s_180212970);
          }
          if (uVar8 == 0) {
            uVar14 = 1;
          }
          else {
            uVar22 = *(ulonglong *)&param_2[1].fHasRevocationFreshnessTime;
            _Size = uVar22 - uVar19;
            if (uVar22 < uVar19) {
                    /* WARNING: Subroutine does not return */
              FUN_180201a30(0,uVar19,uVar22,&PTR_s_C__Users_burne__rustup_toolchain_18020f518);
            }
            param_2[1].fHasRevocationFreshnessTime = 0;
            param_2[1].dwRevocationFreshnessTime = 0;
            if (uVar19 == 0) {
              if (uVar22 != 0) {
                *(size_t *)&param_2[1].fHasRevocationFreshnessTime = _Size;
              }
              uVar14 = 0;
              uVar19 = 0;
            }
            else {
              if (uVar22 != uVar19) {
                memmove(param_2[1].rgpLowerQualityChainContext,
                        (void *)((longlong)param_2[1].rgpLowerQualityChainContext + uVar19),_Size);
                *(size_t *)&param_2[1].fHasRevocationFreshnessTime = _Size;
              }
              uVar14 = 0;
            }
          }
        }
        else {
          uVar19._0_4_ = param_2[1].dwCreateFlags;
          uVar19._4_4_ = param_2[1].ChainId.Data1;
          pCStack_80 = (PCCERT_CHAIN_CONTEXT)
                       CONCAT44(local_158.RequestedUsage._4_4_,local_158.RequestedUsage.dwType);
          stack0xffffffffffffff78 = (char *)local_158._0_8_;
          uVar14 = 1;
          uVar18 = uVar19;
        }
        *(ulonglong *)&param_2[1].dwCreateFlags = uVar18 - uVar19;
        param_2[3].ChainId.Data2 = (short)uVar14;
        param_2[3].ChainId.Data3 = (short)((ulonglong)uVar14 >> 0x10);
        param_2[3].ChainId.Data4[0] = (char)((ulonglong)uVar14 >> 0x20);
        param_2[3].ChainId.Data4[1] = (char)((ulonglong)uVar14 >> 0x28);
        param_2[3].ChainId.Data4[2] = (char)((ulonglong)uVar14 >> 0x30);
        param_2[3].ChainId.Data4[3] = (char)((ulonglong)uVar14 >> 0x38);
        uVar18 = (ulonglong)stack0xffffffffffffff78 & 0xffffffff;
        pCVar15 = (PCCERT_CHAIN_CONTEXT)0x1;
        if (uVar18 != 0) {
          pCVar15 = pCStack_80;
        }
        lVar25 = *(longlong *)(param_2 + 2);
        if ((ulonglong)(*(longlong *)&param_2[1].ChainId.Data2 - lVar25) < uVar18) {
          in_stack_fffffffffffffe08 = (PCERT_CHAIN_PARA)0x0;
          FUN_1801f6a80(puVar1,lVar25,uVar18,1,1);
          lVar25._0_4_ = param_2[2].cbSize;
          lVar25._4_4_ = param_2[2].TrustStatus.dwErrorStatus;
        }
        memcpy((void *)(*(longlong *)(param_2[1].ChainId.Data4 + 4) + lVar25),pCVar15,uVar18);
        *(ulonglong *)(param_2 + 2) = lVar25 + uVar18;
        FUN_180101c00(local_a8 + 0x20);
        puVar28 = local_b0;
        goto joined_r0x0001800bd4fc;
      }
      if (local_d8 != (PCCERT_CHAIN_CONTEXT)0x0) {
        FUN_180101bd0(&local_d8);
      }
      uVar18 = (ulonglong)uVar8 << 0x20 | 2;
      uVar22 = uVar18;
      if ((PCCERT_CHAIN_CONTEXT)local_a8._0_8_ == (PCCERT_CHAIN_CONTEXT)0x0) break;
LAB_1800bd886:
      uVar18 = uVar22;
      pCVar15 = (PCCERT_CHAIN_CONTEXT)(local_a8._0_8_ << 4);
      thunk_FUN_1801d3330(local_a8._8_8_,pCVar15,8);
    }
  } while (uVar18 == 0);
  *(ulonglong *)(puVar28 + 2) = uVar18;
  goto LAB_1800bdd0b;
LAB_1800bdc93:
  uVar7 = '\x02';
LAB_1800bdcc3:
  param_2[2].ChainId.Data4[4] = uVar7;
  *(undefined4 *)&param_2[2].field_0x44 = unaff_R12D;
  param_2[3].cbSize = (undefined4)local_1b0;
  param_2[3].TrustStatus.dwErrorStatus = local_1b0._4_4_;
  *(undefined4 **)&param_2[3].TrustStatus.dwInfoStatus = param_1;
  *(undefined1 *)&param_2[4].TrustStatus.dwErrorStatus = 0;
  goto LAB_1800bce2d;
LAB_1800bdd00:
  *(ulonglong *)(local_b0 + 2) = uVar18;
  puVar28 = local_b0;
LAB_1800bdd0b:
  uVar11 = 2;
LAB_1800bdd10:
  *puVar28 = uVar11;
  return;
}


