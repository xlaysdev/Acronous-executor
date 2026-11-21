/* Unwind@1800509e0 @ 1800509e0 */

void Unwind_1800509e0(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x108) = *(undefined8 *)(param_2 + 400);
  *(undefined8 *)(param_2 + 0x110) = *(undefined8 *)(param_2 + 0x150);
  (**(code **)(*(longlong *)(param_2 + 0x188) + 0x20))
            (*(undefined8 *)(param_2 + 0x198),*(undefined8 *)(param_2 + 0x1b0),
             *(undefined8 *)(param_2 + 0x1a8));
  return;
}


