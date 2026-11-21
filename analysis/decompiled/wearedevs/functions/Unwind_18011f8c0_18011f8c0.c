/* Unwind@18011f8c0 @ 18011f8c0 */

void Unwind_18011f8c0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(longlong *)(param_2 + 0x1cd0) + 0x20);
  *(undefined1 *)(param_2 + 0x1d35) = 1;
  *(undefined1 *)(param_2 + 0x1d34) = 0;
  (*pcVar1)(*(undefined8 *)(param_2 + 0x1cc8),*(undefined8 *)(param_2 + 0x1cc0),
            *(undefined8 *)(param_2 + 0x1cf8));
  *(undefined1 *)(param_2 + 0x1d35) = 1;
  *(undefined1 *)(param_2 + 0x1d34) = 0;
  return;
}


