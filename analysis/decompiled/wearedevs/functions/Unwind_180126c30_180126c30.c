/* Unwind@180126c30 @ 180126c30 */

void Unwind_180126c30(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  for (lVar3 = *(longlong *)(param_2 + 0x30); lVar3 != *(longlong *)(param_2 + 0x38);
      lVar3 = lVar3 + 1) {
    lVar1 = *(longlong *)(param_2 + 0x40) + lVar3 * 0x60;
    lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x40) + 0x38 + lVar3 * 0x60);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x20))
                (*(undefined8 *)(lVar1 + 0x50),*(undefined8 *)(lVar1 + 0x40),
                 *(undefined8 *)(lVar1 + 0x48));
    }
    (**(code **)(*(longlong *)(lVar1 + 0x18) + 0x20))
              (*(undefined8 *)(lVar1 + 0x30),*(undefined8 *)(lVar1 + 0x20),
               *(undefined8 *)(lVar1 + 0x28));
  }
  return;
}


