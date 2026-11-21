/* Unwind@180093c70 @ 180093c70 */

void Unwind_180093c70(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  lVar2 = *(longlong *)(param_2 + 0x20);
  for (lVar3 = *(longlong *)(param_2 + 0x30); lVar1 != lVar3; lVar3 = lVar3 + 1) {
    FUN_180101100(lVar2 + lVar3 * 8);
  }
  return;
}


