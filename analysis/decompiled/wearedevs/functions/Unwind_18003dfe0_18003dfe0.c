/* Unwind@18003dfe0 @ 18003dfe0 */

void Unwind_18003dfe0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0x38);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x40));
  }
  return;
}


