/* Unwind@18002fc70 @ 18002fc70 */

void Unwind_18002fc70(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x98);
  lVar2 = *(longlong *)(param_2 + 0x90);
  for (lVar3 = *(longlong *)(param_2 + 0xa0); lVar1 != lVar3; lVar3 = lVar3 + 1) {
    FUN_1800300c0(lVar3 * 0x20 + lVar2);
  }
  return;
}


