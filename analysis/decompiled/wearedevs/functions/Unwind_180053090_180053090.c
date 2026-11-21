/* Unwind@180053090 @ 180053090 */

void Unwind_180053090(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((*(char *)(param_2 + 0xfc) != '\0') && (**(longlong **)(param_2 + 0xf0) != 0)) {
    lVar1 = *(longlong *)(param_2 + 0xf0);
    (**(code **)(**(longlong **)(param_2 + 0xf0) + 0x20))
              (*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 8),
               *(undefined8 *)(lVar1 + 0x10));
  }
  return;
}


