/* Unwind@180185530 @ 180185530 */

void Unwind_180185530(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  if (*(char *)(param_2 + 0xa7) == '\0') {
    *(undefined8 *)(param_2 + 0xa8) = uVar1;
    *(undefined1 *)(param_2 + 0xb7) = 0;
    return;
  }
  FUN_18016e850(param_2 + 0x58);
  *(undefined8 *)(param_2 + 0xa8) = uVar1;
  *(undefined1 *)(param_2 + 0xb7) = 1;
  return;
}


