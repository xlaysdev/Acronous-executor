/* Unwind@18000aec0 @ 18000aec0 */

void Unwind_18000aec0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  (**(code **)(*(longlong *)(lVar1 + 0x30) + 0x20))
            (*(undefined8 *)(lVar1 + 0x48),*(undefined8 *)(lVar1 + 0x38),
             *(undefined8 *)(lVar1 + 0x40));
  return;
}


