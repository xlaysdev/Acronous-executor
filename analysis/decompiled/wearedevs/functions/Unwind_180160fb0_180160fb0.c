/* Unwind@180160fb0 @ 180160fb0 */

ulonglong Unwind_180160fb0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  ulonglong uVar4;
  
  piVar2 = *(int **)(param_2 + 0x38);
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  uVar3 = iVar1 - 1U & 0xbfffffff;
  if (SBORROW4(0,uVar3)) {
    uVar4 = FUN_180200760();
    return uVar4;
  }
  return (ulonglong)-uVar3;
}


