/* FUN_180128990 @ 180128990 */

void FUN_180128990(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
  while (plVar3 != (longlong *)0x0) {
    plVar1 = (longlong *)plVar3[5];
    if (*plVar3 != 0) {
      FUN_180044a30(plVar3 + 1);
    }
    thunk_FUN_1801d3330(plVar3,0x30,8);
    plVar3 = plVar1;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x28);
  while (puVar4 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar4;
    plVar3 = (longlong *)puVar4[1];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        FUN_18003cd00(puVar4 + 1);
      }
    }
    thunk_FUN_1801d3330(puVar4,0x10,8);
    puVar4 = puVar2;
  }
  if (*(longlong *)(param_1 + 0x48) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000180128a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x48) + 0x18))(*(undefined8 *)(param_1 + 0x50));
  return;
}


