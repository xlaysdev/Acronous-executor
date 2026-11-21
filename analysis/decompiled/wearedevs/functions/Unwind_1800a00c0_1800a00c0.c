/* Unwind@1800a00c0 @ 1800a00c0 */

void Unwind_1800a00c0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(longlong *)(param_2 + 0x30) + 0x20);
  *(undefined1 *)(param_2 + 0x67) = 0;
  (*pcVar1)(*(undefined8 *)(param_2 + 0x58),*(undefined8 *)(param_2 + 0x38),
            *(undefined8 *)(param_2 + 0x50));
  *(undefined1 *)(param_2 + 0x67) = 0;
  return;
}


