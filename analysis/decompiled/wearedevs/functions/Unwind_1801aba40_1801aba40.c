/* Unwind@1801aba40 @ 1801aba40 */

void Unwind_1801aba40(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x38),0x20,8);
  if (*(longlong *)(param_2 + 0x40) != 0) {
    lVar1 = *(longlong *)(param_2 + 0x50);
    (**(code **)(*(longlong *)(param_2 + 0x40) + 0x20))
              (*(undefined8 *)(lVar1 + 0x28),*(undefined8 *)(lVar1 + 0x18),
               *(undefined8 *)(lVar1 + 0x20));
  }
  return;
}


