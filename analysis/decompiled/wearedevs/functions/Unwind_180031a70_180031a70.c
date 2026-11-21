/* Unwind@180031a70 @ 180031a70 */

void Unwind_180031a70(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x20);
  lVar2 = *(longlong *)(param_2 + 0x38);
  for (lVar3 = *(longlong *)(param_2 + 0x30); lVar1 != lVar3; lVar3 = lVar3 + 1) {
    (**(code **)(*(longlong *)(lVar2 + lVar3 * 0x10) + 0x18))
              (*(undefined8 *)(lVar2 + 8 + lVar3 * 0x10));
  }
  return;
}


