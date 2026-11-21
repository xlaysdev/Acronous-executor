/* FUN_180051a90 @ 180051a90 */

void FUN_180051a90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  FUN_1800430f0();
  plVar2 = *(longlong **)(param_1 + 0x60);
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  lVar1 = plVar2[1];
  if (lVar1 != 0) {
    FUN_1800a2ea0();
    lVar3 = lVar1 * 0x21 + 0x31;
    if (lVar3 != 0) {
      thunk_FUN_1801d3330(*plVar2 + lVar1 * -0x20 + -0x20,lVar3,0x10,param_4,plVar2,uVar4);
    }
  }
  thunk_FUN_1801d3330(plVar2,0x20,8);
  return;
}


