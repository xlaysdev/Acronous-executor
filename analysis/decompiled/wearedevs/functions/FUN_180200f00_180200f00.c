/* FUN_180200f00 @ 180200f00 */

ulonglong FUN_180200f00(ulonglong *param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_30 [2];
  ulonglong local_28;
  
  uVar2 = *param_1 * 2;
  uVar1 = param_2 + 1U;
  if (param_2 + 1U <= uVar2) {
    uVar1 = uVar2;
  }
  uVar2 = 4;
  if (4 < uVar1) {
    uVar2 = uVar1;
  }
  FUN_180200e50(local_30,*param_1,param_1[1],uVar2);
  if (local_30[0] != 1) {
    param_1[1] = local_28;
    *param_1 = uVar2;
    local_28 = 0x8000000000000001;
  }
  return local_28;
}


