/* Unwind@1801202c0 @ 1801202c0 */

void Unwind_1801202c0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1d36) == '\0') {
    *(undefined1 *)(param_2 + 0x1d2a) = 0;
    return;
  }
  (**(code **)(*(longlong *)(param_2 + 0x1a60) + 0x20))
            (*(undefined8 *)(param_2 + 0x1a78),*(undefined8 *)(param_2 + 0x1a68),
             *(undefined8 *)(param_2 + 0x1a70));
  *(undefined1 *)(param_2 + 0x1d2a) = 1;
  return;
}


