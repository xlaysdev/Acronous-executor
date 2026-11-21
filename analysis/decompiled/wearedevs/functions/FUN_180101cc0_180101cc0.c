/* FUN_180101cc0 @ 180101cc0 */

longlong * FUN_180101cc0(longlong *param_1,longlong param_2)

{
  if (*param_1 != 0) {
    CertCloseStore((HCERTSTORE)param_1[1],0);
  }
  *param_1 = 1;
  param_1[1] = param_2;
  return param_1;
}


