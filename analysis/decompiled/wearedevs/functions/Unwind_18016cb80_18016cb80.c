/* Unwind@18016cb80 @ 18016cb80 */

void Unwind_18016cb80(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x40) + 0x20);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x48) + 0x10);
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x40) + 0x18);
    if (lVar3 != lVar2) {
      lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x48) + 8);
      memmove((void *)(lVar4 + lVar2 * 8),(void *)(lVar4 + lVar3 * 8),lVar1 * 8);
    }
    *(longlong *)(*(longlong *)(param_2 + 0x48) + 0x10) = lVar2 + lVar1;
  }
  return;
}


