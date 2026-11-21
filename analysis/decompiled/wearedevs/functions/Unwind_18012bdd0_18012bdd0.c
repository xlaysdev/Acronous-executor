/* Unwind@18012bdd0 @ 18012bdd0 */

void Unwind_18012bdd0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xb0) != 0 && 0x7fff < *(ulonglong *)(param_2 + 0x90)) {
    (**(code **)(*(longlong *)(param_2 + 0xb0) + 0x20))
              (*(undefined8 *)(param_2 + 0xa8),*(undefined8 *)(param_2 + 0xa0),
               *(undefined8 *)(param_2 + 0x98));
  }
  return;
}


