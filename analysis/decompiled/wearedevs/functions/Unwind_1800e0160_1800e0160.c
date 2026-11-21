/* Unwind@1800e0160 @ 1800e0160 */

void Unwind_1800e0160(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x28),0x20,8);
  lVar1 = *(longlong *)(param_2 + 0x30);
  (**(code **)(*(longlong *)(lVar1 + 0x1a0) + 0x20))
            (*(undefined8 *)(lVar1 + 0x1b8),*(undefined8 *)(lVar1 + 0x1a8),
             *(undefined8 *)(lVar1 + 0x1b0));
  return;
}


