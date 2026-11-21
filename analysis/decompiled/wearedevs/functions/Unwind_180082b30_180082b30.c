/* Unwind@180082b30 @ 180082b30 */

void Unwind_180082b30(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(longlong *)(param_2 + 0x730) + 0x20);
  *(undefined1 *)(param_2 + 0x7ce) = 1;
  *(undefined1 *)(param_2 + 0x7cd) = 1;
  (*pcVar1)(*(undefined8 *)(param_2 + 0x748),*(undefined8 *)(param_2 + 0x738),
            *(undefined8 *)(param_2 + 0x740));
  *(undefined1 *)(param_2 + 0x7ce) = 1;
  *(undefined1 *)(param_2 + 0x7cd) = 1;
  return;
}


