/* Unwind@18000b670 @ 18000b670 */

void Unwind_18000b670(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x38);
  lVar2 = *(longlong *)(param_2 + 0x40);
  for (lVar3 = *(longlong *)(param_2 + 0x48); lVar1 != lVar3; lVar3 = lVar3 + 1) {
    (**(code **)(*(longlong *)(lVar2 + 0x20 + lVar3 * 0x48) + 0x20))
              (*(undefined8 *)(lVar2 + 0x38 + lVar3 * 0x48),
               *(undefined8 *)(lVar2 + 0x28 + lVar3 * 0x48),
               *(undefined8 *)(lVar2 + 0x30 + lVar3 * 0x48));
  }
  return;
}


