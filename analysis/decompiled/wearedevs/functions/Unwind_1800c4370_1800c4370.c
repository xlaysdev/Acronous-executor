/* Unwind@1800c4370 @ 1800c4370 */

void Unwind_1800c4370(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(longlong *)(param_2 + 0xf0) + 0x20);
  *(undefined1 *)(param_2 + 0xff) = 0;
  (*pcVar1)(*(undefined8 *)(param_2 + 0xe0),*(undefined8 *)(param_2 + 0xd8),
            *(undefined8 *)(param_2 + 0xd0));
  *(undefined1 *)(param_2 + 0xff) = 0;
  return;
}


