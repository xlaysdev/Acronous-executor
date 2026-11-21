/* Unwind@180032c90 @ 180032c90 */

void Unwind_180032c90(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  for (lVar3 = *(longlong *)(param_2 + 0x30); lVar3 != *(longlong *)(param_2 + 0x38);
      lVar3 = lVar3 + 1) {
    lVar1 = *(longlong *)(param_2 + 0x20) + lVar3 * 0x68;
    lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0x40 + lVar3 * 0x68);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x20))
                (*(undefined8 *)(lVar1 + 0x58),*(undefined8 *)(lVar1 + 0x48),
                 *(undefined8 *)(lVar1 + 0x50));
    }
    (**(code **)(*(longlong *)(lVar1 + 0x18) + 0x20))
              (*(undefined8 *)(lVar1 + 0x30),*(undefined8 *)(lVar1 + 0x20),
               *(undefined8 *)(lVar1 + 0x28));
  }
  return;
}


