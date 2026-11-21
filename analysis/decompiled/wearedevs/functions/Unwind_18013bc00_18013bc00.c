/* Unwind@18013bc00 @ 18013bc00 */

void Unwind_18013bc00(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0x30);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x38));
  }
  return;
}


