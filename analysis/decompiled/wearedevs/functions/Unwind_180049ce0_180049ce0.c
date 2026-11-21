/* Unwind@180049ce0 @ 180049ce0 */

void Unwind_180049ce0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0xd98);
  lVar2 = *(longlong *)(param_2 + 0xd78);
  for (lVar3 = *(longlong *)(param_2 + 0xdb0); lVar1 != lVar3; lVar3 = lVar3 + 1) {
    FUN_180101100(lVar2 + lVar3 * 8);
  }
  return;
}


