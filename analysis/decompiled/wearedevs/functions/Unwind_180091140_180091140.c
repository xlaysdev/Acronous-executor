/* Unwind@180091140 @ 180091140 */

void Unwind_180091140(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x230) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x228),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x230) + 0x10));
  }
  lVar1 = *(longlong *)(param_2 + 0x250);
  *(undefined1 *)(lVar1 + 0x2e0) = 0;
  *(undefined8 *)(lVar1 + 0x2e8) = *(undefined8 *)(param_2 + 0x248);
  *(undefined8 *)(lVar1 + 0x2f0) = *(undefined8 *)(param_2 + 0x240);
  *(undefined1 *)(param_2 + 0x25f) = 0;
  return;
}


