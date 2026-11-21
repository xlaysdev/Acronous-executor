/* Unwind@180026100 @ 180026100 */

void Unwind_180026100(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (**(longlong **)(param_2 + 0x128) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(*(longlong *)(param_2 + 0x160) + 0x20),
                        **(longlong **)(param_2 + 0x128) * 0x68,8);
  }
  lVar1 = *(longlong *)(param_2 + 0x160);
  *(undefined8 *)(lVar1 + 0x18) = 6;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_2 + 0x178);
  *(undefined8 *)(lVar1 + 0x28) = 0;
  return;
}


