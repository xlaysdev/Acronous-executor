/* Unwind@1800d79e0 @ 1800d79e0 */

void Unwind_1800d79e0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x9c8);
  *(undefined1 *)(lVar1 + 0x4a) = 0;
  if (*(char *)(lVar1 + 0x4b) == '\0') {
    return;
  }
  FUN_1800c7530(param_2 + 0x928);
  return;
}


