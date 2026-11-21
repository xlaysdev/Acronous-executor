/* Unwind@1801760f0 @ 1801760f0 */

void Unwind_1801760f0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xdb) == '\0') {
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


