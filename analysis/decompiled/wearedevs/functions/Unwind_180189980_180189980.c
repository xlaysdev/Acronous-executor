/* Unwind@180189980 @ 180189980 */

void Unwind_180189980(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x60) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x58),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 0x10));
  }
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x48),0x18,8);
  *(undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x130) = *(undefined8 *)(param_2 + 0x50);
  FUN_180075a40(*(undefined8 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x6c));
  return;
}


