/* Unwind@1801ac350 @ 1801ac350 */

void Unwind_1801ac350(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(longlong *)(param_2 + 0x50) + 0x20);
  *(undefined1 *)(param_2 + 0x105) = 0;
  (*pcVar1)(*(undefined8 *)(param_2 + 0xf8),*(undefined8 *)(param_2 + 0x58),
            *(undefined8 *)(param_2 + 0xf0));
  *(undefined1 *)(param_2 + 0x105) = 0;
  return;
}


