/* Unwind@1800dc4a0 @ 1800dc4a0 */

void Unwind_1800dc4a0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x19a0),0x20,8);
  lVar1 = *(longlong *)(param_2 + 0x19a8);
  (**(code **)(*(longlong *)(lVar1 + 0x590) + 0x20))
            (*(undefined8 *)(lVar1 + 0x5a8),*(undefined8 *)(lVar1 + 0x598),
             *(undefined8 *)(lVar1 + 0x5a0));
  return;
}


