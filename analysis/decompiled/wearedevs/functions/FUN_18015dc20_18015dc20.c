/* FUN_18015dc20 @ 18015dc20 */

void FUN_18015dc20(byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (1 < (ulonglong)param_1[0x40]) {
    lVar1 = (ulonglong)param_1[0x40] - 1;
  }
  switch(lVar1) {
  case 0:
    if (*(longlong *)param_1 != 0) {
      (**(code **)(*(longlong *)param_1 + 0x20))
                (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 8),
                 *(undefined8 *)(param_1 + 0x10),param_4,param_1,0xfffffffffffffffe);
    }
                    /* WARNING: Could not recover jumptable at 0x00018015dcb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + 0x20) + 0x20))
              (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28),
               *(undefined8 *)(param_1 + 0x30));
    return;
  case 1:
  case 3:
  case 4:
  case 5:
                    /* WARNING: Could not recover jumptable at 0x00018015dc79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x20))
              (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 8),
               *(undefined8 *)(param_1 + 0x10));
    return;
  case 2:
    if ((10 < *param_1) && (*(longlong *)(param_1 + 0x10) != 0)) {
      thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 8),*(longlong *)(param_1 + 0x10),1);
      return;
    }
  }
  return;
}


