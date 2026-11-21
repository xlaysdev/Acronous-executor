/* Unwind@18007de00 @ 18007de00 */

void Unwind_18007de00(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x6aa);
  uVar2 = *(undefined1 *)(param_2 + 0x6ab);
  if (*(char *)(param_2 + 0x6a9) == '\0') {
    *(undefined1 *)(param_2 + 0x6a8) = uVar2;
    *(undefined1 *)(param_2 + 0x6a7) = uVar1;
    *(undefined1 *)(param_2 + 0x6a6) = 0;
    return;
  }
  FUN_18007b530(param_2 + 0x658);
  *(undefined1 *)(param_2 + 0x6a8) = uVar2;
  *(undefined1 *)(param_2 + 0x6a7) = uVar1;
  *(undefined1 *)(param_2 + 0x6a6) = 1;
  return;
}


