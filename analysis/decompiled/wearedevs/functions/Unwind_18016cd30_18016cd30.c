/* Unwind@18016cd30 @ 18016cd30 */

void Unwind_18016cd30(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x38) + 0x20);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x38) + 0x10);
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x38) + 0x18);
    lVar4 = *(longlong *)(lVar2 + 0x10);
    if (lVar3 != lVar4) {
      memmove((void *)(*(longlong *)(lVar2 + 8) + lVar4 * 8),
              (void *)(*(longlong *)(lVar2 + 8) + lVar3 * 8),lVar1 * 8);
    }
    *(longlong *)(lVar2 + 0x10) = lVar4 + lVar1;
  }
  return;
}


