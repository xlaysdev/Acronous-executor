/* Unwind@1800a35e0 @ 1800a35e0 */

void Unwind_1800a35e0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x408) == 2) {
    FUN_1800a6ff0(param_2 + 0x410);
    *(undefined1 *)(param_2 + 0x45e) = 1;
    return;
  }
  *(undefined1 *)(param_2 + 0x45e) = 0;
  return;
}


