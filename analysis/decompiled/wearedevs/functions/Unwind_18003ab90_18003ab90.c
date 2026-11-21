/* Unwind@18003ab90 @ 18003ab90 */

void Unwind_18003ab90(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0x58);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x60));
  }
  return;
}


