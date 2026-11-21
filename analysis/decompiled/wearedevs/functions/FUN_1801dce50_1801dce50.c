/* FUN_1801dce50 @ 1801dce50 */

bool FUN_1801dce50(SIZE_T param_1,LPVOID param_2)

{
  HANDLE pvVar1;
  
  pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,param_1,FUN_1801dcac0,param_2,0x10000,
                        (LPDWORD)0x0);
  if (pvVar1 == (HANDLE)0x0) {
    FUN_1801e2ac0(param_2,0);
    GetLastError();
  }
  return pvVar1 == (HANDLE)0x0;
}


