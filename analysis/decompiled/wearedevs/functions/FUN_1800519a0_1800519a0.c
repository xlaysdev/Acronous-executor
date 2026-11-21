/* FUN_1800519a0 @ 1800519a0 */

void FUN_1800519a0(byte *param_1)

{
  if (((*param_1 == 0xc) || (*param_1 < 0xb)) || (*(longlong *)(param_1 + 0x10) == 0)) {
    return;
  }
  thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 8),*(longlong *)(param_1 + 0x10),1);
  return;
}


