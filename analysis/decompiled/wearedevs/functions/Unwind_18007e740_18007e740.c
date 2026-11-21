/* Unwind@18007e740 @ 18007e740 */

void Unwind_18007e740(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x4e7);
  if (*(char *)(param_2 + 0x4e6) == '\0') {
    *(byte *)(param_2 + 0x4e5) = bVar1 & 1;
    return;
  }
  if (*(longlong *)(param_2 + 0x478) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x480),*(longlong *)(param_2 + 0x478),1);
  }
  *(byte *)(param_2 + 0x4e5) = bVar1 & 1;
  return;
}


