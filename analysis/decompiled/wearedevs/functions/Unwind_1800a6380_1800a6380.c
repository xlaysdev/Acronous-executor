/* Unwind@1800a6380 @ 1800a6380 */

void Unwind_1800a6380(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x48) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x40),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x48) + 0x10));
  }
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x30),0x18,8);
  if (*(int *)(param_2 + 0x28) != 3) {
    FUN_1800a7560(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}


