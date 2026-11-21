/* Unwind@1801436e0 @ 1801436e0 */

void Unwind_1801436e0(undefined8 param_1,longlong param_2)

{
  if ((*(char *)(param_2 + 0xd2) != '\0') && (*(longlong *)(param_2 + 0x60) != 0)) {
    (**(code **)(*(longlong *)(param_2 + 0x60) + 0x20))
              (*(undefined8 *)(param_2 + 0x78),*(undefined8 *)(param_2 + 0x68),
               *(undefined8 *)(param_2 + 0x70));
  }
  return;
}


