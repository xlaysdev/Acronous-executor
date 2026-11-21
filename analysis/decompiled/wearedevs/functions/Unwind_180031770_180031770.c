/* Unwind@180031770 @ 180031770 */

void Unwind_180031770(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x38);
  lVar2 = *(longlong *)(param_2 + 0x28);
  for (lVar3 = *(longlong *)(param_2 + 0x40); lVar1 != lVar3; lVar3 = lVar3 + 1) {
    (**(code **)(*(longlong *)(lVar2 + lVar3 * 0x10) + 0x18))
              (*(undefined8 *)(lVar2 + 8 + lVar3 * 0x10));
  }
  return;
}


