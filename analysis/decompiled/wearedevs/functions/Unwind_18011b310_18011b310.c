/* Unwind@18011b310 @ 18011b310 */

void Unwind_18011b310(undefined8 param_1,longlong param_2)

{
  if ((*(char *)(param_2 + 0x9f) != '\0') && (*(longlong *)(param_2 + 0x68) != 0)) {
    (**(code **)(*(longlong *)(param_2 + 0x68) + 0x20))
              (*(undefined8 *)(param_2 + 0x80),*(undefined8 *)(param_2 + 0x70),
               *(undefined8 *)(param_2 + 0x78));
  }
  return;
}


