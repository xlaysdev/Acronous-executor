/* Unwind@180106a20 @ 180106a20 */

void Unwind_180106a20(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x631);
  if ((*(byte *)(param_2 + 0x630) & 1) == 0) {
    *(byte *)(param_2 + 0x637) = bVar1 & 1;
    return;
  }
  if ((*(ulonglong *)(param_2 + 0x468) & 0x7fffffffffffffff) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x470),*(ulonglong *)(param_2 + 0x468),1);
  }
  *(byte *)(param_2 + 0x637) = bVar1 & 1;
  return;
}


