/* Unwind@180166d00 @ 180166d00 */

void Unwind_180166d00(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa2) == '\0') {
    *(char *)(param_2 + 0xa4) = (char)*(undefined4 *)(param_2 + 0x98);
    *(undefined1 *)(param_2 + 0xa3) = *(undefined1 *)(param_2 + 0xa0);
    return;
  }
  if (*(longlong *)(param_2 + 0x68) != 0) {
    (**(code **)(*(longlong *)(param_2 + 0x68) + 0x18))(*(undefined8 *)(param_2 + 0x48));
  }
  *(char *)(param_2 + 0xa4) = (char)*(undefined4 *)(param_2 + 0x98);
  *(undefined1 *)(param_2 + 0xa3) = *(undefined1 *)(param_2 + 0xa0);
  return;
}


