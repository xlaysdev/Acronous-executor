/* Unwind@1800449c0 @ 1800449c0 */

void Unwind_1800449c0(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(*(longlong *)(param_2 + 0x30) + 0x278);
  if ((uVar1 & 0x7fffffffffffffff) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x280),uVar1,1);
  }
  return;
}


