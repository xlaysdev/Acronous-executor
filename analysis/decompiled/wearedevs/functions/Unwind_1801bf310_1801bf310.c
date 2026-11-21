/* Unwind@1801bf310 @ 1801bf310 */

void Unwind_1801bf310(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x360);
  lVar2 = *(longlong *)(param_2 + 0x2f8);
  for (lVar3 = *(longlong *)(param_2 + 0x370); lVar1 != lVar3; lVar3 = lVar3 + 1) {
    FUN_1801bab00(lVar3 * 0x158 + lVar2);
  }
  return;
}


