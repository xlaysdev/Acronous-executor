/* Unwind@180143410 @ 180143410 */

void Unwind_180143410(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd5) == '\0') {
    *(undefined1 *)(param_2 + 0xe6) = 0;
    return;
  }
  (**(code **)(*(longlong *)(param_2 + 0xf8) + 0x20))
            (*(undefined8 *)(param_2 + 0xd8),*(undefined8 *)(param_2 + 0xf0),
             *(undefined8 *)(param_2 + 0xe8));
  *(undefined1 *)(param_2 + 0xe6) = 0;
  return;
}


