/* Unwind@1801189a0 @ 1801189a0 */

void Unwind_1801189a0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x215) == '\0') {
    return;
  }
  if (*(longlong *)(param_2 + 0x1b8) != 0) {
    (**(code **)(*(longlong *)(param_2 + 0x1b8) + 0x20))
              (*(undefined8 *)(param_2 + 0x1e8),*(undefined8 *)(param_2 + 0x208),
               *(undefined8 *)(param_2 + 0x1f8));
  }
  return;
}


