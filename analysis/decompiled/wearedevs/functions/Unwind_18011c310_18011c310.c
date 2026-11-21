/* Unwind@18011c310 @ 18011c310 */

void Unwind_18011c310(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(longlong *)(param_2 + 0x30) + 0x20);
  *(undefined1 *)(param_2 + 0xff) = 0;
  (*pcVar1)(*(undefined8 *)(param_2 + 0xc0),*(undefined8 *)(param_2 + 0x38),
            *(undefined8 *)(param_2 + 0xb8));
  *(undefined1 *)(param_2 + 0xff) = 0;
  return;
}


