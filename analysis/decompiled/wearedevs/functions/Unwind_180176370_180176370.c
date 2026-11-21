/* Unwind@180176370 @ 180176370 */

void Unwind_180176370(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xdc) == '\0') {
    *(char *)(param_2 + 0xdf) = (char)*(undefined4 *)(param_2 + 0xd4);
    *(undefined1 *)(param_2 + 0xde) = 1;
    *(undefined1 *)(param_2 + 0xdd) = 0;
    return;
  }
  FUN_18016ea20(param_2 + 0x80);
  *(char *)(param_2 + 0xdf) = (char)*(undefined4 *)(param_2 + 0xd4);
  *(undefined1 *)(param_2 + 0xde) = 1;
  *(undefined1 *)(param_2 + 0xdd) = 0;
  return;
}


