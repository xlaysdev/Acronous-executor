/* Unwind@1801837a0 @ 1801837a0 */

void Unwind_1801837a0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x448);
  lVar2 = *(longlong *)(param_2 + 0x440);
  for (lVar3 = *(longlong *)(param_2 + 0x458); lVar1 != lVar3; lVar3 = lVar3 + 1) {
    FUN_18016bc40(*(undefined8 *)(lVar2 + lVar3 * 8));
  }
  return;
}


