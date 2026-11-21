/* Unwind@180026600 @ 180026600 */

void Unwind_180026600(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0xb0) = *(undefined8 *)(param_2 + 0x150);
  *(undefined8 *)(param_2 + 0xa8) = *(undefined8 *)(param_2 + 0x170);
  (**(code **)(*(longlong *)(param_2 + 0x178) + 0x20))
            (*(undefined8 *)(param_2 + 0x180),*(undefined8 *)(param_2 + 0x168),
             *(undefined8 *)(param_2 + 0x198));
  return;
}


