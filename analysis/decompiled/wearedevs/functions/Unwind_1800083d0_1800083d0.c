/* Unwind@1800083d0 @ 1800083d0 */

void Unwind_1800083d0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x1a0);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_2 + 0x1a8);
    memmove((void *)((lVar2 - lVar1) * 0x20 + *(longlong *)(param_2 + 0x760)),
            (void *)(lVar2 * 0x20 + *(longlong *)(param_2 + 0x760)),
            (*(longlong *)(param_2 + 0x768) - lVar2) * 0x20);
  }
  *(longlong *)(*(longlong *)(param_2 + 0x750) + 0x10) = *(longlong *)(param_2 + 0x768) - lVar1;
  return;
}


