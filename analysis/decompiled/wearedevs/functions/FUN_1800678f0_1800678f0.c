/* FUN_1800678f0 @ 1800678f0 */

void FUN_1800678f0(byte *param_1)

{
  byte bVar1;
  
  bVar1 = *param_1;
  if ((bVar1 - 2 < 2) || (bVar1 == 0)) {
    return;
  }
  if (bVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00018006791b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + 8) + 0x20))
              (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x10),
               *(undefined8 *)(param_1 + 0x18),*(code **)(*(longlong *)(param_1 + 8) + 0x20));
    return;
  }
  FUN_18000b160(param_1 + 8);
  return;
}


