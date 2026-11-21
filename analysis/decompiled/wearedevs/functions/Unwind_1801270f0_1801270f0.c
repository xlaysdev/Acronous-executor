/* Unwind@1801270f0 @ 1801270f0 */

void Unwind_1801270f0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xa8) != 0) {
    (**(code **)(*(longlong *)(param_2 + 0xa8) + 0x20))
              (*(undefined8 *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x90),
               *(undefined8 *)(param_2 + 0x98));
  }
  return;
}


