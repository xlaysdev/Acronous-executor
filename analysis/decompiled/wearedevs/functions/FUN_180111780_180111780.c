/* FUN_180111780 @ 180111780 */

LPVOID FUN_180111780(size_t param_1)

{
  HANDLE hHeap;
  LPVOID _Dst;
  
  if (param_1 == 0) {
    _Dst = (LPVOID)0x0;
  }
  else {
    hHeap = GetProcessHeap();
    _Dst = HeapAlloc(hHeap,0,param_1);
    if (_Dst == (LPVOID)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0("allocation failedC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\windows-registry-0.6.1\\src\\data.rs"
                    ,0x23,&DAT_18023ed48);
    }
    memset(_Dst,0,param_1);
  }
  return _Dst;
}


