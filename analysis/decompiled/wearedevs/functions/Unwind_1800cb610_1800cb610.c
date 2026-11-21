/* Unwind@1800cb610 @ 1800cb610 */

void Unwind_1800cb610(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x208);
  lVar2 = *(longlong *)(param_2 + 0x280);
  for (lVar3 = *(longlong *)(param_2 + 0x278); lVar1 != lVar3; lVar3 = lVar3 + 1) {
    (**(code **)(*(longlong *)(lVar2 + 0x20 + lVar3 * 0x48) + 0x20))
              (*(undefined8 *)(lVar2 + 0x38 + lVar3 * 0x48),
               *(undefined8 *)(lVar2 + 0x28 + lVar3 * 0x48),
               *(undefined8 *)(lVar2 + 0x30 + lVar3 * 0x48));
  }
  return;
}


