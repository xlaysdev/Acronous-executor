/* FUN_1800be470 @ 1800be470 */

/* WARNING: Type propagation algorithm not settling */

void FUN_1800be470(undefined4 *param_1,PCCERT_CHAIN_CONTEXT param_2)

{
  uchar *puVar1;
  char cVar2;
  char cVar3;
  uchar uVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  BOOL BVar10;
  int iVar11;
  undefined4 uVar12;
  DWORD DVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  PCCERT_CHAIN_CONTEXT pCVar16;
  PCCERT_CHAIN_CONTEXT pCVar17;
  PCCERT_CHAIN_CONTEXT _Buf2;
  PCCERT_CHAIN_CONTEXT *ppCVar18;
  ulonglong uVar19;
  byte bVar20;
  PCERT_SIMPLE_CHAIN *pp_Var21;
  undefined4 unaff_R12D;
  undefined1 *_Dst;
  PCCERT_CHAIN_CONTEXT *ppCVar22;
  undefined8 uVar23;
  PCCERT_CHAIN_CONTEXT *ppCVar24;
  PCCERT_CHAIN_CONTEXT *_Size;
  longlong lVar25;
  undefined4 *puVar26;
  bool bVar27;
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
  puVar1 = param_2[2].ChainId.Data4;
  local_f8 = (PCCERT_CHAIN_CONTEXT)&param_2[3].rgpChain;
  local_178 = &(param_2->TrustStatus).dwInfoStatus;
  pCVar16 = param_2;
  puVar26 = param_1;
  local_b0 = param_1;
LAB_1800be4da:
  local_f0._16_4_ = unaff_R12D;
  do {
    cVar2 = (char)param_2[2].ChainId.Data2;
    if (cVar2 != '\0') {
      if (cVar2 == '\x01') {
        puVar26[5] = param_2[3].TrustStatus.dwErrorStatus;
        uVar15 = *(undefined8 *)&param_2[2].field_0x44;
        *(undefined8 *)(puVar26 + 1) = *(undefined8 *)puVar1;
        *(undefined8 *)(puVar26 + 3) = uVar15;
        uVar12 = 1;
      }
      else {
        uVar12 = 0;
      }
      goto LAB_1800bf3b0;
    }
    cVar2 = *(char *)((longlong)&param_2[2].ChainId.Data2 + 1);
    bVar20 = (byte)param_2[2].ChainId.Data3;
    cVar3 = *(char *)((longlong)&param_2[2].ChainId.Data3 + 1);
    uVar4 = param_2[2].ChainId.Data4[0];
    if (param_2[3].field_0x44 != '\0') {
LAB_1800be530:
      if (cVar2 != '\0') goto LAB_1800be535;
LAB_1800be54d:
      if (cVar3 != '\0') goto LAB_1800be556;
LAB_1800be61b:
      puVar26 = local_b0;
      if ((uVar4 == '\0') && (param_2[3].ChainId.Data4[6] == '\0')) {
        local_b8 = bVar20;
        local_158._0_8_ = FUN_180101530(local_f8);
        local_158.RequestedUsage.dwType = (DWORD)pCVar16;
        local_158.RequestedUsage._4_4_ = SUB84((ulonglong)pCVar16 >> 0x20,0);
        if ((local_b8 & (byte)local_158._0_8_) != 0) {
          FUN_1800b9a50(&local_158);
          uVar9 = (uint)((ulonglong)in_stack_fffffffffffffe08 >> 0x20);
          ppCVar22 = *(PCCERT_CHAIN_CONTEXT **)&param_2[1].fHasRevocationFreshnessTime;
          ppCVar18 = *(PCCERT_CHAIN_CONTEXT **)&param_2[3].dwCreateFlags;
          goto joined_r0x0001800bec28;
        }
        if ((local_158._0_8_ & 1) == 0) {
          local_c0 = pCVar16;
          register0x00000000 = (char *)FUN_180101110(&local_c0);
          uVar12 = (undefined4)((ulonglong)in_stack_fffffffffffffe10 >> 0x20);
          cVar2 = (char)param_2->cbSize;
          if (((ulonglong)register0x00000000 & 1) == 0) {
            if (cVar2 == '\0') {
              pCVar16 = (PCCERT_CHAIN_CONTEXT)0x0;
            }
            else {
              pCVar16 = *(PCCERT_CHAIN_CONTEXT *)local_178;
            }
          }
          else {
            local_170 = (PCCERT_CHAIN_CONTEXT)CONCAT71(local_170._1_7_,cVar2);
            pCStack_80 = pCVar16;
            local_78 = param_2;
            if (cVar2 == '\0') {
              local_158._0_8_ = pCVar16;
              FUN_180101150(&local_158);
            }
            else {
              local_158._0_8_ = (PCCERT_CHAIN_CONTEXT)0x0;
              local_158.RequestedUsage.Usage.cUsageIdentifier = (DWORD)local_178;
              local_158.RequestedUsage.Usage._4_4_ = SUB84((ulonglong)local_178 >> 0x20,0);
              pCVar17 = pCVar16;
              while( true ) {
                uVar19 = FUN_180101170(&local_158);
                uVar12 = (undefined4)((ulonglong)in_stack_fffffffffffffe10 >> 0x20);
                if ((uVar19 & 1) == 0) break;
                pCVar16 = (PCCERT_CHAIN_CONTEXT)local_a8;
                local_a8._0_8_ = pCVar17;
                uVar19 = FUN_180101230(&pCStack_80);
                if ((uVar19 & 1) != 0) {
                  FUN_180101100(local_a8);
                  if ((PCCERT_CHAIN_CONTEXT)local_158._0_8_ != (PCCERT_CHAIN_CONTEXT)0x0) {
                    FUN_180101100((CERT_USAGE_MATCH *)((longlong)&local_158 + 8));
                  }
                  if ((PCCERT_CHAIN_CONTEXT)stack0xffffffffffffff78 != (PCCERT_CHAIN_CONTEXT)0x0) {
                    FUN_180101150(&pCStack_80);
                  }
                  goto LAB_1800bf4c5;
                }
                local_d8 = pCVar16;
                FUN_180101100(&local_d8);
                FUN_180101100(local_a8);
                pCVar17 = pCVar16;
              }
              if ((PCCERT_CHAIN_CONTEXT)local_158._0_8_ != (PCCERT_CHAIN_CONTEXT)0x0) {
                FUN_180101100((CERT_USAGE_MATCH *)((longlong)&local_158 + 8));
              }
              pCVar16 = pCStack_80;
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
          in_stack_fffffffffffffe10 = (PCCERT_CHAIN_CONTEXT)CONCAT44(uVar12,0xc0000001);
          BVar10 = CertGetCertificateChain
                             ((HCERTCHAINENGINE)0x0,(PCCERT_CONTEXT)local_c0,(LPFILETIME)0x0,pCVar16
                              ,in_stack_fffffffffffffe08,0xc0000001,(LPVOID)0x0,
                              in_stack_fffffffffffffe20);
          if (BVar10 == 0) {
            DVar13 = GetLastError();
            pCVar16 = (PCCERT_CHAIN_CONTEXT)((ulonglong)DVar13 << 0x20 | 2);
          }
          else {
            local_f0._0_8_ = local_d8;
            uVar9 = 0xf00;
            if ((char)param_2->cbSize != '\0') {
              local_61 = 1;
              pCVar16 = (PCCERT_CHAIN_CONTEXT)local_f0;
              FUN_180101c10(local_a8 + 0x20);
              uVar9 = 0xf00;
              if (local_a8._32_4_ == 1) {
                local_a8._0_8_ = pCStack_80;
                local_a8._8_8_ = local_78;
                local_d8 = (PCCERT_CHAIN_CONTEXT)local_a8;
                ppCStack_d0 = (PCCERT_CHAIN_CONTEXT *)0x0;
                do {
                  uVar9 = FUN_180102050(&local_d8);
                  if ((uVar9 & 1) == 0) break;
                  local_158.RequestedUsage.Usage.cUsageIdentifier = (DWORD)local_178;
                  local_158.RequestedUsage.Usage._4_4_ = SUB84((ulonglong)local_178 >> 0x20,0);
                  local_158._0_8_ = (PCCERT_CHAIN_CONTEXT)0x0;
                  pCVar17 = pCVar16;
                  local_188 = pCVar16;
                  do {
                    while( true ) {
                      uVar19 = FUN_180101170(&local_158);
                      if ((uVar19 & 1) == 0) goto LAB_1800bf14a;
                      local_168 = pCVar17;
                      if (*(uint *)&pCVar17->rgpChain == *(uint *)&pCVar16->rgpChain) break;
                      FUN_180101100(&local_168);
                    }
                    _Buf2 = *(PCCERT_CHAIN_CONTEXT *)&(pCVar16->TrustStatus).dwInfoStatus;
                    iVar11 = memcmp(*(void **)&(pCVar17->TrustStatus).dwInfoStatus,_Buf2,
                                    (ulonglong)*(uint *)&pCVar17->rgpChain);
                    FUN_180101100(&local_168);
                    pCVar17 = _Buf2;
                  } while (iVar11 != 0);
LAB_1800bf14a:
                  pCVar16 = pCVar17;
                  if ((PCCERT_CHAIN_CONTEXT)local_158._0_8_ != (PCCERT_CHAIN_CONTEXT)0x0) {
                    FUN_180101100((CERT_USAGE_MATCH *)((longlong)&local_158 + 8));
                  }
                  FUN_180101100(&local_188);
                  puVar26 = local_b0;
                } while ((uVar19 & 1) == 0);
                local_61 = 1;
                FUN_180101bf0(local_a8 + 8);
                uVar9 = (uVar9 & 1) << 4 | 0xf00;
              }
            }
            ppCStack_d0 = (PCCERT_CHAIN_CONTEXT *)0x0;
            local_c8 = (PCCERT_CHAIN_CONTEXT)0x0;
            local_d8 = (PCCERT_CHAIN_CONTEXT)0x200000018;
            if ((!SBORROW8(0,*(longlong *)&param_2[2].TrustStatus.dwInfoStatus)) &&
               (param_2[3].ChainId.Data4[5] == '\0')) {
              local_c8 = (PCCERT_CHAIN_CONTEXT)param_2[2].rgpChain;
            }
            local_a8._4_4_ = uVar9;
            local_a8._0_4_ = 0x10;
            local_a8._8_8_ = &local_d8;
            pCStack_80 = (PCCERT_CHAIN_CONTEXT)0x0;
            local_78 = (PCCERT_CHAIN_CONTEXT)0x0;
            stack0xffffffffffffff78 = &DAT_00000018;
            BVar10 = CertVerifyCertificateChainPolicy
                               (&DAT_00000004,(PCCERT_CHAIN_CONTEXT)local_f0._0_8_,
                                (PCERT_CHAIN_POLICY_PARA)local_a8,
                                (PCERT_CHAIN_POLICY_STATUS)(local_a8 + 0x20));
            if (BVar10 != 0) {
              pCVar16 = (PCCERT_CHAIN_CONTEXT)((ulonglong)uStack_84 << 0x20 | 2);
              if (param_2[3].rgpLowerQualityChainContext == (PCCERT_CHAIN_CONTEXT *)0x0) {
                if (uStack_84 != 0) goto LAB_1800bf4b4;
                FUN_180101bf0(local_f0);
              }
              else {
                local_158._0_8_ = local_f0._0_8_;
                local_158.RequestedUsage.dwType = uStack_84;
                local_158.RequestedUsage._4_4_ = SUB84(pCStack_80,0);
                local_158.RequestedUsage.Usage.cUsageIdentifier =
                     (DWORD)((ulonglong)pCStack_80 >> 0x20);
                local_170 = pCVar16;
                pCVar16 = (PCCERT_CHAIN_CONTEXT)
                          (**(code **)(*(longlong *)&param_2[3].fHasRevocationFreshnessTime + 0x28))
                                    ((longlong)param_2[3].rgpLowerQualityChainContext +
                                     (*(longlong *)
                                       (*(longlong *)&param_2[3].fHasRevocationFreshnessTime + 0x10)
                                      - 1U & 0xfffffffffffffff0) + 0x10);
                if (pCVar16 != (PCCERT_CHAIN_CONTEXT)0x0) goto LAB_1800bf4c5;
              }
              FUN_180101100(&local_c0);
              bVar20 = local_b8;
              if ((char)param_2[2].ChainId.Data2 == '\0') {
                *puVar1 = '\x01';
              }
              goto LAB_1800be634;
            }
            local_61 = 1;
            DVar13 = GetLastError();
            pCVar16 = (PCCERT_CHAIN_CONTEXT)((ulonglong)DVar13 << 0x20 | 2);
LAB_1800bf4b4:
            FUN_180101bf0(local_f0);
          }
LAB_1800bf4c5:
          FUN_180101100(&local_c0);
        }
        *(PCCERT_CHAIN_CONTEXT *)(puVar26 + 2) = pCVar16;
        goto LAB_1800bf3ab;
      }
LAB_1800be634:
      if (bVar20 != '\0') goto LAB_1800be63d;
      pCVar16 = local_f8;
      FUN_180101580(&local_158);
      uVar19 = CONCAT44(local_158.RequestedUsage._4_4_,local_158.RequestedUsage.dwType);
      if ((char)local_158.cbSize != '\0') break;
      param_1 = (undefined4 *)
                CONCAT44(local_158.RequestedUsage.Usage._4_4_,
                         local_158.RequestedUsage.Usage.cUsageIdentifier);
      uVar8 = 1;
      local_1b0 = uVar19;
      unaff_R12D = local_158._4_4_;
      goto LAB_1800bf363;
    }
    pCVar16 = *(PCCERT_CHAIN_CONTEXT *)(param_2[1].ChainId.Data4 + 4);
    pCVar17 = *(PCCERT_CHAIN_CONTEXT *)(param_2 + 2);
    if (pCVar17 == pCVar16) goto LAB_1800be530;
    local_b8 = bVar20;
    lVar25 = 0;
    do {
      if (pCVar16 < pCVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_180201a30(pCVar17,pCVar16,pCVar16,&PTR_s_C__Users_burne__cargo_registry_s_180212ad0);
      }
      uVar19._0_4_ = param_2->dwCreateFlags;
      uVar19._4_4_ = (param_2->ChainId).Data1;
      if (uVar19 == 0) goto LAB_1800bf463;
      uVar14 = thunk_FUN_18016d760(&param_2->rgpChain,uVar19,
                                   (pCVar17->ChainId).Data4 +
                                   *(longlong *)&param_2[1].ChainId.Data2 + -0x3c,
                                   (longlong)pCVar16 - (longlong)pCVar17);
      if ((uVar14 == 2) || ((uVar14 & 1) != 0)) {
        if (uVar14 == 2) {
          uVar19 = 0xd00000003;
        }
        goto LAB_1800bf3a0;
      }
      lVar25 = lVar25 + uVar19;
      pCVar17 = (PCCERT_CHAIN_CONTEXT)((pCVar17->ChainId).Data4 + (uVar19 - 0x3c));
      *(PCCERT_CHAIN_CONTEXT *)(param_2 + 2) = pCVar17;
      pCVar16 = *(PCCERT_CHAIN_CONTEXT *)(param_2[1].ChainId.Data4 + 4);
    } while (pCVar17 != pCVar16);
    unaff_R12D = local_f0._16_4_;
    bVar20 = local_b8;
    if (lVar25 == 0) goto LAB_1800be530;
    if ((char)param_2[2].ChainId.Data2 == '\0') {
      *(undefined1 *)((longlong)&param_2[2].ChainId.Data2 + 1) = 1;
    }
LAB_1800be535:
    lVar25._0_4_ = param_2->dwCreateFlags;
    lVar25._4_4_ = (param_2->ChainId).Data1;
    if (lVar25 == 0) {
LAB_1800bf463:
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("assertion failed: !self.context.is_null()",0x29,
                    &PTR_s_C__Users_burne__cargo_registry_s_180216370);
    }
    if ((char)param_2[2].ChainId.Data2 != '\0') goto LAB_1800be54d;
    *(undefined1 *)((longlong)&param_2[2].ChainId.Data2 + 1) = 0;
    if (cVar3 == '\0') goto LAB_1800be61b;
LAB_1800be556:
    puVar26 = local_b0;
    if (bVar20 == '\0') goto LAB_1800bf333;
LAB_1800be63d:
    uVar9 = (uint)((ulonglong)in_stack_fffffffffffffe08 >> 0x20);
    ppCVar22 = *(PCCERT_CHAIN_CONTEXT **)&param_2[1].fHasRevocationFreshnessTime;
    ppCVar18 = *(PCCERT_CHAIN_CONTEXT **)&param_2[3].dwCreateFlags;
joined_r0x0001800bec28:
    if (ppCVar18 != (PCCERT_CHAIN_CONTEXT *)0x0) {
      lVar25 = 0;
      do {
        if (ppCVar18 < (PCCERT_CHAIN_CONTEXT *)((longlong)ppCVar22 * 2)) {
          ppCVar18 = (PCCERT_CHAIN_CONTEXT *)((longlong)ppCVar22 * 2);
        }
        if (ppCVar18 < (PCCERT_CHAIN_CONTEXT *)0x401) {
          ppCVar18 = (PCCERT_CHAIN_CONTEXT *)0x400;
        }
        ppCVar24 = param_2[1].rgpLowerQualityChainContext;
        uVar19 = (longlong)ppCVar18 - (longlong)ppCVar24;
        if (ppCVar24 <= ppCVar18 && uVar19 != 0) {
          if ((ulonglong)((longlong)param_2[1].rgpChain - (longlong)ppCVar24) < uVar19) {
            in_stack_fffffffffffffe08 = (PCERT_CHAIN_PARA)0x0;
            FUN_1801f6a80(&param_2[1].rgpChain,ppCVar24,uVar19,1,1);
            ppCVar24 = param_2[1].rgpLowerQualityChainContext;
            lVar5 = *(longlong *)&param_2[1].cLowerQualityChainContext;
            _Dst = (undefined1 *)(lVar5 + (longlong)ppCVar24);
          }
          else {
            lVar5 = *(longlong *)&param_2[1].cLowerQualityChainContext;
            _Dst = (undefined1 *)(lVar5 + (longlong)ppCVar24);
          }
          if (1 < uVar19) {
            memset(_Dst,0,uVar19 - 1);
            ppCVar24 = (PCCERT_CHAIN_CONTEXT *)((longlong)ppCVar24 + (uVar19 - 1));
            _Dst = (undefined1 *)(lVar5 + (longlong)ppCVar24);
          }
          *_Dst = 0;
          ppCVar24 = (PCCERT_CHAIN_CONTEXT *)((longlong)ppCVar24 + 1);
          param_2[1].rgpLowerQualityChainContext = ppCVar24;
          unaff_R12D = local_f0._16_4_;
        }
        if (ppCVar24 < ppCVar22) {
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(ppCVar22,ppCVar24,ppCVar24,&PTR_s_C__Users_burne__cargo_registry_s_180212a78
                       );
        }
        uVar19 = *(longlong *)&param_2[1].cLowerQualityChainContext + (longlong)ppCVar22;
        uVar14 = FUN_1800f04f0(&param_2->rgpChain,uVar19,(longlong)ppCVar24 - (longlong)ppCVar22);
        puVar26 = local_b0;
        uVar9 = (uint)((ulonglong)in_stack_fffffffffffffe08 >> 0x20);
        if ((uVar14 & 1) != 0) goto LAB_1800bf3a0;
        ppCVar22 = (PCCERT_CHAIN_CONTEXT *)((longlong)ppCVar22 + uVar19);
        *(PCCERT_CHAIN_CONTEXT **)&param_2[1].fHasRevocationFreshnessTime = ppCVar22;
        uVar14 = *(ulonglong *)&param_2[3].dwCreateFlags;
        ppCVar18 = (PCCERT_CHAIN_CONTEXT *)0x0;
        if (uVar19 <= uVar14) {
          ppCVar18 = (PCCERT_CHAIN_CONTEXT *)(uVar14 - uVar19);
        }
        *(PCCERT_CHAIN_CONTEXT **)&param_2[3].dwCreateFlags = ppCVar18;
      } while ((uVar19 != 0) && (lVar25 = lVar25 + uVar19, uVar19 < uVar14));
      if (lVar25 != 0) goto LAB_1800be780;
      uVar19 = FUN_1801d6710(CONCAT71((int7)(uVar14 - uVar19 >> 8),0x25),
                             "unexpected EOF during handshake",0x1f);
      break;
    }
LAB_1800be780:
    FUN_180027490();
    ppCVar18 = (PCCERT_CHAIN_CONTEXT *)thunk_FUN_1801d32d0(0x20,8);
    if (ppCVar18 == (PCCERT_CHAIN_CONTEXT *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x20);
    }
    if (param_2[1].rgpLowerQualityChainContext < ppCVar22) {
      local_f0._16_8_ = ppCVar18;
                    /* WARNING: Subroutine does not return */
      FUN_180201a30(0,ppCVar22,param_2[1].rgpLowerQualityChainContext,
                    &PTR_s_C__Users_burne__cargo_registry_s_1802129d0);
    }
    pCVar16 = *(PCCERT_CHAIN_CONTEXT *)&param_2[1].cLowerQualityChainContext;
    *(int *)ppCVar18 = (int)ppCVar22;
    *(undefined4 *)((longlong)ppCVar18 + 4) = 2;
    ppCVar18[1] = pCVar16;
    ppCVar18[2] = (PCCERT_CHAIN_CONTEXT)0x0;
    ppCVar18[3] = (PCCERT_CHAIN_CONTEXT)0x0;
    local_a8._0_8_ = (PCCERT_CHAIN_CONTEXT)0x2;
    local_a8._16_8_ = (PCCERT_CHAIN_CONTEXT)0x2;
    local_a8._8_8_ = ppCVar18;
    if (SBORROW8(0,(longlong)param_2[2].rgpLowerQualityChainContext)) {
      local_d8 = (PCCERT_CHAIN_CONTEXT)0x0;
    }
    else {
      uVar15._0_4_ = param_2[2].fHasRevocationFreshnessTime;
      uVar15._4_4_ = param_2[2].dwRevocationFreshnessTime;
      uVar6._0_4_ = param_2[2].dwCreateFlags;
      uVar6._4_4_ = param_2[2].ChainId.Data1;
      FUN_180101d80(&local_158,uVar15,uVar6);
      uVar15 = local_a8._16_8_;
      DVar13 = local_158.RequestedUsage.dwType;
      pCVar16 = (PCCERT_CHAIN_CONTEXT)
                CONCAT44(local_158.RequestedUsage.Usage._4_4_,
                         local_158.RequestedUsage.Usage.cUsageIdentifier);
      local_d8 = (PCCERT_CHAIN_CONTEXT)local_158._0_8_;
      ppCStack_d0 = (PCCERT_CHAIN_CONTEXT *)
                    CONCAT44(local_158.RequestedUsage._4_4_,local_158.RequestedUsage.dwType);
      local_c8 = pCVar16;
      if ((PCCERT_CHAIN_CONTEXT)local_158._0_8_ != (PCCERT_CHAIN_CONTEXT)0x0) {
        if (local_a8._16_8_ == local_a8._0_8_) {
          FUN_1801f8fa0(local_a8);
        }
        *(DWORD *)(local_a8._8_8_ + uVar15 * 2 * 8) = DVar13;
        *(undefined4 *)(local_a8._8_8_ + uVar15 * 0x10 + 4) = 0x12;
        *(PCCERT_CHAIN_CONTEXT *)(local_a8._8_8_ + (uVar15 * 2 + 1) * 8) = pCVar16;
        local_a8._16_8_ = (longlong)(DWORD *)uVar15 + 1;
        puVar26 = local_b0;
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
    if (param_2[3].ChainId.Data4[6] == '\0') {
      pp_Var21 = (PCERT_SIMPLE_CHAIN *)0x0;
      if ((param_2[3].ChainId.Data4[4] & 1) != 0) {
        pp_Var21 = param_2[2].rgpChain;
      }
      if (SBORROW8(0,*(longlong *)&param_2[2].TrustStatus.dwInfoStatus)) {
        pp_Var21 = (PCERT_SIMPLE_CHAIN *)0x0;
      }
      lVar25 = *(longlong *)&param_2[3].TrustStatus.dwInfoStatus;
      unique0x10000e32 = *(char **)(lVar25 + 0x10);
      pCStack_80 = *(PCCERT_CHAIN_CONTEXT *)(lVar25 + 0x18);
      in_stack_fffffffffffffe20 =
           (PCCERT_CHAIN_CONTEXT *)((ulonglong)in_stack_fffffffffffffe20 & 0xffffffff00000000);
      in_stack_fffffffffffffe10 =
           (PCCERT_CHAIN_CONTEXT)((ulonglong)in_stack_fffffffffffffe10 & 0xffffffff00000000);
      in_stack_fffffffffffffe08 = (PCERT_CHAIN_PARA)((ulonglong)uVar9 << 0x20);
      uVar9 = InitializeSecurityContextW
                        (local_a8 + 0x20,local_f8,pp_Var21,0x9819c,in_stack_fffffffffffffe08,
                         in_stack_fffffffffffffe10,local_f0,in_stack_fffffffffffffe20,0,&local_188,
                         &local_c0,0);
    }
    else {
      pCVar16 = local_f8;
      if (param_2[3].ChainId.Data4[7] != '\0') {
        pCVar16 = (PCCERT_CHAIN_CONTEXT)0x0;
      }
      lVar25 = *(longlong *)&param_2[3].TrustStatus.dwInfoStatus;
      unique0x10000e22 = *(char **)(lVar25 + 0x10);
      pCStack_80 = *(PCCERT_CHAIN_CONTEXT *)(lVar25 + 0x18);
      in_stack_fffffffffffffe20 = &local_c0;
      in_stack_fffffffffffffe08 = (PCERT_CHAIN_PARA)((ulonglong)uVar9 << 0x20);
      in_stack_fffffffffffffe10 = local_f8;
      uVar9 = AcceptSecurityContext
                        (local_a8 + 0x20,pCVar16,local_f0,0x1011c,in_stack_fffffffffffffe08,local_f8
                         ,&local_188,in_stack_fffffffffffffe20,0);
    }
    if (local_158.RequestedUsage.Usage.rgpszUsageIdentifier != (LPSTR *)0x0) {
      FreeContextBuffer();
    }
    if (local_130 != 0) {
      FreeContextBuffer();
    }
    if (uVar9 == 0x80090318) {
      if ((ulonglong)local_a8._16_8_ < (PCCERT_CHAIN_CONTEXT)0x2) {
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(1,local_a8._16_8_,&PTR_s_C__Users_burne__cargo_registry_s_1802129b8);
      }
      if (*(int *)(local_a8._8_8_ + 0x14) == 4) {
        uVar9 = *(uint *)(local_a8._8_8_ + 0x10);
        param_2[3].dwCreateFlags = (int)(ulonglong)uVar9;
        param_2[3].ChainId.Data1 = (int)((ulonglong)uVar9 >> 0x20);
      }
      else {
        param_2[3].dwCreateFlags = 1;
        param_2[3].ChainId.Data1 = 0;
      }
joined_r0x0001800bebac:
      if (local_d8 != (PCCERT_CHAIN_CONTEXT)0x0) {
        FUN_180101bd0(&local_d8);
      }
      uVar19 = 0;
      pCVar16 = (PCCERT_CHAIN_CONTEXT)local_a8._0_8_;
      uVar14 = 0;
      if ((PCCERT_CHAIN_CONTEXT)local_a8._0_8_ != (PCCERT_CHAIN_CONTEXT)0x0) goto LAB_1800bef30;
    }
    else {
      if (uVar9 == 0) {
        if ((ulonglong)local_a8._16_8_ < (PCCERT_CHAIN_CONTEXT)0x2) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(1,local_a8._16_8_,&PTR_s_C__Users_burne__cargo_registry_s_180212988);
        }
        if (*(int *)(local_a8._8_8_ + 0x14) == 5) {
          ppCVar22 = *(PCCERT_CHAIN_CONTEXT **)&param_2[1].fHasRevocationFreshnessTime;
          ppCVar18 = (PCCERT_CHAIN_CONTEXT *)
                     ((longlong)ppCVar22 - (ulonglong)*(uint *)(local_a8._8_8_ + 0x10));
          if (CONCAT44(local_158.RequestedUsage._4_4_,local_158.RequestedUsage.dwType) != 0)
          goto LAB_1800beb4a;
LAB_1800bec47:
          bVar7 = false;
          stack0xffffffffffffff78 = (char *)0x0;
          bVar27 = ppCVar22 == ppCVar18;
          if (ppCVar22 < ppCVar18) {
LAB_1800bf523:
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
          ppCVar18 = *(PCCERT_CHAIN_CONTEXT **)&param_2[1].fHasRevocationFreshnessTime;
          ppCVar22 = ppCVar18;
          if (CONCAT44(local_158.RequestedUsage._4_4_,local_158.RequestedUsage.dwType) == 0)
          goto LAB_1800bec47;
LAB_1800beb4a:
          pCStack_80 = (PCCERT_CHAIN_CONTEXT)local_158._0_8_;
          local_78 = (PCCERT_CHAIN_CONTEXT)
                     CONCAT44(local_158.RequestedUsage._4_4_,local_158.RequestedUsage.dwType);
          bVar7 = true;
          stack0xffffffffffffff78 = (char *)0x1;
          bVar27 = ppCVar22 == ppCVar18;
          if (ppCVar22 < ppCVar18) goto LAB_1800bf523;
        }
        uVar23._4_1_ = local_158.RequestedUsage._4_1_;
        uVar23._5_1_ = local_158.RequestedUsage._5_1_;
        uVar23._6_1_ = local_158.RequestedUsage._6_1_;
        uVar23._7_1_ = local_158.RequestedUsage._7_1_;
        uVar23._0_2_ = (undefined2)local_158.RequestedUsage.dwType;
        uVar23._2_2_ = local_158.RequestedUsage.dwType._2_2_;
        if (!bVar27) {
          ppCVar24 = param_2[1].rgpLowerQualityChainContext;
          if (ppCVar24 < ppCVar18) {
            local_62 = 1;
            _local_b8 = uVar23;
                    /* WARNING: Subroutine does not return */
            FUN_180201a30(0,ppCVar18,ppCVar24,&PTR_s_C__Users_burne__rustup_toolchain_18020f518);
          }
          param_2[1].rgpLowerQualityChainContext = (PCCERT_CHAIN_CONTEXT *)0x0;
          if (ppCVar18 == (PCCERT_CHAIN_CONTEXT *)0x0) {
            if (ppCVar24 != (PCCERT_CHAIN_CONTEXT *)0x0) goto LAB_1800bed9f;
          }
          else if (ppCVar24 != ppCVar18) {
            memmove(*(void **)&param_2[1].cLowerQualityChainContext,
                    (void *)((longlong)*(void **)&param_2[1].cLowerQualityChainContext +
                            (longlong)ppCVar18),(size_t)((longlong)ppCVar24 - (longlong)ppCVar18));
LAB_1800bed9f:
            param_2[1].rgpLowerQualityChainContext =
                 (PCCERT_CHAIN_CONTEXT *)((longlong)ppCVar24 - (longlong)ppCVar18);
          }
        }
        puVar26 = local_b0;
        uVar19 = (ulonglong)((longlong)ppCVar22 - (longlong)ppCVar18 == 0);
        *(longlong *)&param_2[1].fHasRevocationFreshnessTime =
             (longlong)ppCVar22 - (longlong)ppCVar18;
        param_2[3].dwCreateFlags = (int)uVar19;
        param_2[3].ChainId.Data1 = (int)(uVar19 >> 0x20);
        unaff_R12D = local_f0._16_4_;
        if (bVar7) {
          local_168 = pCStack_80;
          DStack_160 = (DWORD)local_78;
          uStack_15c = local_78._4_4_;
          uVar19 = (ulonglong)pCStack_80 & 0xffffffff;
          pCVar16 = (PCCERT_CHAIN_CONTEXT)0x1;
          if ((int)pCStack_80 != 0) {
            pCVar16 = local_78;
          }
          lVar25 = *(longlong *)(param_2[1].ChainId.Data4 + 4);
          _local_b8 = uVar23;
          if ((ulonglong)(*(longlong *)&param_2[1].dwCreateFlags - lVar25) < uVar19) {
            in_stack_fffffffffffffe08 = (PCERT_CHAIN_PARA)0x0;
            FUN_1801f6a80(&param_2[1].dwCreateFlags,lVar25,uVar19,1,1);
            lVar25 = *(longlong *)(param_2[1].ChainId.Data4 + 4);
          }
          memcpy((void *)(*(longlong *)&param_2[1].ChainId.Data2 + lVar25),pCVar16,uVar19);
          *(ulonglong *)(param_2[1].ChainId.Data4 + 4) = lVar25 + uVar19;
          local_62 = 0;
          FUN_180101c00(&local_168);
        }
        if ((char)param_2[2].ChainId.Data2 == '\0') {
          *(undefined1 *)&param_2[2].ChainId.Data3 = 0;
        }
        goto joined_r0x0001800bebac;
      }
      if (uVar9 == 0x90312) {
        param_2[3].ChainId.Data4[7] = '\0';
        if ((ulonglong)local_a8._16_8_ < (PCCERT_CHAIN_CONTEXT)0x2) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(1,local_a8._16_8_,&PTR_s_C__Users_burne__cargo_registry_s_1802129a0);
        }
        if (*(int *)(local_a8._8_8_ + 0x14) == 5) {
          ppCVar22 = *(PCCERT_CHAIN_CONTEXT **)&param_2[1].fHasRevocationFreshnessTime;
          uVar9 = *(uint *)(local_a8._8_8_ + 0x10);
          unique0x10000e42 = (char *)local_158._0_8_;
          pCStack_80 = (PCCERT_CHAIN_CONTEXT)
                       CONCAT44(local_158.RequestedUsage._4_4_,local_158.RequestedUsage.dwType);
          ppCVar18 = (PCCERT_CHAIN_CONTEXT *)((longlong)ppCVar22 - (longlong)(ulonglong)uVar9);
          if (ppCVar22 < (PCCERT_CHAIN_CONTEXT *)(ulonglong)uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_180201ec0("assertion failed: size >= nread",0x1f,
                          &PTR_s_C__Users_burne__cargo_registry_s_180212970);
          }
          if (uVar9 == 0) {
            uVar15 = 1;
          }
          else {
            ppCVar24 = param_2[1].rgpLowerQualityChainContext;
            _Size = (PCCERT_CHAIN_CONTEXT *)((longlong)ppCVar24 - (longlong)ppCVar18);
            if (ppCVar24 < ppCVar18) {
                    /* WARNING: Subroutine does not return */
              FUN_180201a30(0,ppCVar18,ppCVar24,&PTR_s_C__Users_burne__rustup_toolchain_18020f518);
            }
            param_2[1].rgpLowerQualityChainContext = (PCCERT_CHAIN_CONTEXT *)0x0;
            if (ppCVar18 == (PCCERT_CHAIN_CONTEXT *)0x0) {
              if (ppCVar24 != (PCCERT_CHAIN_CONTEXT *)0x0) {
                param_2[1].rgpLowerQualityChainContext = _Size;
              }
              uVar15 = 0;
              ppCVar18 = (PCCERT_CHAIN_CONTEXT *)0x0;
            }
            else {
              if (ppCVar24 != ppCVar18) {
                memmove(*(void **)&param_2[1].cLowerQualityChainContext,
                        (void *)((longlong)*(void **)&param_2[1].cLowerQualityChainContext +
                                (longlong)ppCVar18),(size_t)_Size);
                param_2[1].rgpLowerQualityChainContext = _Size;
              }
              uVar15 = 0;
            }
          }
        }
        else {
          ppCVar18 = *(PCCERT_CHAIN_CONTEXT **)&param_2[1].fHasRevocationFreshnessTime;
          pCStack_80 = (PCCERT_CHAIN_CONTEXT)
                       CONCAT44(local_158.RequestedUsage._4_4_,local_158.RequestedUsage.dwType);
          stack0xffffffffffffff78 = (char *)local_158._0_8_;
          uVar15 = 1;
          ppCVar22 = ppCVar18;
        }
        *(longlong *)&param_2[1].fHasRevocationFreshnessTime =
             (longlong)ppCVar22 - (longlong)ppCVar18;
        param_2[3].dwCreateFlags = (int)uVar15;
        param_2[3].ChainId.Data1 = (int)((ulonglong)uVar15 >> 0x20);
        uVar19 = (ulonglong)stack0xffffffffffffff78 & 0xffffffff;
        pCVar16 = (PCCERT_CHAIN_CONTEXT)0x1;
        if (uVar19 != 0) {
          pCVar16 = pCStack_80;
        }
        lVar25 = *(longlong *)(param_2[1].ChainId.Data4 + 4);
        if ((ulonglong)(*(longlong *)&param_2[1].dwCreateFlags - lVar25) < uVar19) {
          in_stack_fffffffffffffe08 = (PCERT_CHAIN_PARA)0x0;
          FUN_1801f6a80(&param_2[1].dwCreateFlags,lVar25,uVar19,1,1);
          lVar25 = *(longlong *)(param_2[1].ChainId.Data4 + 4);
        }
        memcpy((void *)(*(longlong *)&param_2[1].ChainId.Data2 + lVar25),pCVar16,uVar19);
        *(ulonglong *)(param_2[1].ChainId.Data4 + 4) = lVar25 + uVar19;
        FUN_180101c00(local_a8 + 0x20);
        puVar26 = local_b0;
        goto joined_r0x0001800bebac;
      }
      if (local_d8 != (PCCERT_CHAIN_CONTEXT)0x0) {
        FUN_180101bd0(&local_d8);
      }
      uVar19 = (ulonglong)uVar9 << 0x20 | 2;
      uVar14 = uVar19;
      if ((PCCERT_CHAIN_CONTEXT)local_a8._0_8_ == (PCCERT_CHAIN_CONTEXT)0x0) break;
LAB_1800bef30:
      uVar19 = uVar14;
      pCVar16 = (PCCERT_CHAIN_CONTEXT)(local_a8._0_8_ << 4);
      thunk_FUN_1801d3330(local_a8._8_8_,pCVar16,8);
    }
  } while (uVar19 == 0);
  *(ulonglong *)(puVar26 + 2) = uVar19;
  goto LAB_1800bf3ab;
LAB_1800bf333:
  uVar8 = 2;
LAB_1800bf363:
  *(undefined1 *)&param_2[2].ChainId.Data2 = uVar8;
  param_2[2].ChainId.Data4[0] = (char)unaff_R12D;
  param_2[2].ChainId.Data4[1] = SUB41(unaff_R12D,1);
  param_2[2].ChainId.Data4[2] = SUB41(unaff_R12D,2);
  param_2[2].ChainId.Data4[3] = SUB41(unaff_R12D,3);
  *(ulonglong *)(param_2[2].ChainId.Data4 + 4) = local_1b0;
  *(undefined4 **)(param_2 + 3) = param_1;
  param_2[3].field_0x44 = 0;
  goto LAB_1800be4da;
LAB_1800bf3a0:
  *(ulonglong *)(local_b0 + 2) = uVar19;
  puVar26 = local_b0;
LAB_1800bf3ab:
  uVar12 = 2;
LAB_1800bf3b0:
  *puVar26 = uVar12;
  return;
}


