/* Unwind@180026190 @ 180026190 */

void Unwind_180026190(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  if (*(longlong *)(param_2 + 0xf0) != 0) {
    pcVar1 = *(code **)(*(longlong *)(param_2 + 0xf0) + 0x20);
    *(undefined1 *)(param_2 + 0x1a7) = 1;
    (*pcVar1)(*(undefined8 *)(param_2 + 0x108),*(undefined8 *)(param_2 + 0xf8),
              *(undefined8 *)(param_2 + 0x100));
  }
  *(undefined1 *)(param_2 + 0x1a7) = 1;
  return;
}


