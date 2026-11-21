/* Unwind@18015b8d0 @ 18015b8d0 */

void Unwind_18015b8d0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  if (*(longlong *)(param_2 + 0x28) != 0) {
    pcVar1 = *(code **)(*(longlong *)(param_2 + 0x28) + 0x18);
    *(undefined1 *)(param_2 + 399) = 1;
    (*pcVar1)(*(undefined8 *)(param_2 + 0x30));
  }
  *(undefined1 *)(param_2 + 399) = 1;
  return;
}


