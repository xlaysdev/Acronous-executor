/* Unwind@180183510 @ 180183510 */

void Unwind_180183510(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x464);
  FUN_180168230(param_2 + 0x290);
  if ((*(ulonglong *)(param_2 + 0x3b0) & 0x7fffffffffffffff) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x278),*(undefined8 *)(param_2 + 0x3b0),1);
  }
  *(undefined1 *)(param_2 + 0x472) = 0;
  *(byte *)(param_2 + 0x471) = bVar1 & 1;
  *(undefined1 *)(param_2 + 0x470) = 1;
  return;
}


