/* FUN_180111930 @ 180111930 */

void FUN_180111930(undefined8 *param_1)

{
  LPVOID lpMem;
  HANDLE hHeap;
  
  lpMem = (LPVOID)*param_1;
  if (lpMem == (LPVOID)0x0) {
    return;
  }
  hHeap = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000180111950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapFree(hHeap,0,lpMem);
  return;
}


