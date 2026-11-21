/* Unwind@1800e03d0 @ 1800e03d0 */

void Unwind_1800e03d0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x28),0x20,8);
  lVar1 = *(longlong *)(param_2 + 0x30);
  (**(code **)(*(longlong *)(lVar1 + 0x2b8) + 0x20))
            (*(undefined8 *)(lVar1 + 0x2d0),*(undefined8 *)(lVar1 + 0x2c0),
             *(undefined8 *)(lVar1 + 0x2c8));
  return;
}


