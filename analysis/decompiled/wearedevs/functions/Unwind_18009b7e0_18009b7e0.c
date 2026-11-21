/* Unwind@18009b7e0 @ 18009b7e0 */

void Unwind_18009b7e0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x58);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_2 + 0x60);
    memmove((void *)(*(longlong *)(param_2 + 0x38) + (lVar2 - lVar1) * 0x48),
            (void *)(*(longlong *)(param_2 + 0x38) + lVar2 * 0x48),
            (*(longlong *)(param_2 + 0x50) - lVar2) * 0x48);
  }
  *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x10) = *(longlong *)(param_2 + 0x50) - lVar1;
  return;
}


