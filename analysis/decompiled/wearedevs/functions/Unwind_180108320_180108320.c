/* Unwind@180108320 @ 180108320 */

void Unwind_180108320(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x28),0x20,8);
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x10);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_2 + 0x30);
    (**(code **)(lVar1 + 0x20))
              (*(undefined8 *)(lVar2 + 0x28),*(undefined8 *)(lVar2 + 0x18),
               *(undefined8 *)(lVar2 + 0x20));
  }
  return;
}


