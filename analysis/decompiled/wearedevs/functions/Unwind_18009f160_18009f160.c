/* Unwind@18009f160 @ 18009f160 */

void Unwind_18009f160(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x40),0x20,8);
  lVar1 = *(longlong *)(param_2 + 0x48);
  (**(code **)(*(longlong *)(lVar1 + 0x10) + 0x20))
            (*(undefined8 *)(lVar1 + 0x28),*(undefined8 *)(lVar1 + 0x18),
             *(undefined8 *)(lVar1 + 0x20));
  return;
}


