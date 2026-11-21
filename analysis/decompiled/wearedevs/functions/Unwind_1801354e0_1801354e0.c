/* Unwind@1801354e0 @ 1801354e0 */

void Unwind_1801354e0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x188),0x20,8);
  if (*(longlong *)(param_2 + 0x130) != 0) {
    (**(code **)(*(longlong *)(param_2 + 0x130) + 0x20))
              (*(undefined8 *)(param_2 + 0x148),*(undefined8 *)(param_2 + 0x138),
               *(undefined8 *)(param_2 + 0x140));
  }
  *(undefined1 *)(param_2 + 0x197) = 0;
  return;
}


