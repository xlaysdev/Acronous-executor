/* Unwind@1801bad30 @ 1801bad30 */

void Unwind_1801bad30(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x20);
  lVar2 = *(longlong *)(param_2 + 0x38);
  for (lVar3 = *(longlong *)(param_2 + 0x30); lVar1 != lVar3; lVar3 = lVar3 + 1) {
    FUN_1801bab00(lVar3 * 0x158 + lVar2);
  }
  return;
}


