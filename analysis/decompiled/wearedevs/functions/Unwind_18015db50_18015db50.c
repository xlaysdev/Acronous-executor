/* Unwind@18015db50 @ 18015db50 */

void Unwind_18015db50(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x28);
  for (lVar1 = *(longlong *)(param_2 + 0x30); lVar1 != 0; lVar1 = lVar1 + -1) {
    FUN_18015dc20(lVar2);
    lVar2 = lVar2 + 0x60;
  }
  return;
}


