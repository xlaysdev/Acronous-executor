/* Unwind@180190360 @ 180190360 */

void Unwind_180190360(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x20);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_2 + 0x28);
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x38) + 8);
    memmove((void *)(lVar3 + (lVar2 - lVar1) * 8),(void *)(lVar3 + lVar2 * 8),
            (*(longlong *)(param_2 + 0x30) - lVar2) * 8);
  }
  *(longlong *)(*(longlong *)(param_2 + 0x38) + 0x10) = *(longlong *)(param_2 + 0x30) - lVar1;
  return;
}


