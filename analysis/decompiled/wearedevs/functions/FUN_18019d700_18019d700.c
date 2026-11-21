/* FUN_18019d700 @ 18019d700 */

void FUN_18019d700(longlong *param_1,void *param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong _Size;
  
  _Size = param_3 - (longlong)param_2;
  lVar1 = param_1[2];
  if ((ulonglong)(*param_1 - lVar1) < _Size) {
    FUN_1801f6a80(param_1,lVar1,_Size,1,1);
    lVar1 = param_1[2];
  }
  memcpy((void *)(param_1[1] + lVar1),param_2,_Size);
  param_1[2] = lVar1 + _Size;
  return;
}


