/* Unwind@1800ee250 @ 1800ee250 */

void Unwind_1800ee250(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  if (*(longlong *)(lVar1 + 0x230) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(lVar1 + 0x220),*(longlong *)(lVar1 + 0x230) << 5,4);
  }
  *(undefined1 *)(lVar1 + 0xa5a) = 0;
  return;
}


