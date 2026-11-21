/* FUN_1800a5b30 @ 1800a5b30 */

void FUN_1800a5b30(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  while (puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar3;
    if (puVar3[2] != 0 && puVar3[1] != 0) {
      thunk_FUN_1801d3330(puVar3[1],puVar3[2],1);
    }
    thunk_FUN_1801d3330(puVar3,0x20,8);
    puVar3 = puVar1;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x28);
  while (puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar3;
    plVar2 = (longlong *)puVar3[1];
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_18003cd00(puVar3 + 1);
      }
    }
    thunk_FUN_1801d3330(puVar3,0x10,8);
    puVar3 = puVar1;
  }
  if (*(longlong *)(param_1 + 0x48) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001800a5c0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x48) + 0x18))(*(undefined8 *)(param_1 + 0x50));
  return;
}


