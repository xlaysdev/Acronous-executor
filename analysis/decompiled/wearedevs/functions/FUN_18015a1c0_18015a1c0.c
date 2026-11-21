/* FUN_18015a1c0 @ 18015a1c0 */

void FUN_18015a1c0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_180138760(param_2 + 0x40);
  lVar1 = *(longlong *)(param_2 + 0x98);
  *(undefined8 *)(param_2 + 0x98) = 0;
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 8))(*(undefined8 *)(param_2 + 0xa0));
  }
  lVar1 = *(longlong *)(param_2 + 0xb0);
  *(undefined8 *)(param_2 + 0xb0) = 0;
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 8))(*(undefined8 *)(param_2 + 0xb8));
  }
  lVar1 = *(longlong *)(param_2 + 0xc0);
  *(undefined8 *)(param_2 + 0xc0) = 0;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00018015a236. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(*(undefined8 *)(param_2 + 200));
  return;
}


