/* Unwind@1801203f0 @ 1801203f0 */

void Unwind_1801203f0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1d2a) == '\0') {
    *(undefined1 *)(param_2 + 0x1d2e) = 1;
    *(undefined1 *)(param_2 + 0x1d2d) = 1;
    *(undefined1 *)(param_2 + 0x1d2c) = 1;
    return;
  }
  if (*(longlong *)(param_2 + 0x1ba0) != 0) {
    (**(code **)(*(longlong *)(param_2 + 0x1ba0) + 0x20))
              (*(undefined8 *)(param_2 + 0x1bb8),*(undefined8 *)(param_2 + 0x1ba8),
               *(undefined8 *)(param_2 + 0x1bb0));
  }
  *(undefined1 *)(param_2 + 0x1d2e) = 1;
  *(undefined1 *)(param_2 + 0x1d2d) = 1;
  *(undefined1 *)(param_2 + 0x1d2c) = 1;
  return;
}


