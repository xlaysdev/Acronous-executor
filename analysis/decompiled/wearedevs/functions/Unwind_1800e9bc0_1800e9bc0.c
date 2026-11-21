/* Unwind@1800e9bc0 @ 1800e9bc0 */

void Unwind_1800e9bc0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  *(undefined8 *)(param_2 + 0x5f0) = *(undefined8 *)(param_2 + 0x4f8);
  *(undefined8 *)(param_2 + 0x5e8) = *(undefined8 *)(param_2 + 0x500);
  if (*(char *)(*(longlong *)(param_2 + 0x600) + 0x178) == '\0') {
    return;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x600) + 400);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(*(longlong *)(param_2 + 0x600) + 0x188),lVar1,1);
  }
  return;
}


