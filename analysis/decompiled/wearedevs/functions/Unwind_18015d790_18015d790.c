/* Unwind@18015d790 @ 18015d790 */

void Unwind_18015d790(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  lVar2 = *(longlong *)(param_2 + 0x28);
  for (lVar3 = *(longlong *)(param_2 + 0x48); lVar1 != lVar3; lVar3 = lVar3 + 1) {
    FUN_18015dc20(lVar2 + lVar3 * 0x60 + 0x10);
  }
  return;
}


