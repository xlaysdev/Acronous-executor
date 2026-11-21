/* Unwind@180181640 @ 180181640 */

void Unwind_180181640(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  lVar2 = *(longlong *)(param_2 + 0x40);
  for (lVar3 = *(longlong *)(param_2 + 0x38); lVar1 != lVar3; lVar3 = lVar3 + 1) {
    FUN_18016bc40(*(undefined8 *)(lVar2 + lVar3 * 8));
  }
  return;
}


