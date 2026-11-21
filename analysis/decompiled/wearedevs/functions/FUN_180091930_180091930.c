/* FUN_180091930 @ 180091930 */

void FUN_180091930(int *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*param_1 == 3) {
    FUN_18000afd0(*(undefined8 *)(param_1 + 2));
    return;
  }
  FUN_1800430f0();
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = plVar1[1];
    if (lVar2 != 0) {
      FUN_1800a2ea0();
      lVar3 = lVar2 * 0x21 + 0x31;
      if (lVar3 != 0) {
        thunk_FUN_1801d3330(*plVar1 + lVar2 * -0x20 + -0x20,lVar3,0x10);
      }
    }
    thunk_FUN_1801d3330(plVar1,0x20,8);
  }
  FUN_18003b8d0(param_1 + 0x1c);
  return;
}


