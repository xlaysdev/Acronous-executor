/* FUN_180038830 @ 180038830 */

void FUN_180038830(char *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 == '\x06') {
    uVar1 = *(undefined8 *)(param_1 + 8);
    FUN_1800388b0();
    thunk_FUN_1801d3330(uVar1,0x28,8);
    return;
  }
  FUN_18000b2a0();
  return;
}


