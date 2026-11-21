/* FUN_180101170 @ 180101170 */

ulonglong FUN_180101170(ulonglong *param_1)

{
  PCCERT_CONTEXT pCVar1;
  PCCERT_CONTEXT pCVar2;
  ulonglong uVar3;
  
  pCVar2 = (PCCERT_CONTEXT)0x0;
  if ((char)*param_1 != '\0') {
    pCVar2 = (PCCERT_CONTEXT)param_1[1];
  }
  pCVar2 = CertEnumCertificatesInStore(*(HCERTSTORE *)param_1[2],pCVar2);
  if (pCVar2 != (PCCERT_CONTEXT)0x0) {
    pCVar1 = CertDuplicateCertificateContext(pCVar2);
    param_1[1] = (ulonglong)pCVar1;
  }
  uVar3 = (ulonglong)(pCVar2 != (PCCERT_CONTEXT)0x0);
  *param_1 = uVar3;
  return uVar3;
}


