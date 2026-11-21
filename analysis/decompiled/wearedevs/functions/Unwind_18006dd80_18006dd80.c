/* Unwind@18006dd80 @ 18006dd80 */

void Unwind_18006dd80(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_2 + 0x456);
  FUN_18007c7a0(param_2 + 0x350);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_2 + 0x458) = 0;
    return;
  }
  FUN_18003b710(param_2 + 400);
  *(undefined1 *)(param_2 + 0x458) = 1;
  return;
}


