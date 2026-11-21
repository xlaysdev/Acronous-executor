/* Unwind@1800d0b10 @ 1800d0b10 */

void Unwind_1800d0b10(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0xd8);
  lVar2 = *(longlong *)(param_2 + 200);
  for (lVar3 = *(longlong *)(param_2 + 0xe0); lVar1 != lVar3; lVar3 = lVar3 + 1) {
    FUN_180101100(lVar2 + lVar3 * 8);
  }
  return;
}


