/* Unwind@180056250 @ 180056250 */

void Unwind_180056250(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_2 + 0x110);
  lVar2 = *(longlong *)(param_2 + 0x100);
  for (lVar4 = *(longlong *)(param_2 + 0x128); lVar4 != lVar1; lVar4 = lVar4 + 1) {
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


