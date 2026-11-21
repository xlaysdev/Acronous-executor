/* Unwind@1800c5eb0 @ 1800c5eb0 */

void Unwind_1800c5eb0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x618);
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x630) + 0x360);
  if (lVar2 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(*(longlong *)(param_2 + 0x630) + 0x368),lVar2,1);
  }
  *(undefined8 *)(param_2 + 0x5b8) = uVar1;
  return;
}


