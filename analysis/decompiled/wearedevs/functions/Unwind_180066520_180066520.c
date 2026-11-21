/* Unwind@180066520 @ 180066520 */

void Unwind_180066520(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  if (*(longlong *)(lVar1 + 0x78) != 0) {
    (**(code **)(*(longlong *)(lVar1 + 0x78) + 0x20))
              (*(undefined8 *)(lVar1 + 0x90),*(undefined8 *)(lVar1 + 0x80),
               *(undefined8 *)(lVar1 + 0x88));
  }
  return;
}


