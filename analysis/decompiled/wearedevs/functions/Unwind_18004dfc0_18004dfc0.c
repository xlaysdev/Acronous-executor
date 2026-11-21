/* Unwind@18004dfc0 @ 18004dfc0 */

void Unwind_18004dfc0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(longlong *)(param_2 + 0x1368) + 0x20);
  *(undefined1 *)(param_2 + 0x144f) = 1;
  *(undefined1 *)(param_2 + 0x144e) = 0;
  *(undefined1 *)(param_2 + 0x144d) = 1;
  (*pcVar1)(*(undefined8 *)(param_2 + 0x1360),*(undefined8 *)(param_2 + 0x13f8),
            *(undefined8 *)(param_2 + 0x1418));
  *(undefined1 *)(param_2 + 0x144f) = 1;
  *(undefined1 *)(param_2 + 0x144e) = 0;
  *(undefined1 *)(param_2 + 0x144d) = 1;
  return;
}


