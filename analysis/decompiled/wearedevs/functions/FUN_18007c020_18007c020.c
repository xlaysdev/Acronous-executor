/* FUN_18007c020 @ 18007c020 */

void FUN_18007c020(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
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
  puVar4 = (undefined8 *)(param_1 + 0x70);
  FUN_18013bd90(puVar4);
  FUN_18013c270(puVar4);
  plVar1 = (longlong *)*puVar4;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18013bc70();
    return;
  }
  return;
}


