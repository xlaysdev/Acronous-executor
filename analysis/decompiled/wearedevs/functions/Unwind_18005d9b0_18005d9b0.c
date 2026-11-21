/* Unwind@18005d9b0 @ 18005d9b0 */

void Unwind_18005d9b0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  if (*(char *)(param_2 + 0xdc) != '\0') {
    pcVar1 = *(code **)(*(longlong *)(param_2 + 0x60) + 0x20);
    *(undefined1 *)(param_2 + 0xdf) = 0;
    *(undefined1 *)(param_2 + 0xde) = 0;
    (*pcVar1)(*(undefined8 *)(param_2 + 0x78),*(undefined8 *)(param_2 + 0x68),
              *(undefined8 *)(param_2 + 0x70));
  }
  *(undefined1 *)(param_2 + 0xdf) = 0;
  *(undefined1 *)(param_2 + 0xde) = 0;
  return;
}


