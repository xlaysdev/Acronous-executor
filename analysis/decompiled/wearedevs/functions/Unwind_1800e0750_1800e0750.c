/* Unwind@1800e0750 @ 1800e0750 */

void Unwind_1800e0750(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x28),0x20,8);
  lVar1 = *(longlong *)(param_2 + 0x30);
  (**(code **)(*(longlong *)(lVar1 + 0x50) + 0x20))
            (*(undefined8 *)(lVar1 + 0x68),*(undefined8 *)(lVar1 + 0x58),
             *(undefined8 *)(lVar1 + 0x60));
  return;
}


