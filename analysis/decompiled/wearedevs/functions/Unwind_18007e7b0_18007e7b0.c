/* Unwind@18007e7b0 @ 18007e7b0 */

void Unwind_18007e7b0(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = **(ulonglong **)(param_2 + 0x490);
  if ((*(byte *)(param_2 + 0x4e5) & (uVar1 & 0x7fffffffffffffff) != 0) != 0) {
    thunk_FUN_1801d3330((*(ulonglong **)(param_2 + 0x490))[1],uVar1,1);
  }
  lVar2 = **(longlong **)(param_2 + 0x498);
  if (lVar2 != 0) {
    thunk_FUN_1801d3330((*(longlong **)(param_2 + 0x498))[1],lVar2,1);
  }
  return;
}


