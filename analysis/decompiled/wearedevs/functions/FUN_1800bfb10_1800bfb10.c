/* FUN_1800bfb10 @ 1800bfb10 */

/* WARNING: Type propagation algorithm not settling */

void FUN_1800bfb10(undefined4 *param_1,PCCERT_CHAIN_CONTEXT param_2)

{
  PCERT_SIMPLE_CHAIN **ppp_Var1;
  undefined8 *puVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  BOOL BVar9;
  int iVar10;
  undefined4 uVar11;
  DWORD DVar12;
  ulonglong uVar13;
  LPSTR *ppCVar14;
  PCCERT_CHAIN_CONTEXT *ppCVar15;
  undefined8 uVar16;
  PCCERT_CHAIN_CONTEXT pCVar17;
  longlong lVar18;
  PCCERT_CHAIN_CONTEXT pCVar19;
  PCCERT_CHAIN_CONTEXT _Buf2;
  PCERT_SIMPLE_CHAIN *pp_Var20;
  LPSTR *ppCVar21;
  longlong lVar22;
  undefined4 *puVar23;
  undefined1 *_Dst;
  undefined4 unaff_R14D;
  PCERT_SIMPLE_CHAIN *pp_Var24;
  size_t _Size;
  PCERT_SIMPLE_CHAIN *pp_Var25;
  bool bVar26;
  PCERT_CHAIN_PARA in_stack_fffffffffffffdf8;
  PCCERT_CHAIN_CONTEXT in_stack_fffffffffffffe00;
  PCCERT_CHAIN_CONTEXT *in_stack_fffffffffffffe10;
  LPSTR *local_1b8;
  PCCERT_CHAIN_CONTEXT local_198;
  undefined1 *local_190;
  undefined4 local_184;
  DWORD *local_180;
  DWORD *local_178;
  PCCERT_CHAIN_CONTEXT local_170;
  PCCERT_CHAIN_CONTEXT local_168;
  DWORD DStack_160;
  ulong uStack_15c;
  PCCERT_CHAIN_CONTEXT local_150;
  undefined1 local_148 [8];
  undefined8 uStack_140;
  DWORD DStack_138;
  undefined4 uStack_134;
  LPSTR *ppCStack_130;
  undefined8 uStack_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [32];
  PCCERT_CHAIN_CONTEXT local_c8;
  LPSTR *ppCStack_c0;
  PCCERT_CHAIN_CONTEXT local_b8;
  PCCERT_CHAIN_CONTEXT local_b0;
  undefined1 local_a8 [36];
  uint uStack_84;
  PCCERT_CHAIN_CONTEXT pCStack_80;
  undefined8 local_78;
  undefined1 local_62;
  undefined1 local_61;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  puVar2 = (undefined8 *)((longlong)&param_2[6].rgpLowerQualityChainContext + 4);
  ppp_Var1 = &param_2->rgpChain;
  local_150 = (PCCERT_CHAIN_CONTEXT)(param_2[6].ChainId.Data4 + 4);
  local_178 = &(param_2->TrustStatus).dwInfoStatus;
  local_180 = &param_2->cLowerQualityChainContext;
  pCVar19 = param_2;
  puVar23 = param_1;
  local_e8._24_8_ = param_1;
  local_184 = unaff_R14D;
LAB_1800bfb94:
  do {
    if (*(char *)&param_2[6].rgpLowerQualityChainContext != '\0') {
      if (*(char *)&param_2[6].rgpLowerQualityChainContext == '\x01') {
        puVar23[5] = param_2[6].ChainId.Data1;
        uVar16 = *(undefined8 *)&param_2[6].dwRevocationFreshnessTime;
        *(undefined8 *)(puVar23 + 1) = *puVar2;
        *(undefined8 *)(puVar23 + 3) = uVar16;
        uVar11 = 1;
      }
      else {
        uVar11 = 0;
      }
      goto LAB_1800c0ada;
    }
    cVar3 = *(char *)((longlong)&param_2[6].rgpLowerQualityChainContext + 1);
    local_e8[0x10] = *(undefined1 *)((longlong)&param_2[6].rgpLowerQualityChainContext + 2);
    cVar4 = *(char *)((longlong)&param_2[6].rgpLowerQualityChainContext + 3);
    cVar5 = *(char *)((longlong)&param_2[6].rgpLowerQualityChainContext + 4);
    if ((char)param_2[7].dwRevocationFreshnessTime == '\0') {
      pCVar19 = *(PCCERT_CHAIN_CONTEXT *)&param_2[5].fHasRevocationFreshnessTime;
      pCVar17 = *(PCCERT_CHAIN_CONTEXT *)&param_2[5].dwCreateFlags;
      if (pCVar17 == pCVar19) goto LAB_1800bfbe4;
      lVar22 = 0;
      ppCVar14 = uStack_140;
      do {
        uStack_140 = (LPSTR *)((longlong)pCVar19 - (longlong)pCVar17);
        if (pCVar19 < pCVar17) {
          uStack_140 = ppCVar14;
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(pCVar17,pCVar19,pCVar19,&PTR_s_C__Users_burne__cargo_registry_s_180212ad0);
        }
        lVar18 = *(longlong *)&param_2[4].cLowerQualityChainContext;
        if (lVar18 == 0) goto LAB_1800c0b87;
        if (*(int *)ppp_Var1 != 2) {
          local_148 = (undefined1  [8])
                      ((longlong)param_2[5].rgpLowerQualityChainContext + (longlong)pCVar17);
          uVar13 = FUN_1800eb230(ppp_Var1,lVar18,local_148);
          if (uVar13 != 2) goto LAB_1800bfcbe;
LAB_1800c0ab7:
          if (uVar13 == 2) {
            lVar18 = 0xd00000003;
          }
          goto LAB_1800c0ac9;
        }
        uStack_140 = ppCVar14;
        uVar13 = thunk_FUN_18016e2f0(local_180);
        if (uVar13 == 2) goto LAB_1800c0ab7;
LAB_1800bfcbe:
        if ((uVar13 & 1) != 0) goto LAB_1800c0ab7;
        lVar22 = lVar22 + lVar18;
        pCVar17 = (PCCERT_CHAIN_CONTEXT)((pCVar17->ChainId).Data4 + lVar18 + -0x3c);
        *(PCCERT_CHAIN_CONTEXT *)&param_2[5].dwCreateFlags = pCVar17;
        pCVar19 = *(PCCERT_CHAIN_CONTEXT *)&param_2[5].fHasRevocationFreshnessTime;
        ppCVar14 = uStack_140;
      } while (pCVar17 != pCVar19);
      if (lVar22 == 0) goto LAB_1800bfbe4;
      if (*(char *)&param_2[6].rgpLowerQualityChainContext == '\0') {
        *(undefined1 *)((longlong)&param_2[6].rgpLowerQualityChainContext + 1) = 1;
      }
LAB_1800bfbf0:
      puVar23 = (undefined4 *)local_e8._24_8_;
      pCVar17 = *(PCCERT_CHAIN_CONTEXT *)&param_2[4].cLowerQualityChainContext;
      if (pCVar17 == (PCCERT_CHAIN_CONTEXT)0x0) {
LAB_1800c0b87:
        uStack_140 = ppCVar14;
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: !self.context.is_null()",0x29,
                      &PTR_s_C__Users_burne__cargo_registry_s_180216370);
      }
      pCVar19 = pCVar17;
      uStack_140 = ppCVar14;
      if (*(int *)ppp_Var1 != 2) {
        uVar13 = FUN_1800eabc0(ppp_Var1);
        pCVar19 = (PCCERT_CHAIN_CONTEXT)0xd00000003;
        if ((uVar13 & 1) == 0) {
          pCVar19 = (PCCERT_CHAIN_CONTEXT)0x0;
          if (pCVar17 == (PCCERT_CHAIN_CONTEXT)0x0) goto LAB_1800bfc1e;
          pCVar19 = pCVar17;
        }
        *(PCCERT_CHAIN_CONTEXT *)((undefined8)puVar23 + 2) = pCVar19;
        goto LAB_1800c0ad5;
      }
LAB_1800bfc1e:
      if (*(char *)&param_2[6].rgpLowerQualityChainContext == '\0') {
        *(undefined1 *)((longlong)&param_2[6].rgpLowerQualityChainContext + 1) = 0;
      }
    }
    else {
LAB_1800bfbe4:
      ppCVar14 = uStack_140;
      puVar23 = (undefined4 *)local_e8._24_8_;
      if (cVar3 != '\0') goto LAB_1800bfbf0;
    }
    if (cVar4 == '\0') {
      if ((cVar5 != '\0') ||
         (*(char *)((longlong)&param_2[7].fHasRevocationFreshnessTime + 2) != '\0')) {
LAB_1800bfd34:
        if (local_e8[0x10] != '\0') goto LAB_1800bfd41;
        pCVar19 = local_150;
        FUN_180101580(local_148);
        local_1b8 = uStack_140;
        ppCVar14 = uStack_140;
        if (local_148[0] == '\0') {
          param_1 = (undefined4 *)CONCAT44(uStack_134,DStack_138);
          uVar7 = 1;
          local_184 = local_148._4_4_;
          goto LAB_1800c0a8c;
        }
        goto LAB_1800c0ba2;
      }
      local_148 = (undefined1  [8])FUN_180101530(local_150);
      uStack_140._0_4_ = (DWORD)pCVar19;
      uStack_140._4_4_ = (undefined4)((ulonglong)pCVar19 >> 0x20);
      if ((local_e8[0x10] & SUB81(local_148,0)) == 0) {
        if (((ulonglong)local_148 & 1) == 0) {
          local_b0 = pCVar19;
          register0x00000000 = (char *)FUN_180101110(&local_b0);
          uVar11 = (undefined4)((ulonglong)in_stack_fffffffffffffe00 >> 0x20);
          cVar3 = (char)param_2->cbSize;
          if (((ulonglong)register0x00000000 & 1) == 0) {
            if (cVar3 == '\0') {
              pCVar19 = (PCCERT_CHAIN_CONTEXT)0x0;
            }
            else {
              pCVar19 = *(PCCERT_CHAIN_CONTEXT *)local_178;
            }
          }
          else {
            local_170 = (PCCERT_CHAIN_CONTEXT)CONCAT71(local_170._1_7_,cVar3);
            pCStack_80 = pCVar19;
            local_78 = param_2;
            if (cVar3 == '\0') {
              local_148 = (undefined1  [8])pCVar19;
              FUN_180101150(local_148);
            }
            else {
              local_148 = (undefined1  [8])0x0;
              DStack_138 = (DWORD)local_178;
              uStack_134 = (undefined4)((ulonglong)local_178 >> 0x20);
              pCVar17 = pCVar19;
              while( true ) {
                uVar13 = FUN_180101170(local_148);
                uVar11 = (undefined4)((ulonglong)in_stack_fffffffffffffe00 >> 0x20);
                if ((uVar13 & 1) == 0) break;
                pCVar19 = (PCCERT_CHAIN_CONTEXT)local_a8;
                local_a8._0_8_ = pCVar17;
                uVar13 = FUN_180101230(&pCStack_80);
                if ((uVar13 & 1) != 0) {
                  FUN_180101100(local_a8);
                  if (local_148 != (undefined1  [8])0x0) {
                    FUN_180101100(&uStack_140);
                  }
                  if ((PCCERT_CHAIN_CONTEXT)stack0xffffffffffffff78 != (PCCERT_CHAIN_CONTEXT)0x0) {
                    FUN_180101150(&pCStack_80);
                  }
                  goto LAB_1800c0c0b;
                }
                local_c8 = pCVar19;
                FUN_180101100(&local_c8);
                FUN_180101100(local_a8);
                pCVar17 = pCVar19;
              }
              if (local_148 != (undefined1  [8])0x0) {
                FUN_180101100(&uStack_140);
              }
              pCVar19 = pCStack_80;
              if (local_a8[0x20] != '\0') {
                FUN_180101150(&pCStack_80);
              }
            }
          }
          uStack_140._4_4_ = 0;
          local_f8 = 0;
          uStack_f0 = 0;
          local_108 = 0;
          uStack_100 = 0;
          local_118 = 0;
          uStack_110 = 0;
          uStack_128 = 0;
          local_120 = 0;
          uStack_134 = 0;
          local_148 = (undefined1  [8])&DAT_00000060;
          uStack_140._0_4_ = 1;
          stack0xffffffffffffff78 = "1.3.6.1.5.5.7.3.1";
          pCStack_80 = (PCCERT_CHAIN_CONTEXT)0x180212aa2;
          local_78 = (PCCERT_CHAIN_CONTEXT)&DAT_180212ab9;
          DStack_138 = 3;
          ppCStack_130 = (LPSTR *)(local_a8 + 0x20);
          local_c8 = (PCCERT_CHAIN_CONTEXT)0x0;
          in_stack_fffffffffffffe10 = &local_c8;
          in_stack_fffffffffffffdf8 = (PCERT_CHAIN_PARA)local_148;
          in_stack_fffffffffffffe00 = (PCCERT_CHAIN_CONTEXT)CONCAT44(uVar11,0xc0000001);
          BVar9 = CertGetCertificateChain
                            ((HCERTCHAINENGINE)0x0,(PCCERT_CONTEXT)local_b0,(LPFILETIME)0x0,pCVar19,
                             in_stack_fffffffffffffdf8,0xc0000001,(LPVOID)0x0,
                             in_stack_fffffffffffffe10);
          if (BVar9 == 0) {
            DVar12 = GetLastError();
            pCVar19 = (PCCERT_CHAIN_CONTEXT)((ulonglong)DVar12 << 0x20 | 2);
          }
          else {
            local_e8._0_8_ = local_c8;
            uVar8 = 0xf00;
            if ((char)param_2->cbSize != '\0') {
              local_61 = 1;
              pCVar19 = (PCCERT_CHAIN_CONTEXT)local_e8;
              FUN_180101c10(local_a8 + 0x20);
              uVar8 = 0xf00;
              if (local_a8._32_4_ == 1) {
                local_a8._0_8_ = pCStack_80;
                local_a8._8_8_ = local_78;
                local_c8 = (PCCERT_CHAIN_CONTEXT)local_a8;
                ppCStack_c0 = (LPSTR *)0x0;
                do {
                  uVar8 = FUN_180102050(&local_c8);
                  if ((uVar8 & 1) == 0) break;
                  DStack_138 = (DWORD)local_178;
                  uStack_134 = (undefined4)((ulonglong)local_178 >> 0x20);
                  local_148 = (undefined1  [8])0x0;
                  pCVar17 = pCVar19;
                  local_198 = pCVar19;
                  do {
                    while( true ) {
                      uVar13 = FUN_180101170(local_148);
                      if ((uVar13 & 1) == 0) goto LAB_1800c087a;
                      local_168 = pCVar17;
                      if (*(uint *)&pCVar17->rgpChain == *(uint *)&pCVar19->rgpChain) break;
                      FUN_180101100(&local_168);
                    }
                    _Buf2 = *(PCCERT_CHAIN_CONTEXT *)&(pCVar19->TrustStatus).dwInfoStatus;
                    iVar10 = memcmp(*(void **)&(pCVar17->TrustStatus).dwInfoStatus,_Buf2,
                                    (ulonglong)*(uint *)&pCVar17->rgpChain);
                    FUN_180101100(&local_168);
                    pCVar17 = _Buf2;
                  } while (iVar10 != 0);
LAB_1800c087a:
                  pCVar19 = pCVar17;
                  if (local_148 != (undefined1  [8])0x0) {
                    FUN_180101100(&uStack_140);
                  }
                  FUN_180101100(&local_198);
                  puVar23 = (undefined4 *)local_e8._24_8_;
                } while ((uVar13 & 1) == 0);
                local_61 = 1;
                FUN_180101bf0(local_a8 + 8);
                uVar8 = (uVar8 & 1) << 4 | 0xf00;
              }
            }
            ppCStack_c0 = (LPSTR *)0x0;
            local_b8 = (PCCERT_CHAIN_CONTEXT)0x0;
            local_c8 = (PCCERT_CHAIN_CONTEXT)0x200000018;
            if ((!SBORROW8(0,*(longlong *)&param_2[5].ChainId.Data2)) &&
               (*(char *)((longlong)&param_2[7].fHasRevocationFreshnessTime + 1) == '\0')) {
              local_b8 = *(PCCERT_CHAIN_CONTEXT *)(param_2[5].ChainId.Data4 + 4);
            }
            local_a8._4_4_ = uVar8;
            local_a8._0_4_ = 0x10;
            local_a8._8_8_ = &local_c8;
            pCStack_80 = (PCCERT_CHAIN_CONTEXT)0x0;
            local_78 = (PCCERT_CHAIN_CONTEXT)0x0;
            stack0xffffffffffffff78 = &DAT_00000018;
            BVar9 = CertVerifyCertificateChainPolicy
                              (&DAT_00000004,(PCCERT_CHAIN_CONTEXT)local_e8._0_8_,
                               (PCERT_CHAIN_POLICY_PARA)local_a8,
                               (PCERT_CHAIN_POLICY_STATUS)(local_a8 + 0x20));
            if (BVar9 != 0) {
              pCVar19 = (PCCERT_CHAIN_CONTEXT)((ulonglong)uStack_84 << 0x20 | 2);
              lVar22 = *(longlong *)&param_2[7].TrustStatus.dwInfoStatus;
              if (lVar22 == 0) {
                if (uStack_84 != 0) goto LAB_1800c0bfa;
                FUN_180101bf0(local_e8);
              }
              else {
                local_148 = (undefined1  [8])local_e8._0_8_;
                uStack_140._0_4_ = uStack_84;
                uStack_140._4_4_ = SUB84(pCStack_80,0);
                DStack_138 = (DWORD)((ulonglong)pCStack_80 >> 0x20);
                local_170 = pCVar19;
                pCVar19 = (PCCERT_CHAIN_CONTEXT)
                          (*(code *)param_2[7].rgpChain[5])
                                    (((ulonglong)
                                      ((longlong)
                                       &param_2[7].rgpChain[2][-1].dwRevocationFreshnessTime + 3U) &
                                     0xfffffffffffffff0) + lVar22 + 0x10);
                if (pCVar19 != (PCCERT_CHAIN_CONTEXT)0x0) goto LAB_1800c0c0b;
              }
              FUN_180101100(&local_b0);
              uStack_140 = (LPSTR *)CONCAT44(uStack_140._4_4_,(DWORD)uStack_140);
              if (*(char *)&param_2[6].rgpLowerQualityChainContext == '\0') {
                *(undefined1 *)puVar2 = 1;
                uStack_140 = (LPSTR *)CONCAT44(uStack_140._4_4_,(DWORD)uStack_140);
              }
              goto LAB_1800bfd34;
            }
            local_61 = 1;
            DVar12 = GetLastError();
            pCVar19 = (PCCERT_CHAIN_CONTEXT)((ulonglong)DVar12 << 0x20 | 2);
LAB_1800c0bfa:
            FUN_180101bf0(local_e8);
          }
LAB_1800c0c0b:
          FUN_180101100(&local_b0);
        }
        *(PCCERT_CHAIN_CONTEXT *)(puVar23 + 2) = pCVar19;
        goto LAB_1800c0ad5;
      }
      FUN_1800b9a50(local_148);
      uVar8 = (uint)((ulonglong)in_stack_fffffffffffffdf8 >> 0x20);
      pp_Var20 = param_2[5].rgpChain;
      pp_Var24 = *(PCERT_SIMPLE_CHAIN **)&param_2[7].cLowerQualityChainContext;
    }
    else {
      if (local_e8[0x10] == '\0') {
        uVar7 = 2;
LAB_1800c0a8c:
        *(undefined1 *)&param_2[6].rgpLowerQualityChainContext = uVar7;
        *(undefined4 *)((longlong)&param_2[6].rgpLowerQualityChainContext + 4) = local_184;
        *(LPSTR **)&param_2[6].fHasRevocationFreshnessTime = local_1b8;
        *(undefined4 **)&param_2[6].dwCreateFlags = param_1;
        *(undefined1 *)&param_2[7].dwRevocationFreshnessTime = 0;
        goto LAB_1800bfb94;
      }
LAB_1800bfd41:
      uVar8 = (uint)((ulonglong)in_stack_fffffffffffffdf8 >> 0x20);
      pp_Var20 = param_2[5].rgpChain;
      pp_Var24 = *(PCERT_SIMPLE_CHAIN **)&param_2[7].cLowerQualityChainContext;
    }
    if (pp_Var24 != (PCERT_SIMPLE_CHAIN *)0x0) {
      lVar22 = 0;
      do {
        if (pp_Var24 < (PCERT_SIMPLE_CHAIN *)((longlong)pp_Var20 * 2)) {
          pp_Var24 = (PCERT_SIMPLE_CHAIN *)((longlong)pp_Var20 * 2);
        }
        if (pp_Var24 < (PCERT_SIMPLE_CHAIN *)0x401) {
          pp_Var24 = (PCERT_SIMPLE_CHAIN *)0x400;
        }
        pp_Var25 = *(PCERT_SIMPLE_CHAIN **)&param_2[5].TrustStatus.dwInfoStatus;
        uVar13 = (longlong)pp_Var24 - (longlong)pp_Var25;
        if (pp_Var25 <= pp_Var24 && uVar13 != 0) {
          if ((ulonglong)(*(longlong *)(param_2[4].ChainId.Data4 + 4) - (longlong)pp_Var25) < uVar13
             ) {
            in_stack_fffffffffffffdf8 = (PCERT_CHAIN_PARA)0x0;
            FUN_1801f6a80(param_2[4].ChainId.Data4 + 4,pp_Var25,uVar13,1,1);
            pp_Var25 = *(PCERT_SIMPLE_CHAIN **)&param_2[5].TrustStatus.dwInfoStatus;
            lVar18 = *(longlong *)(param_2 + 5);
            _Dst = (undefined1 *)((longlong)pp_Var25 + lVar18);
          }
          else {
            lVar18 = *(longlong *)(param_2 + 5);
            _Dst = (undefined1 *)((longlong)pp_Var25 + lVar18);
          }
          if (1 < uVar13) {
            memset(_Dst,0,uVar13 - 1);
            pp_Var25 = (PCERT_SIMPLE_CHAIN *)((longlong)pp_Var25 + (uVar13 - 1));
            _Dst = (undefined1 *)(lVar18 + (longlong)pp_Var25);
          }
          *_Dst = 0;
          pp_Var25 = (PCERT_SIMPLE_CHAIN *)((longlong)pp_Var25 + 1);
          *(PCERT_SIMPLE_CHAIN **)&param_2[5].TrustStatus.dwInfoStatus = pp_Var25;
        }
        ppCVar14 = (LPSTR *)((longlong)pp_Var25 - (longlong)pp_Var20);
        if (pp_Var25 < pp_Var20) {
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(pp_Var20,pp_Var25,pp_Var25,&PTR_s_C__Users_burne__cargo_registry_s_180212a78
                       );
        }
        local_148 = (undefined1  [8])(*(longlong *)(param_2 + 5) + (longlong)pp_Var20);
        DStack_138 = 0;
        uStack_134 = 0;
        lVar18 = *(longlong *)&param_2[4].cLowerQualityChainContext;
        ppCStack_130 = ppCVar14;
        if (lVar18 == 0) goto LAB_1800c0b87;
        uStack_140 = ppCVar14;
        uVar13 = FUN_18005afd0(ppp_Var1,lVar18,local_148);
        puVar23 = (undefined4 *)local_e8._24_8_;
        uVar8 = (uint)((ulonglong)in_stack_fffffffffffffdf8 >> 0x20);
        if ((uVar13 & 1) != 0) {
          lVar18 = 0xd00000003;
        }
        if (lVar18 != 0) goto LAB_1800c0ac9;
        ppCVar14 = (LPSTR *)CONCAT44(uStack_134,DStack_138);
        if (uStack_140 < ppCVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(0,ppCVar14,uStack_140,&PTR_s_C__Users_burne__cargo_registry_s_180216970);
        }
        pp_Var20 = (PCERT_SIMPLE_CHAIN *)((longlong)pp_Var20 + (longlong)ppCVar14);
        param_2[5].rgpChain = pp_Var20;
        ppCVar21 = *(LPSTR **)&param_2[7].cLowerQualityChainContext;
        pp_Var24 = (PCERT_SIMPLE_CHAIN *)0x0;
        if (ppCVar14 <= ppCVar21) {
          pp_Var24 = (PCERT_SIMPLE_CHAIN *)((longlong)ppCVar21 - (longlong)ppCVar14);
        }
        *(PCERT_SIMPLE_CHAIN **)&param_2[7].cLowerQualityChainContext = pp_Var24;
      } while ((ppCVar14 != (LPSTR *)0x0) &&
              (lVar22 = lVar22 + (longlong)ppCVar14, ppCVar14 < ppCVar21));
      if (lVar22 == 0) {
        ppCVar14 = (LPSTR *)FUN_1801d6710(CONCAT71((int7)((ulonglong)
                                                          ((longlong)ppCVar21 - (longlong)ppCVar14)
                                                         >> 8),0x25),
                                          "unexpected EOF during handshake",0x1f);
        goto LAB_1800c0ba2;
      }
    }
    FUN_180027490();
    ppCVar15 = (PCCERT_CHAIN_CONTEXT *)thunk_FUN_1801d32d0(0x20,8);
    if (ppCVar15 == (PCCERT_CHAIN_CONTEXT *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x20);
    }
    pp_Var24 = *(PCERT_SIMPLE_CHAIN **)&param_2[5].TrustStatus.dwInfoStatus;
    if (pp_Var24 < pp_Var20) {
      local_180 = (DWORD *)ppCVar15;
                    /* WARNING: Subroutine does not return */
      FUN_180201a30(0,pp_Var20,pp_Var24,&PTR_s_C__Users_burne__cargo_registry_s_1802129d0);
    }
    pCVar19 = *(PCCERT_CHAIN_CONTEXT *)(param_2 + 5);
    *(int *)ppCVar15 = (int)pp_Var20;
    *(undefined4 *)((longlong)ppCVar15 + 4) = 2;
    ppCVar15[1] = pCVar19;
    ppCVar15[2] = (PCCERT_CHAIN_CONTEXT)0x0;
    ppCVar15[3] = (PCCERT_CHAIN_CONTEXT)0x0;
    local_a8._0_8_ = (PCCERT_CHAIN_CONTEXT)0x2;
    local_a8._16_8_ = (PCCERT_CHAIN_CONTEXT)0x2;
    local_a8._8_8_ = ppCVar15;
    if (SBORROW8(0,*(longlong *)&param_2[6].TrustStatus.dwInfoStatus)) {
      local_c8 = (PCCERT_CHAIN_CONTEXT)0x0;
    }
    else {
      FUN_180101d80(local_148,param_2[6].rgpChain,
                    *(undefined8 *)&param_2[6].cLowerQualityChainContext);
      uVar16 = local_a8._16_8_;
      DVar12 = (DWORD)uStack_140;
      pCVar19 = (PCCERT_CHAIN_CONTEXT)CONCAT44(uStack_134,DStack_138);
      local_c8 = (PCCERT_CHAIN_CONTEXT)local_148;
      ppCStack_c0 = uStack_140;
      local_b8 = pCVar19;
      if (local_148 != (undefined1  [8])0x0) {
        if (local_a8._16_8_ == local_a8._0_8_) {
          FUN_1801f8fa0(local_a8);
        }
        *(DWORD *)(local_a8._8_8_ + uVar16 * 2 * 8) = DVar12;
        *(undefined4 *)(local_a8._8_8_ + uVar16 * 0x10 + 4) = 0x12;
        *(PCCERT_CHAIN_CONTEXT *)(local_a8._8_8_ + (uVar16 * 2 + 1) * 8) = pCVar19;
        local_a8._16_8_ = (longlong)(DWORD *)uVar16 + 1;
      }
    }
    local_e8._0_8_ = local_a8._16_8_ << 0x20;
    local_e8._8_8_ = local_a8._8_8_;
    local_148 = (undefined1  [8])0x200000000;
    uStack_140._0_4_ = 0;
    uStack_140._4_4_ = 0;
    DStack_138 = 0;
    uStack_134 = 0x11;
    ppCStack_130 = (LPSTR *)0x0;
    uStack_128 = 0;
    local_120 = 0;
    local_198 = (PCCERT_CHAIN_CONTEXT)0x300000000;
    local_190 = local_148;
    local_b0 = (PCCERT_CHAIN_CONTEXT)((ulonglong)local_b0 & 0xffffffff00000000);
    if (*(char *)((longlong)&param_2[7].fHasRevocationFreshnessTime + 2) == '\0') {
      uVar16 = 0;
      if ((param_2[7].fHasRevocationFreshnessTime & 1) != 0) {
        uVar16 = *(undefined8 *)(param_2[5].ChainId.Data4 + 4);
      }
      if (SBORROW8(0,*(longlong *)&param_2[5].ChainId.Data2)) {
        uVar16 = 0;
      }
      lVar22 = *(longlong *)&param_2[6].ChainId.Data2;
      unique0x10000ebf = *(char **)(lVar22 + 0x10);
      pCStack_80 = *(PCCERT_CHAIN_CONTEXT *)(lVar22 + 0x18);
      in_stack_fffffffffffffe10 =
           (PCCERT_CHAIN_CONTEXT *)((ulonglong)in_stack_fffffffffffffe10 & 0xffffffff00000000);
      in_stack_fffffffffffffe00 =
           (PCCERT_CHAIN_CONTEXT)((ulonglong)in_stack_fffffffffffffe00 & 0xffffffff00000000);
      in_stack_fffffffffffffdf8 = (PCERT_CHAIN_PARA)((ulonglong)uVar8 << 0x20);
      uVar8 = InitializeSecurityContextW
                        (local_a8 + 0x20,local_150,uVar16,0x9819c,in_stack_fffffffffffffdf8,
                         in_stack_fffffffffffffe00,local_e8,in_stack_fffffffffffffe10,0,&local_198,
                         &local_b0,0);
    }
    else {
      pCVar19 = local_150;
      if (*(char *)((longlong)&param_2[7].fHasRevocationFreshnessTime + 3) != '\0') {
        pCVar19 = (PCCERT_CHAIN_CONTEXT)0x0;
      }
      lVar22 = *(longlong *)&param_2[6].ChainId.Data2;
      unique0x10000eaf = *(char **)(lVar22 + 0x10);
      pCStack_80 = *(PCCERT_CHAIN_CONTEXT *)(lVar22 + 0x18);
      in_stack_fffffffffffffe10 = &local_b0;
      in_stack_fffffffffffffdf8 = (PCERT_CHAIN_PARA)((ulonglong)uVar8 << 0x20);
      in_stack_fffffffffffffe00 = local_150;
      uVar8 = AcceptSecurityContext
                        (local_a8 + 0x20,pCVar19,local_e8,0x1011c,in_stack_fffffffffffffdf8,
                         local_150,&local_198,in_stack_fffffffffffffe10,0);
    }
    if (ppCStack_130 != (LPSTR *)0x0) {
      FreeContextBuffer();
    }
    if (local_120 != 0) {
      FreeContextBuffer();
    }
    if (uVar8 == 0x80090318) {
      if ((ulonglong)local_a8._16_8_ < (PCCERT_CHAIN_CONTEXT)0x2) {
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(1,local_a8._16_8_,&PTR_s_C__Users_burne__cargo_registry_s_1802129b8);
      }
      if (*(int *)(local_a8._8_8_ + 0x14) == 4) {
        *(ulonglong *)&param_2[7].cLowerQualityChainContext =
             (ulonglong)*(uint *)(local_a8._8_8_ + 0x10);
      }
      else {
        *(undefined8 *)&param_2[7].cLowerQualityChainContext = 1;
      }
LAB_1800c0633:
      if (local_c8 != (PCCERT_CHAIN_CONTEXT)0x0) {
        FUN_180101bd0(&local_c8);
      }
      ppCVar14 = (LPSTR *)0x0;
      pCVar19 = (PCCERT_CHAIN_CONTEXT)local_a8._0_8_;
      ppCVar21 = (LPSTR *)0x0;
      if ((PCCERT_CHAIN_CONTEXT)local_a8._0_8_ != (PCCERT_CHAIN_CONTEXT)0x0) goto LAB_1800c065f;
    }
    else {
      if (uVar8 == 0) {
        if ((ulonglong)local_a8._16_8_ < (PCCERT_CHAIN_CONTEXT)0x2) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(1,local_a8._16_8_,&PTR_s_C__Users_burne__cargo_registry_s_180212988);
        }
        if (*(int *)(local_a8._8_8_ + 0x14) == 5) {
          pp_Var20 = param_2[5].rgpChain;
          pp_Var24 = (PCERT_SIMPLE_CHAIN *)
                     ((longlong)pp_Var20 - (ulonglong)*(uint *)(local_a8._8_8_ + 0x10));
          if (CONCAT44(uStack_140._4_4_,(DWORD)uStack_140) != 0) goto LAB_1800c02af;
LAB_1800c03a1:
          bVar6 = false;
          stack0xffffffffffffff78 = (char *)0x0;
          bVar26 = pp_Var20 == pp_Var24;
          if (pp_Var20 < pp_Var24) {
LAB_1800c0c67:
            local_e8._20_4_ = uStack_140._4_4_;
            local_e8._16_4_ = (DWORD)uStack_140;
            local_62 = 1;
                    /* WARNING: Subroutine does not return */
            FUN_180201ec0("assertion failed: size >= nread",0x1f,
                          &PTR_s_C__Users_burne__cargo_registry_s_180212970);
          }
        }
        else {
          pp_Var24 = param_2[5].rgpChain;
          pp_Var20 = pp_Var24;
          if (CONCAT44(uStack_140._4_4_,(DWORD)uStack_140) == 0) goto LAB_1800c03a1;
LAB_1800c02af:
          pCStack_80 = (PCCERT_CHAIN_CONTEXT)local_148;
          local_78 = (PCCERT_CHAIN_CONTEXT)CONCAT44(uStack_140._4_4_,(DWORD)uStack_140);
          bVar6 = true;
          stack0xffffffffffffff78 = (char *)0x1;
          bVar26 = pp_Var20 == pp_Var24;
          if (pp_Var20 < pp_Var24) goto LAB_1800c0c67;
        }
        local_e8._20_4_ = uStack_140._4_4_;
        local_e8._16_4_ = (DWORD)uStack_140;
        if (!bVar26) {
          pp_Var25 = *(PCERT_SIMPLE_CHAIN **)&param_2[5].TrustStatus.dwInfoStatus;
          if (pp_Var25 < pp_Var24) {
            local_62 = 1;
                    /* WARNING: Subroutine does not return */
            FUN_180201a30(0,pp_Var24,pp_Var25,&PTR_s_C__Users_burne__rustup_toolchain_18020f518);
          }
          *(undefined8 *)&param_2[5].TrustStatus.dwInfoStatus = 0;
          if (pp_Var24 == (PCERT_SIMPLE_CHAIN *)0x0) {
            if (pp_Var25 != (PCERT_SIMPLE_CHAIN *)0x0) goto LAB_1800c04ef;
          }
          else if (pp_Var25 != pp_Var24) {
            memmove(*(void **)(param_2 + 5),
                    (void *)((longlong)*(void **)(param_2 + 5) + (longlong)pp_Var24),
                    (longlong)pp_Var25 - (longlong)pp_Var24);
LAB_1800c04ef:
            *(longlong *)&param_2[5].TrustStatus.dwInfoStatus =
                 (longlong)pp_Var25 - (longlong)pp_Var24;
          }
        }
        puVar23 = (undefined4 *)local_e8._24_8_;
        param_2[5].rgpChain = (PCERT_SIMPLE_CHAIN *)((longlong)pp_Var20 - (longlong)pp_Var24);
        *(ulonglong *)&param_2[7].cLowerQualityChainContext =
             (ulonglong)
             ((PCERT_SIMPLE_CHAIN *)((longlong)pp_Var20 - (longlong)pp_Var24) ==
             (PCERT_SIMPLE_CHAIN *)0x0);
        if (bVar6) {
          local_168 = pCStack_80;
          DStack_160 = (DWORD)local_78;
          uStack_15c = local_78._4_4_;
          uVar13 = (ulonglong)pCStack_80 & 0xffffffff;
          pCVar19 = (PCCERT_CHAIN_CONTEXT)0x1;
          if ((int)pCStack_80 != 0) {
            pCVar19 = local_78;
          }
          lVar22 = *(longlong *)&param_2[5].fHasRevocationFreshnessTime;
          if ((ulonglong)(*(longlong *)&param_2[5].cLowerQualityChainContext - lVar22) < uVar13) {
            in_stack_fffffffffffffdf8 = (PCERT_CHAIN_PARA)0x0;
            FUN_1801f6a80(&param_2[5].cLowerQualityChainContext,lVar22,uVar13,1,1);
            lVar22._0_4_ = param_2[5].fHasRevocationFreshnessTime;
            lVar22._4_4_ = param_2[5].dwRevocationFreshnessTime;
          }
          memcpy((void *)((longlong)param_2[5].rgpLowerQualityChainContext + lVar22),pCVar19,uVar13)
          ;
          *(ulonglong *)&param_2[5].fHasRevocationFreshnessTime = lVar22 + uVar13;
          local_62 = 0;
          FUN_180101c00(&local_168);
        }
        if (*(char *)&param_2[6].rgpLowerQualityChainContext == '\0') {
          *(undefined1 *)((longlong)&param_2[6].rgpLowerQualityChainContext + 2) = 0;
        }
        goto LAB_1800c0633;
      }
      if (uVar8 == 0x90312) {
        *(undefined1 *)((longlong)&param_2[7].fHasRevocationFreshnessTime + 3) = 0;
        if ((ulonglong)local_a8._16_8_ < (PCCERT_CHAIN_CONTEXT)0x2) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(1,local_a8._16_8_,&PTR_s_C__Users_burne__cargo_registry_s_1802129a0);
        }
        if (*(int *)(local_a8._8_8_ + 0x14) == 5) {
          pp_Var20 = param_2[5].rgpChain;
          uVar8 = *(uint *)(local_a8._8_8_ + 0x10);
          unique0x10000ecf = (char *)local_148;
          pCStack_80 = (PCCERT_CHAIN_CONTEXT)CONCAT44(uStack_140._4_4_,(DWORD)uStack_140);
          pp_Var24 = (PCERT_SIMPLE_CHAIN *)((longlong)pp_Var20 - (longlong)(ulonglong)uVar8);
          if (pp_Var20 < (PCERT_SIMPLE_CHAIN *)(ulonglong)uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_180201ec0("assertion failed: size >= nread",0x1f,
                          &PTR_s_C__Users_burne__cargo_registry_s_180212970);
          }
          if (uVar8 == 0) {
            uVar16 = 1;
          }
          else {
            pp_Var25 = *(PCERT_SIMPLE_CHAIN **)&param_2[5].TrustStatus.dwInfoStatus;
            _Size = (longlong)pp_Var25 - (longlong)pp_Var24;
            if (pp_Var25 < pp_Var24) {
                    /* WARNING: Subroutine does not return */
              FUN_180201a30(0,pp_Var24,pp_Var25,&PTR_s_C__Users_burne__rustup_toolchain_18020f518);
            }
            *(undefined8 *)&param_2[5].TrustStatus.dwInfoStatus = 0;
            if (pp_Var24 == (PCERT_SIMPLE_CHAIN *)0x0) {
              if (pp_Var25 != (PCERT_SIMPLE_CHAIN *)0x0) {
                *(size_t *)&param_2[5].TrustStatus.dwInfoStatus = _Size;
              }
              uVar16 = 0;
              pp_Var24 = (PCERT_SIMPLE_CHAIN *)0x0;
            }
            else {
              if (pp_Var25 != pp_Var24) {
                memmove(*(void **)(param_2 + 5),
                        (void *)((longlong)*(void **)(param_2 + 5) + (longlong)pp_Var24),_Size);
                *(size_t *)&param_2[5].TrustStatus.dwInfoStatus = _Size;
              }
              uVar16 = 0;
            }
          }
        }
        else {
          pp_Var24 = param_2[5].rgpChain;
          pCStack_80 = (PCCERT_CHAIN_CONTEXT)CONCAT44(uStack_140._4_4_,(DWORD)uStack_140);
          stack0xffffffffffffff78 = (char *)local_148;
          uVar16 = 1;
          pp_Var20 = pp_Var24;
        }
        param_2[5].rgpChain = (PCERT_SIMPLE_CHAIN *)((longlong)pp_Var20 - (longlong)pp_Var24);
        *(undefined8 *)&param_2[7].cLowerQualityChainContext = uVar16;
        uVar13 = (ulonglong)stack0xffffffffffffff78 & 0xffffffff;
        pCVar19 = (PCCERT_CHAIN_CONTEXT)0x1;
        if (uVar13 != 0) {
          pCVar19 = pCStack_80;
        }
        lVar18 = *(longlong *)&param_2[5].fHasRevocationFreshnessTime;
        if ((ulonglong)(*(longlong *)&param_2[5].cLowerQualityChainContext - lVar18) < uVar13) {
          in_stack_fffffffffffffdf8 = (PCERT_CHAIN_PARA)0x0;
          FUN_1801f6a80(&param_2[5].cLowerQualityChainContext,lVar18,uVar13,1,1);
          lVar18._0_4_ = param_2[5].fHasRevocationFreshnessTime;
          lVar18._4_4_ = param_2[5].dwRevocationFreshnessTime;
        }
        memcpy((void *)((longlong)param_2[5].rgpLowerQualityChainContext + lVar18),pCVar19,uVar13);
        *(ulonglong *)&param_2[5].fHasRevocationFreshnessTime = lVar18 + uVar13;
        FUN_180101c00(local_a8 + 0x20);
        goto LAB_1800c0633;
      }
      if (local_c8 != (PCCERT_CHAIN_CONTEXT)0x0) {
        FUN_180101bd0(&local_c8);
      }
      ppCVar21 = (LPSTR *)((ulonglong)uVar8 << 0x20 | 2);
      if ((PCCERT_CHAIN_CONTEXT)local_a8._0_8_ == (PCCERT_CHAIN_CONTEXT)0x0) {
        ppCVar14 = ppCVar21;
        goto LAB_1800c0ba2;
      }
LAB_1800c065f:
      ppCVar14 = ppCVar21;
      pCVar19 = (PCCERT_CHAIN_CONTEXT)(local_a8._0_8_ << 4);
      thunk_FUN_1801d3330(local_a8._8_8_);
    }
    if (ppCVar14 != (LPSTR *)0x0) {
LAB_1800c0ba2:
      *(LPSTR **)(puVar23 + 2) = ppCVar14;
LAB_1800c0ad5:
      uVar11 = 2;
LAB_1800c0ada:
      *puVar23 = uVar11;
      return;
    }
  } while( true );
LAB_1800c0ac9:
  *(longlong *)(local_e8._24_8_ + 8) = lVar18;
  puVar23 = (undefined4 *)local_e8._24_8_;
  goto LAB_1800c0ad5;
}


