/* FUN_1801f8d70 @ 1801f8d70 */

ulonglong FUN_1801f8d70(ulonglong *param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_28 [2];
  ulonglong local_20;
  
  uVar2 = *param_1 * 2;
  uVar1 = param_2 + 1U;
  if (param_2 + 1U <= uVar2) {
    uVar1 = uVar2;
  }
  uVar2 = 4;
  if (4 < uVar1) {
    uVar2 = uVar1;
  }
  FUN_1801f8cd0(local_28,*param_1,param_1[1],uVar2);
  if (local_28[0] == 1) {
    return local_20;
  }
  param_1[1] = local_20;
  *param_1 = uVar2;
  return 0x8000000000000001;
}


