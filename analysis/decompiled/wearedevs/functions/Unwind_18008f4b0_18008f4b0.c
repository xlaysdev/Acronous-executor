/* Unwind@18008f4b0 @ 18008f4b0 */

void Unwind_18008f4b0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0xc0);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 200));
  }
  return;
}


