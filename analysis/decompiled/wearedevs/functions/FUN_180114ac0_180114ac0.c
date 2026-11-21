/* FUN_180114ac0 @ 180114ac0 */

void FUN_180114ac0(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
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
  return;
}


