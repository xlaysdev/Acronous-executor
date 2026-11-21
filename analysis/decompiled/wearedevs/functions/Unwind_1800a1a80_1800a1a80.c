/* Unwind@1800a1a80 @ 1800a1a80 */

void Unwind_1800a1a80(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x38),0x20,8);
  lVar1 = *(longlong *)(param_2 + 0x40);
  (**(code **)(*(longlong *)(lVar1 + 0x10) + 0x20))
            (*(undefined8 *)(lVar1 + 0x28),*(undefined8 *)(lVar1 + 0x18),
             *(undefined8 *)(lVar1 + 0x20));
  return;
}


