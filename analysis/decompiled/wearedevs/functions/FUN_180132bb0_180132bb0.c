/* FUN_180132bb0 @ 180132bb0 */

ulonglong FUN_180132bb0(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  
  uVar1 = *param_1;
  uVar4 = (ulonglong)uVar1;
  if (5 < uVar1 - 4) {
    if (uVar1 == 2) {
      bVar3 = (byte)param_1[2];
    }
    else {
      if (uVar1 != 1) {
        return uVar4;
      }
      bVar3 = (byte)param_1[2];
    }
    uVar4 = (ulonglong)bVar3;
    if (bVar3 != 0) {
      if (bVar3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000180132be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(*(longlong *)(param_1 + 4) + 0x20))
                          (*(undefined8 *)(param_1 + 10),*(undefined8 *)(param_1 + 6),
                           *(undefined8 *)(param_1 + 8),
                           *(code **)(*(longlong *)(param_1 + 4) + 0x20));
        return uVar4;
      }
      lVar2 = *(longlong *)(param_1 + 4);
      uVar4 = -lVar2;
      if ((!SBORROW8(0,lVar2)) && (lVar2 != 0)) {
        uVar4 = thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 6),lVar2,1);
        return uVar4;
      }
    }
  }
  return uVar4;
}


