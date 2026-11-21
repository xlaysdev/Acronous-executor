/* Unwind@1800d0ac0 @ 1800d0ac0 */

void Unwind_1800d0ac0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x10);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(*(longlong *)(param_2 + 0xe8) + 0x18),lVar1 << 3,8);
  }
  *(undefined1 *)(param_2 + 0xf6) = 0;
  return;
}


