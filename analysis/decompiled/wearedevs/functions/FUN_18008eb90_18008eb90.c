/* FUN_18008eb90 @ 18008eb90 */

void FUN_18008eb90(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  FUN_1800430f0();
  plVar1 = *(longlong **)(param_1 + 0x60);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = plVar1[1];
    if (lVar2 != 0) {
      FUN_1800a2ea0();
      lVar5 = lVar2 * 0x21 + 0x31;
      if (lVar5 != 0) {
        thunk_FUN_1801d3330(*plVar1 + lVar2 * -0x20 + -0x20,lVar5,0x10);
      }
    }
    thunk_FUN_1801d3330(plVar1,0x20,8);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  puVar4 = *(undefined8 **)(param_1 + 0x78);
  if ((code *)*puVar4 != (code *)0x0) {
    (*(code *)*puVar4)(uVar3);
  }
  if (puVar4[1] == 0) {
    return;
  }
  thunk_FUN_1801d3330(uVar3,puVar4[1],puVar4[2]);
  return;
}


