/* Unwind@1800ce940 @ 1800ce940 */

void Unwind_1800ce940(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x2b30);
  *(undefined1 *)(lVar1 + 0x10ad) = 0;
  if (*(char *)(lVar1 + 0x10ae) == '\0') {
    return;
  }
  FUN_18000adf0(param_2 + 0x2798);
  return;
}


