/* Unwind@18016efa0 @ 18016efa0 */

void Unwind_18016efa0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  lVar2 = *(longlong *)(param_2 + 0x30);
  if (*(longlong *)(param_2 + 0x38) != *(longlong *)(param_2 + 0x40)) {
    do {
      FUN_18016e850(lVar2);
      lVar2 = lVar2 + 8;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}


