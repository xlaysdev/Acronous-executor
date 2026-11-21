/* Unwind@180181700 @ 180181700 */

void Unwind_180181700(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x48) + 0xe8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(*(longlong *)(param_2 + 0x48) + 0xe0),lVar1 << 7,0x80);
  }
  FUN_180167c00(*(longlong *)(param_2 + 0x48) + 0x160);
  return;
}


