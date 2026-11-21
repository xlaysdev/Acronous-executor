/* Unwind@180045870 @ 180045870 */

void Unwind_180045870(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((*(char *)(param_2 + 0x11d) != '\0') && (**(longlong **)(param_2 + 0x100) != 0)) {
    lVar1 = *(longlong *)(param_2 + 0x100);
    (**(code **)(**(longlong **)(param_2 + 0x100) + 0x20))
              (*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 8),
               *(undefined8 *)(lVar1 + 0x10));
  }
  return;
}


