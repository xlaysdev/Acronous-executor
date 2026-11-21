/* FUN_1801011d0 @ 1801011d0 */

undefined8 FUN_1801011d0(void)

{
  HCERTSTORE pvVar1;
  
  pvVar1 = CertOpenStore((LPCSTR)0x2,0,0,0,(void *)0x0);
  if (pvVar1 == (HCERTSTORE)0x0) {
    GetLastError();
    return 1;
  }
  return 0;
}


