/* FUN_18015fac0 @ 18015fac0 */

void FUN_18015fac0(ulonglong *param_1,ulonglong param_2,void *param_3)

{
  ulonglong uVar1;
  void *_Dst;
  
  param_1[3] = param_1[3] + 1;
  uVar1 = param_1[2];
  if (param_2 == uVar1) {
    if (param_2 == *param_1) {
      FUN_1801fa300(param_1);
    }
    memcpy((void *)(param_2 * 0x148 + param_1[1]),param_3,0x148);
    param_1[2] = param_2 + 1;
    param_1[4] = param_2 + 1;
    return;
  }
  if (param_2 < uVar1) {
    if (*(int *)(param_1[1] + param_2 * 0x148) == 2) {
      _Dst = (void *)(param_1[1] + param_2 * 0x148);
      param_1[4] = *(ulonglong *)((longlong)_Dst + 8);
      memcpy(_Dst,param_3,0x148);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_180201ec0("internal error: entered unreachable codeC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\slab-0.4.12\\src\\lib.rs"
                ,0x28,&DAT_18025f1a8,param_3,uVar1,param_2,param_3,0xfffffffffffffffe);
}


