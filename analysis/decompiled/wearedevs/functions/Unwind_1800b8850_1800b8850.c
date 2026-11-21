/* Unwind@1800b8850 @ 1800b8850 */

void Unwind_1800b8850(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x48) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x40),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x48) + 0x10));
  }
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x38),0x18,8);
  *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 8) = *(undefined8 *)(param_2 + 0x30);
  return;
}


