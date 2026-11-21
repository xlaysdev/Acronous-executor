/* FUN_180101c10 @ 180101c10 */

undefined8 * FUN_180101c10(undefined8 *param_1,undefined8 *param_2)

{
  PCCERT_CHAIN_CONTEXT pChainContext;
  PCCERT_CHAIN_CONTEXT pCVar1;
  ulonglong uVar2;
  PCCERT_CHAIN_CONTEXT pChainContext_00;
  PCERT_SIMPLE_CHAIN p_Var3;
  
  *param_1 = 0;
  pCVar1 = (PCCERT_CHAIN_CONTEXT)*param_2;
  if (pCVar1->cChain != 0) {
    p_Var3 = *pCVar1->rgpChain;
    pChainContext = CertDuplicateCertificateChain(pCVar1);
    if (1 < pCVar1->cChain) {
      uVar2 = 1;
      pChainContext_00 = pChainContext;
      do {
        p_Var3 = pCVar1->rgpChain[uVar2];
        pChainContext = CertDuplicateCertificateChain(pCVar1);
        CertFreeCertificateChain(pChainContext_00);
        uVar2 = uVar2 + 1;
        pChainContext_00 = pChainContext;
      } while (uVar2 < pCVar1->cChain);
    }
    pCVar1 = CertDuplicateCertificateChain(pCVar1);
    param_1[1] = p_Var3;
    param_1[2] = pCVar1;
    *param_1 = 1;
    CertFreeCertificateChain(pChainContext);
  }
  return param_1;
}


