/* Unwind@180120760 @ 180120760 */

void Unwind_180120760(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x1d30);
  if (*(char *)(param_2 + 0x1d2f) == '\0') {
    *(undefined1 *)(param_2 + 0x1d0d) = uVar1;
    return;
  }
  FUN_1801b2a70(param_2 + 0x19f8);
  *(undefined1 *)(param_2 + 0x1d0d) = uVar1;
  return;
}


