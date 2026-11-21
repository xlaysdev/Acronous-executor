/* FUN_180017f40 @ 180017f40 */

void FUN_180017f40(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  if (*param_1 != '\x06') {
    FUN_18000b2a0();
    return;
  }
  plVar1 = *(longlong **)(param_1 + 8);
  if (*plVar1 == 1) {
    FUN_18000b160(plVar1 + 1);
  }
  else if ((*plVar1 == 0) && (plVar1[2] != 0)) {
    thunk_FUN_1801d3330(plVar1[1],plVar1[2],1,param_4,plVar1,0xfffffffffffffffe);
  }
  thunk_FUN_1801d3330(plVar1,0x28,8);
  return;
}


