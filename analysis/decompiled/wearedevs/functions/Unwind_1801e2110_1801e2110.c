/* Unwind@1801e2110 @ 1801e2110 */

void Unwind_1801e2110(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x38) + 8);
  lVar2 = *(longlong *)(param_2 + 0x30);
  lVar3 = *(longlong *)(param_2 + 0x40);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x28),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x38) + 0x10));
  }
  lVar1 = *(longlong *)(param_2 + 0x48);
  lVar4 = *(longlong *)(param_2 + 0x40);
  lVar5 = *(longlong *)(param_2 + 0x30);
  if (lVar2 != lVar3) {
    do {
      FUN_1801e1f70(*(undefined8 *)(lVar1 + lVar5 * 0x10),*(undefined8 *)(lVar1 + 8 + lVar5 * 0x10))
      ;
      lVar5 = lVar5 + 1;
    } while (lVar5 != lVar4);
  }
  return;
}


