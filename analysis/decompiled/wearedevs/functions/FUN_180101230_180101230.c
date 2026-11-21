/* FUN_180101230 @ 180101230 */

undefined8 FUN_180101230(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  BOOL BVar1;
  PCCERT_CONTEXT local_8;
  
  local_8 = (PCCERT_CONTEXT)0x0;
  BVar1 = CertAddCertificateContextToStore
                    ((HCERTSTORE)*param_1,(PCCERT_CONTEXT)*param_2,(uint)param_3,&local_8);
  if (BVar1 == 0) {
    GetLastError();
    return 1;
  }
  return 0;
}


