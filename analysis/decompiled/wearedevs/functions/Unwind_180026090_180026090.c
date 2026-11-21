/* Unwind@180026090 @ 180026090 */

void Unwind_180026090(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x168);
  lVar2 = *(longlong *)(param_2 + 0x180);
  for (lVar3 = *(longlong *)(param_2 + 0x198); lVar3 != lVar1; lVar3 = lVar3 + 1) {
    FUN_180026670(lVar3 * 0x68 + lVar2);
  }
  return;
}


