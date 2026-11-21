/* Unwind@1801b1e60 @ 1801b1e60 */

void Unwind_1801b1e60(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(longlong *)(param_2 + 0x78) + 0x20);
  *(undefined1 *)(param_2 + 199) = 0;
  (*pcVar1)(*(undefined8 *)(param_2 + 0x90),*(undefined8 *)(param_2 + 0x80),
            *(undefined8 *)(param_2 + 0x98));
  *(undefined1 *)(param_2 + 199) = 0;
  return;
}


