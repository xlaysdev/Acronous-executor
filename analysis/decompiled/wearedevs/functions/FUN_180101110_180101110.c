/* FUN_180101110 @ 180101110 */

undefined8 FUN_180101110(longlong *param_1)

{
  if (*(HCERTSTORE *)(*param_1 + 0x20) == (HCERTSTORE)0x0) {
    return 0;
  }
  CertDuplicateStore(*(HCERTSTORE *)(*param_1 + 0x20));
  return 1;
}


