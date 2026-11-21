/* Unwind@180166d80 @ 180166d80 */

void Unwind_180166d80(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0xa4);
  if (*(char *)(param_2 + 0xa3) == '\0') {
    *(undefined1 *)(param_2 + 0xa5) = uVar1;
    return;
  }
  FUN_180075a40(*(undefined8 *)(param_2 + 0x90),*(undefined4 *)(param_2 + 0x7c));
  *(undefined1 *)(param_2 + 0xa5) = uVar1;
  return;
}


