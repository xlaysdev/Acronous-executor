/* Unwind@180135450 @ 180135450 */

void Unwind_180135450(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(longlong *)(param_2 + 0x178) + 0x20);
  *(undefined1 *)(param_2 + 0x196) = 1;
  *(undefined1 *)(param_2 + 0x195) = 1;
  *(undefined1 *)(param_2 + 0x194) = 0;
  *(undefined1 *)(param_2 + 0x193) = 1;
  (*pcVar1)(*(undefined8 *)(param_2 + 0x170),*(undefined8 *)(param_2 + 0x168),
            *(undefined8 *)(param_2 + 0x188));
  *(undefined1 *)(param_2 + 0x196) = 1;
  *(undefined1 *)(param_2 + 0x195) = 1;
  *(undefined1 *)(param_2 + 0x194) = 0;
  *(undefined1 *)(param_2 + 0x193) = 1;
  return;
}


