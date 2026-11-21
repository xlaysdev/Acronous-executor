/* Unwind@1800e0450 @ 1800e0450 */

void Unwind_1800e0450(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x28),0x20,8);
  lVar1 = *(longlong *)(param_2 + 0x30);
  (**(code **)(*(longlong *)(lVar1 + 0x590) + 0x20))
            (*(undefined8 *)(lVar1 + 0x5a8),*(undefined8 *)(lVar1 + 0x598),
             *(undefined8 *)(lVar1 + 0x5a0));
  return;
}


