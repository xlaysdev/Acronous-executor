/* Unwind@18007afe0 @ 18007afe0 */

void Unwind_18007afe0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_2 + 0x20);
  lVar2 = *(longlong *)(param_2 + 0x28);
  for (lVar4 = *(longlong *)(param_2 + 0x30); lVar4 != lVar1; lVar4 = lVar4 + 1) {
    lVar3 = *(longlong *)(lVar2 + lVar4 * 0x20);
    if (lVar3 != 0) {
      lVar5 = lVar4 * 0x20 + lVar2;
      (**(code **)(lVar3 + 0x20))
                (*(undefined8 *)(lVar5 + 0x18),*(undefined8 *)(lVar5 + 8),
                 *(undefined8 *)(lVar5 + 0x10));
    }
  }
  return;
}


