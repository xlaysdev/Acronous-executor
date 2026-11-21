/* Unwind@18015d820 @ 18015d820 */

void Unwind_18015d820(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x48);
  for (lVar1 = *(longlong *)(param_2 + 0x40); lVar1 != 0; lVar1 = lVar1 + -1) {
    FUN_18015dc20(lVar2);
    lVar2 = lVar2 + 0x60;
  }
  return;
}


