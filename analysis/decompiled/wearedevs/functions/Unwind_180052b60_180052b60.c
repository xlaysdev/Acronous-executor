/* Unwind@180052b60 @ 180052b60 */

void Unwind_180052b60(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = **(longlong **)(param_2 + 0x80);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_2 + 0x80);
    (**(code **)(lVar1 + 0x20))
              (*(undefined8 *)(lVar2 + 0x18),*(undefined8 *)(lVar2 + 8),
               *(undefined8 *)(lVar2 + 0x10));
  }
  return;
}


