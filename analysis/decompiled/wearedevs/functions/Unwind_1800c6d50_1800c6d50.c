/* Unwind@1800c6d50 @ 1800c6d50 */

void Unwind_1800c6d50(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(char *)(*(longlong *)(param_2 + 0x38) + 0x150) != '\x02') {
    lVar1 = *(longlong *)(param_2 + 0x38);
    (**(code **)(*(longlong *)(lVar1 + 0x130) + 0x20))
              (*(undefined8 *)(lVar1 + 0x148),*(undefined8 *)(lVar1 + 0x138),
               *(undefined8 *)(lVar1 + 0x140));
  }
  return;
}


