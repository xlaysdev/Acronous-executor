/* Unwind@1801fcc90 @ 1801fcc90 */

void Unwind_1801fcc90(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd7) != '\0') {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      *(undefined8 *)(param_2 + 0x38) = 8;
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x60) = 8;
      *(undefined8 *)(param_2 + 0x68) = 0;
    }
    FUN_1801ba170(param_2 + 0x78);
  }
  return;
}


