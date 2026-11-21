/* Unwind@180146d60 @ 180146d60 */

void Unwind_180146d60(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(longlong *)(param_2 + 0xc0) + 0x20);
  *(undefined1 *)(param_2 + 0xff) = 1;
  *(undefined1 *)(param_2 + 0xfe) = 0;
  (*pcVar1)(*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(param_2 + 0xf0),
            *(undefined8 *)(param_2 + 0xe0));
  *(undefined1 *)(param_2 + 0xff) = 1;
  *(undefined1 *)(param_2 + 0xfe) = 0;
  return;
}


