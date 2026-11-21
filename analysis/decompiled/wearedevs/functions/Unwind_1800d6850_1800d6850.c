/* Unwind@1800d6850 @ 1800d6850 */

void Unwind_1800d6850(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x828);
  *(undefined1 *)(lVar1 + 0x52) = 0;
  if (*(char *)(lVar1 + 0x53) == '\0') {
    return;
  }
  FUN_1800df340(param_2 + 0x7a8);
  return;
}


