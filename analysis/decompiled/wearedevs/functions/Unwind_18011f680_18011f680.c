/* Unwind@18011f680 @ 18011f680 */

void Unwind_18011f680(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(longlong *)(param_2 + 0x1d10) + 0x20);
  *(undefined1 *)(param_2 + 0x1d37) = 0;
  (*pcVar1)(*(undefined8 *)(param_2 + 0x1d18),*(undefined8 *)(param_2 + 0x1cf0),
            *(undefined8 *)(param_2 + 0x1cf8));
  *(undefined1 *)(param_2 + 0x1d37) = 0;
  return;
}


