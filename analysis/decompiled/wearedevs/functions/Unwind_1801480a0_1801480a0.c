/* Unwind@1801480a0 @ 1801480a0 */

void Unwind_1801480a0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x68) != 0) {
    (**(code **)(*(longlong *)(param_2 + 0x68) + 0x20))
              (*(undefined8 *)(param_2 + 0x58),*(undefined8 *)(param_2 + 0x50),
               *(undefined8 *)(param_2 + 0x48));
  }
  *(undefined1 *)(param_2 + 0xa7) = 1;
  return;
}


