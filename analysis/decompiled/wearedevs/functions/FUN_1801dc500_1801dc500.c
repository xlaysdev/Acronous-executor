/* FUN_1801dc500 @ 1801dc500 */

LPVOID FUN_1801dc500(undefined8 param_1,DWORD param_2,SIZE_T param_3)

{
  HANDLE hHeap;
  LPVOID pvVar1;
  
  hHeap = GetProcessHeap();
  if (hHeap == (HANDLE)0x0) {
    return (LPVOID)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001801dc52b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = HeapAlloc(hHeap,param_2,param_3);
  return pvVar1;
}


