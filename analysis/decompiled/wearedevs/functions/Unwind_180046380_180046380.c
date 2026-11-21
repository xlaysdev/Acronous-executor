/* Unwind@180046380 @ 180046380 */

void Unwind_180046380(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((0x7fff < *(ulonglong *)(param_2 + 0x88)) && (**(longlong **)(param_2 + 0x90) != 0)) {
    lVar1 = *(longlong *)(param_2 + 0x90);
    (**(code **)(**(longlong **)(param_2 + 0x90) + 0x20))
              (*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 8),
               *(undefined8 *)(lVar1 + 0x10));
  }
  return;
}


