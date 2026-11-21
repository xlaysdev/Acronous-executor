/* FUN_18013b670 @ 18013b670 */

ulonglong FUN_18013b670(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  FUN_18013b300();
  if (*(longlong *)(param_1 + 0x140) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x140) + 0x18))(*(undefined8 *)(param_1 + 0x148));
  }
  bVar1 = *(byte *)(param_1 + 0x118);
  uVar3 = (ulonglong)bVar1;
  if ((bVar1 != 3) && (bVar1 != 0)) {
    if (bVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00018013b6e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*(longlong *)(param_1 + 0x120) + 0x20))
                        (*(undefined8 *)(param_1 + 0x138),*(undefined8 *)(param_1 + 0x128),
                         *(undefined8 *)(param_1 + 0x130));
      return uVar3;
    }
    lVar2 = *(longlong *)(param_1 + 0x120);
    uVar3 = -lVar2;
    if ((!SBORROW8(0,lVar2)) && (lVar2 != 0)) {
      uVar3 = thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x128),lVar2,1);
      return uVar3;
    }
  }
  return uVar3;
}


