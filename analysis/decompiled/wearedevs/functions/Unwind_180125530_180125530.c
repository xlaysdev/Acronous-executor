/* Unwind@180125530 @ 180125530 */

void Unwind_180125530(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0x78);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x80));
  }
  return;
}


