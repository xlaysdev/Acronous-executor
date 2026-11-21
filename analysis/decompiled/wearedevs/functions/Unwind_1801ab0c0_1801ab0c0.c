/* Unwind@1801ab0c0 @ 1801ab0c0 */

void Unwind_1801ab0c0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(longlong *)(param_2 + 0x58) + 0x20);
  *(undefined1 *)(param_2 + 0x6f) = 0;
  (*pcVar1)(*(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x40),
            *(undefined8 *)(param_2 + 0x48));
  *(undefined1 *)(param_2 + 0x6f) = 0;
  return;
}


