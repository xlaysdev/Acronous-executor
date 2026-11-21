/* Unwind@1800e4310 @ 1800e4310 */

void Unwind_1800e4310(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x66d);
  if (*(char *)(param_2 + 0x66e) == '\0') {
    *(undefined1 *)(param_2 + 0x66c) = 0;
    *(byte *)(param_2 + 0x66b) = bVar1 & 1;
    return;
  }
  FUN_18000aa80(*(undefined8 *)(param_2 + 0x650),*(undefined8 *)(param_2 + 0x658));
  *(undefined1 *)(param_2 + 0x66c) = 1;
  *(byte *)(param_2 + 0x66b) = bVar1 & 1;
  return;
}


