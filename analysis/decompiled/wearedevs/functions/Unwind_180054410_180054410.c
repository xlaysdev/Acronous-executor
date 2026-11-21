/* Unwind@180054410 @ 180054410 */

void Unwind_180054410(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((0x7fff < *(ulonglong *)(param_2 + 0x98)) && (**(longlong **)(param_2 + 0x90) != 0)) {
    lVar1 = *(longlong *)(param_2 + 0x90);
    (**(code **)(**(longlong **)(param_2 + 0x90) + 0x20))
              (*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 8),
               *(undefined8 *)(lVar1 + 0x10));
  }
  return;
}


