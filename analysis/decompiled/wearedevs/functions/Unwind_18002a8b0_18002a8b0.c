/* Unwind@18002a8b0 @ 18002a8b0 */

void Unwind_18002a8b0(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((param_2 & 0xffffffffffffffe0) + 0x60);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)((param_2 & 0xffffffffffffffe0) + 0x68),lVar1,1);
  }
  return;
}


