/* Unwind@1800aaf30 @ 1800aaf30 */

void Unwind_1800aaf30(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  if (*(longlong *)(param_2 + 0x80) != *(longlong *)(param_2 + 0x78)) {
    *(undefined1 *)(param_2 + 0xa7) = 0;
    cVar1 = FUN_180177f20(*(undefined8 *)(param_2 + 0x98));
    if (cVar1 != '\0') {
      *(undefined1 *)(param_2 + 0xa7) = 0;
      FUN_1801776b0(*(undefined8 *)(param_2 + 0x98));
    }
  }
  *(undefined1 *)(param_2 + 0xa7) = 0;
  FUN_180075a40(*(undefined8 *)(param_2 + 0x70),*(undefined4 *)(param_2 + 0x94));
  *(undefined1 *)(param_2 + 0xa7) = 0;
  return;
}


