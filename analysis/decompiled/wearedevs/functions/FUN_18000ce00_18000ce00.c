/* FUN_18000ce00 @ 18000ce00 */

void FUN_18000ce00(longlong param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x1a0) == '\0') {
    FUN_18000bbb0();
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


