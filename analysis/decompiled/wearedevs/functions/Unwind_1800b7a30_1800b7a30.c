/* Unwind@1800b7a30 @ 1800b7a30 */

void Unwind_1800b7a30(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2f8f) == '\0') {
    *(undefined8 *)(param_2 + 0x2f28) = *(undefined8 *)(param_2 + 0x2f58);
    *(undefined8 *)(param_2 + 0x2f20) = *(undefined8 *)(param_2 + 0x2f80);
    *(undefined8 *)(param_2 + 0x2f18) = *(undefined8 *)(param_2 + 0x2f68);
    return;
  }
  FUN_1800b0630(param_2 + 4000);
  *(undefined8 *)(param_2 + 0x2f28) = *(undefined8 *)(param_2 + 0x2f58);
  *(undefined8 *)(param_2 + 0x2f20) = *(undefined8 *)(param_2 + 0x2f80);
  *(undefined8 *)(param_2 + 0x2f18) = *(undefined8 *)(param_2 + 0x2f68);
  return;
}


