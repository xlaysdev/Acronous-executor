/* Unwind@1801c03f0 @ 1801c03f0 */

void Unwind_1801c03f0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 199) != '\0') {
    if (*(longlong *)(param_2 + 0x30) != 0) {
      *(undefined8 *)(param_2 + 0x48) = 8;
      *(undefined8 *)(param_2 + 0x50) = 0;
      *(undefined8 *)(param_2 + 0x70) = 8;
      *(undefined8 *)(param_2 + 0x78) = 0;
    }
    FUN_1801ba170(param_2 + 0x88);
  }
  return;
}


