/* FUN_180155270 @ 180155270 */

void FUN_180155270(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  FUN_180138210(param_3 + 0x40);
  lVar1 = *(longlong *)(param_3 + 0x98);
  *(undefined8 *)(param_3 + 0x98) = 0;
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 8))(*(undefined8 *)(param_3 + 0xa0));
  }
  lVar1 = *(longlong *)(param_3 + 0xb0);
  *(undefined8 *)(param_3 + 0xb0) = 0;
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 8))(*(undefined8 *)(param_3 + 0xb8));
  }
  lVar1 = *(longlong *)(param_3 + 0xc0);
  *(undefined8 *)(param_3 + 0xc0) = 0;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001801552e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(*(undefined8 *)(param_3 + 200));
  return;
}


