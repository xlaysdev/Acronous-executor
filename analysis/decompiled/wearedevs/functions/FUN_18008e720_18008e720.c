/* FUN_18008e720 @ 18008e720 */

ulonglong FUN_18008e720(byte *param_1)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ulonglong)bVar1;
  if ((bVar1 != 3) && (bVar1 != 0)) {
    if (bVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00018008e748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*(longlong *)(param_1 + 8) + 0x20))
                        (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x10),
                         *(undefined8 *)(param_1 + 0x18),
                         *(code **)(*(longlong *)(param_1 + 8) + 0x20));
      return uVar3;
    }
    lVar2 = *(longlong *)(param_1 + 8);
    uVar3 = -lVar2;
    if ((!SBORROW8(0,lVar2)) && (lVar2 != 0)) {
      uVar3 = thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x10),lVar2,1);
      return uVar3;
    }
  }
  return uVar3;
}


