/* Unwind@18003ddb0 @ 18003ddb0 */

void Unwind_18003ddb0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x28),0x10,8);
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x48);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x50));
  }
  return;
}


