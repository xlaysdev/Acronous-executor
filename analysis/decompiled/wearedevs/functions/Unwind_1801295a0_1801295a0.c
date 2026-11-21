/* Unwind@1801295a0 @ 1801295a0 */

void Unwind_1801295a0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x50) + 0x18);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x58),lVar1 * 0x68,8);
  }
  lVar1 = *(longlong *)(param_2 + 0x50);
  *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(lVar1 + 0x28) = 0;
  return;
}


