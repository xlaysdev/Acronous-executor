/* Unwind@180166df0 @ 180166df0 */

void Unwind_180166df0(undefined8 param_1,longlong param_2)

{
  if (((*(byte *)(param_2 + 0xa5) & 1) != 0) && (*(longlong *)(param_2 + 0x70) != 0)) {
    (**(code **)(*(longlong *)(param_2 + 0x70) + 0x18))(*(undefined8 *)(param_2 + 0x60));
  }
  return;
}


