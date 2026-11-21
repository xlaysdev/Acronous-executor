/* Unwind@18002f200 @ 18002f200 */

void Unwind_18002f200(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  lVar2 = *(longlong *)(param_2 + 0x28);
  for (lVar4 = *(longlong *)(param_2 + 0x38); lVar1 != lVar4; lVar4 = lVar4 + 1) {
    lVar3 = lVar4 * 0x20;
    (**(code **)(*(longlong *)(lVar2 + lVar3) + 0x20))
              (*(undefined8 *)(lVar2 + 0x18 + lVar3),*(undefined8 *)(lVar2 + 8 + lVar3),
               *(undefined8 *)(lVar2 + 0x10 + lVar3));
  }
  return;
}


