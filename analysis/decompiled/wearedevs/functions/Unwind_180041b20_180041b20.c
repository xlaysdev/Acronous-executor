/* Unwind@180041b20 @ 180041b20 */

void Unwind_180041b20(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x38);
  (**(code **)(*(longlong *)(lVar1 + 0x18) + 0x20))
            (*(undefined8 *)(lVar1 + 0x30),*(undefined8 *)(lVar1 + 0x20),
             *(undefined8 *)(lVar1 + 0x28));
  return;
}


