/* Unwind@180143b00 @ 180143b00 */

void Unwind_180143b00(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(longlong *)(param_2 + 0x98) + 0x20);
  *(undefined1 *)(param_2 + 0xbf) = 0;
  (*pcVar1)(*(undefined8 *)(param_2 + 0xb0),*(undefined8 *)(param_2 + 0xa0),
            *(undefined8 *)(param_2 + 0x70));
  *(undefined1 *)(param_2 + 0xbf) = 0;
  return;
}


