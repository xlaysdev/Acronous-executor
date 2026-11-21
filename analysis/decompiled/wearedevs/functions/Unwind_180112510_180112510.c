/* Unwind@180112510 @ 180112510 */

void Unwind_180112510(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  
  bVar1 = *(byte *)(param_2 + 0x3f);
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 8);
  if (lVar2 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x28),lVar2,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x10));
  }
  if ((bVar1 & 1) == 0) {
    FUN_18000aa80(*(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x10),
                  *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x18));
  }
  return;
}


