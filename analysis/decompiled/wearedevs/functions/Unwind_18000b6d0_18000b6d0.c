/* Unwind@18000b6d0 @ 18000b6d0 */

void Unwind_18000b6d0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x30);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x40),lVar1 * 0x48,8);
  }
  return;
}


