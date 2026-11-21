/* FUN_180165630 @ 180165630 */

void FUN_180165630(undefined8 *param_1,longlong param_2)

{
  undefined8 local_8;
  
  local_8 = *(undefined8 *)*param_1;
  if ((*(uint *)(param_2 + 0x10) & 0x2000000) != 0) {
    FUN_1801eeb60(&local_8);
    return;
  }
  if ((*(uint *)(param_2 + 0x10) & 0x4000000) == 0) {
    FUN_1801ee720();
    return;
  }
  FUN_1801eecc0();
  return;
}


