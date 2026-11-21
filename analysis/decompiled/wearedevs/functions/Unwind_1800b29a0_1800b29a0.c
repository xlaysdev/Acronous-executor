/* Unwind@1800b29a0 @ 1800b29a0 */

void Unwind_1800b29a0(undefined8 param_1,longlong param_2)

{
  short *psVar1;
  
  psVar1 = *(short **)(param_2 + 0x450);
  if (*psVar1 == 3) {
    return;
  }
  if ((char)psVar1[0x1d0] == '\0') {
    return;
  }
  FUN_18000a9e0(*(undefined8 *)(psVar1 + 0x18),*(undefined8 *)(psVar1 + 0x1c));
  return;
}


