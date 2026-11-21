/* Unwind@1800b2340 @ 1800b2340 */

void Unwind_1800b2340(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x438) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x448),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x438) + 0x10));
  }
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x430),0x18,8);
  return;
}


