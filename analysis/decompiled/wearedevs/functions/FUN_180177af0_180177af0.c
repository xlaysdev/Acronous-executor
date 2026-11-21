/* FUN_180177af0 @ 180177af0 */

void FUN_180177af0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))(*(undefined8 *)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}


