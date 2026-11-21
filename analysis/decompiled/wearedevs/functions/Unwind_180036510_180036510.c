/* Unwind@180036510 @ 180036510 */

void Unwind_180036510(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x2048) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x2040),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x2048) + 0x10));
  }
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x2038),0x18,8);
  return;
}


