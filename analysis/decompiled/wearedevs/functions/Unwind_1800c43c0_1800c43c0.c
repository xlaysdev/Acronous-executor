/* Unwind@1800c43c0 @ 1800c43c0 */

void Unwind_1800c43c0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xff) == '\0') {
    return;
  }
  (**(code **)(*(longlong *)(param_2 + 0xf0) + 0x20))
            (*(undefined8 *)(param_2 + 0xe0),*(undefined8 *)(param_2 + 0xd8),
             *(undefined8 *)(param_2 + 0xd0));
  return;
}


