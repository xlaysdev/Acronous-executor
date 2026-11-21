/* Unwind@180042d10 @ 180042d10 */

void Unwind_180042d10(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x90);
  if ((uVar1 & 0x7fffffffffffffff) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x98),uVar1,1);
  }
  return;
}


