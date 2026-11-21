/* Unwind@1800262c0 @ 1800262c0 */

void Unwind_1800262c0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(longlong *)(param_2 + 0x130) + 0x20);
  *(undefined1 *)(param_2 + 0x1a7) = 0;
  (*pcVar1)(*(undefined8 *)(param_2 + 0x148),*(undefined8 *)(param_2 + 0x138),
            *(undefined8 *)(param_2 + 0x140));
  *(undefined1 *)(param_2 + 0x1a7) = 0;
  return;
}


