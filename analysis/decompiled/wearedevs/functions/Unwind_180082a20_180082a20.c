/* Unwind@180082a20 @ 180082a20 */

void Unwind_180082a20(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x7b8) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x7c0),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x7b8) + 0x10));
  }
  *(undefined1 *)(param_2 + 0x7cb) = 0;
  return;
}


