/* Unwind@180118870 @ 180118870 */

void Unwind_180118870(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  if ((*(byte *)(param_2 + 0x214) & *(longlong *)(param_2 + 0x1f0) != 0) != 0) {
    pcVar1 = *(code **)(*(longlong *)(param_2 + 0x1f0) + 0x20);
    *(longlong *)(param_2 + 0x1b8) = *(longlong *)(param_2 + 0x1f0);
    *(undefined1 *)(param_2 + 0x215) = 0;
    (*pcVar1)(*(undefined8 *)(param_2 + 0x1e8),*(undefined8 *)(param_2 + 0x208),
              *(undefined8 *)(param_2 + 0x1f8));
  }
  *(undefined8 *)(param_2 + 0x1b8) = *(undefined8 *)(param_2 + 0x1f0);
  *(undefined1 *)(param_2 + 0x215) = 0;
  return;
}


