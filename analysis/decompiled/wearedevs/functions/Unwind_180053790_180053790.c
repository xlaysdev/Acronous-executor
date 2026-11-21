/* Unwind@180053790 @ 180053790 */

void Unwind_180053790(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((*(char *)(param_2 + 0x10c) != '\0') && (**(longlong **)(param_2 + 0xf8) != 0)) {
    lVar1 = *(longlong *)(param_2 + 0xf8);
    (**(code **)(**(longlong **)(param_2 + 0xf8) + 0x20))
              (*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 8),
               *(undefined8 *)(lVar1 + 0x10));
  }
  return;
}


