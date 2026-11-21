/* Unwind@180061250 @ 180061250 */

void Unwind_180061250(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  
  if ((*(char *)(param_2 + 0x8d2) != '\0') &&
     (uVar1 = (*(longlong *)(param_2 + 0x410) << 0x20) + *(longlong *)(param_2 + 0x8c8),
     (uVar1 & 0x7fffffffffffffff) != 0)) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x418),uVar1,1);
  }
  return;
}


