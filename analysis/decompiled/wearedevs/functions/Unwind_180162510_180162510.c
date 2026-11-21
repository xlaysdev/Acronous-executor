/* Unwind@180162510 @ 180162510 */

void Unwind_180162510(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x20);
  lVar2 = *(longlong *)(param_2 + 0x38);
  for (lVar3 = *(longlong *)(param_2 + 0x30); lVar1 != lVar3; lVar3 = lVar3 + 1) {
    FUN_18016bc40(*(undefined8 *)(lVar2 + lVar3 * 8));
  }
  return;
}


