/* FUN_180018780 @ 180018780 */

void FUN_180018780(longlong param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x1a0) == '\0') {
    FUN_180018190();
    return;
  }
  if (*(char *)(param_1 + 0x1a0) != '\x03') {
    return;
  }
  FUN_18000ac30(param_1 + 0x110);
  plVar1 = *(longlong **)(param_1 + 0x108);
  if (*plVar1 != 0) {
    thunk_FUN_1801d3330(plVar1[1],*plVar1,1);
  }
  thunk_FUN_1801d3330(plVar1,0x58,8);
  return;
}


