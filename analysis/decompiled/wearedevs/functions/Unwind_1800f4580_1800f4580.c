/* Unwind@1800f4580 @ 1800f4580 */

void Unwind_1800f4580(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x1328) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x1330),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x1328) + 0x10));
  }
  return;
}


