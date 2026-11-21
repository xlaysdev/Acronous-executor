/* Unwind@1801ccdd0 @ 1801ccdd0 */

void Unwind_1801ccdd0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = -*(longlong *)(param_2 + 0x68);
  if (-*(longlong *)(param_2 + 0x70) != *(longlong *)(param_2 + 0x68)) {
    do {
      lVar1 = lVar2 * 0x20;
      lVar2 = lVar2 + 1;
      FUN_1801cca30(lVar1 + *(longlong *)(param_2 + 0x80));
    } while (lVar2 != *(longlong *)(param_2 + 0x70));
  }
  return;
}


