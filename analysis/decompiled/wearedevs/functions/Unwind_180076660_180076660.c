/* Unwind@180076660 @ 180076660 */

void Unwind_180076660(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x28);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_2 + 0x28);
    (**(code **)(lVar1 + 0x20))
              (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x30),
               *(undefined8 *)(lVar2 + 0x38));
  }
  return;
}


