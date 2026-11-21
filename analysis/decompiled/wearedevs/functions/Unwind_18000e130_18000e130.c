/* Unwind@18000e130 @ 18000e130 */

void Unwind_18000e130(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0xa0);
  if (*(char *)(lVar1 + 0x3b1) != '\0') {
    FUN_18000bbb0(lVar1 + 0x120);
  }
  *(undefined2 *)(lVar1 + 0x3b0) = 2;
  return;
}


