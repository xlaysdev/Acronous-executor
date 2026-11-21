/* Unwind@18011b500 @ 18011b500 */

void Unwind_18011b500(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_2 + 0x20);
  lVar2 = *(longlong *)(param_2 + 0x38);
  for (lVar4 = *(longlong *)(param_2 + 0x30); lVar1 != lVar4; lVar4 = lVar4 + 1) {
    lVar3 = lVar4 * 0x40;
    (**(code **)(*(longlong *)(lVar2 + 0x20 + lVar3) + 0x20))
              (*(undefined8 *)(lVar2 + 0x38 + lVar3),*(undefined8 *)(lVar2 + 0x28 + lVar3),
               *(undefined8 *)(lVar2 + 0x30 + lVar3));
  }
  return;
}


