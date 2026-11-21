/* FUN_1801b3990 @ 1801b3990 */

longlong * FUN_1801b3990(longlong *param_1,ulonglong param_2,void *param_3,size_t param_4)

{
  void *_Dst;
  
  if ((param_2 & 1) == 0) {
    FUN_1801b3140(param_1);
  }
  else {
    _Dst = (void *)(param_2 & 0xfffffffffffffffe);
    memmove(_Dst,param_3,param_4);
    *param_1 = (longlong)param_3 + (param_4 - (longlong)_Dst);
    param_1[1] = (longlong)_Dst;
    param_1[2] = param_4;
  }
  return param_1;
}


