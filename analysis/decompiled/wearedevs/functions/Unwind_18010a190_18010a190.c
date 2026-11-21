/* Unwind@18010a190 @ 18010a190 */

void Unwind_18010a190(undefined8 param_1,ulonglong param_2)

{
  param_2 = param_2 & 0xffffffffffffff80;
  if ((*(longlong *)(param_2 + 0x58) != 0) && ((*(byte *)(param_2 + 0x4f) & 1) == 0)) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x70),*(undefined8 *)(param_2 + 0x58),1);
  }
  return;
}


