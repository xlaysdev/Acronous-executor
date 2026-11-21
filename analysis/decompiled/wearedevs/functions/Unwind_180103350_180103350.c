/* Unwind@180103350 @ 180103350 */

void Unwind_180103350(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1bf) == '\0') {
    *(undefined1 *)(param_2 + 0x1be) = 0;
    return;
  }
  FUN_1801051c0(*(undefined1 *)(param_2 + 0xf0),*(undefined8 *)(param_2 + 0xf8));
  if (*(longlong *)(param_2 + 0x100) != 0) {
    (**(code **)(*(longlong *)(param_2 + 0x100) + 0x20))
              (*(undefined8 *)(param_2 + 0x118),*(undefined8 *)(param_2 + 0x108),
               *(undefined8 *)(param_2 + 0x110));
  }
  if (*(longlong *)(param_2 + 0x120) != 0) {
    (**(code **)(*(longlong *)(param_2 + 0x120) + 0x20))
              (*(undefined8 *)(param_2 + 0x138),*(undefined8 *)(param_2 + 0x128),
               *(undefined8 *)(param_2 + 0x130));
  }
  *(undefined1 *)(param_2 + 0x1be) = 0;
  return;
}


