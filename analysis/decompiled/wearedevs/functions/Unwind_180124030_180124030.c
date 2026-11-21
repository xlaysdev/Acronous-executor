/* Unwind@180124030 @ 180124030 */

void Unwind_180124030(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0xa0) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x98),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0xa0) + 0x10));
  }
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x68),0x18,8);
  return;
}


