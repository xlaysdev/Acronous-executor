/* FUN_18003c630 @ 18003c630 */

void FUN_18003c630(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_18000b470();
  plVar1 = *(longlong **)(param_1 + 0x60);
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
  FUN_18003b8d0(param_1 + 0x70);
  return;
}


