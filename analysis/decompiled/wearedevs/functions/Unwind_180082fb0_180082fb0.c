/* Unwind@180082fb0 @ 180082fb0 */

void Unwind_180082fb0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(longlong *)(param_2 + 0x550) + 0x20);
  *(undefined1 *)(param_2 + 0x7cc) = 1;
  (*pcVar1)(*(undefined8 *)(param_2 + 0x568),*(undefined8 *)(param_2 + 0x558),
            *(undefined8 *)(param_2 + 0x560));
  *(undefined1 *)(param_2 + 0x7cc) = 1;
  return;
}


