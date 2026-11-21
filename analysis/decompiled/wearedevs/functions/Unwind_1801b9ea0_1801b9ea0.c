/* Unwind@1801b9ea0 @ 1801b9ea0 */

void Unwind_1801b9ea0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  lVar2 = *(longlong *)(lVar1 + 0x820);
  *(longlong *)(lVar1 + 0x820) = lVar2 + -1;
  if (lVar2 == 1 && *(longlong *)(lVar1 + 0x818) == 0) {
    FUN_1801fe8b0(*(undefined8 *)(param_2 + 0x28));
    return;
  }
  return;
}


