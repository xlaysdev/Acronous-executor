/* Unwind@1800e0930 @ 1800e0930 */

void Unwind_1800e0930(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  *(undefined1 *)(lVar1 + 0x242) = 0;
  if (*(char *)(lVar1 + 0x241) == '\0') {
    return;
  }
  FUN_180091e90(lVar1 + 0x140);
  return;
}


