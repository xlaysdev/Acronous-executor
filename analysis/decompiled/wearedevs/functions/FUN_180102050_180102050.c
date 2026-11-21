/* FUN_180102050 @ 180102050 */

undefined8 FUN_180102050(undefined8 *param_1)

{
  ulonglong uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 + 1;
  if (uVar1 < *(uint *)(*(longlong *)*param_1 + 0xc)) {
    CertDuplicateCertificateContext
              (*(PCCERT_CONTEXT *)
                (*(longlong *)(*(longlong *)(*(longlong *)*param_1 + 0x10) + uVar1 * 8) + 8));
    return 1;
  }
  return 0;
}


