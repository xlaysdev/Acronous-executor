/* FUN_1800976f0 @ 1800976f0 */

void FUN_1800976f0(int *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*param_1 == 2) {
    return;
  }
  FUN_18013c270();
  plVar1 = *(longlong **)(param_1 + 6);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18013bc70();
  }
  FUN_1800755d0(param_1 + 0xc);
  if (*(longlong *)(param_1 + 0x12) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x14);
    puVar3 = *(undefined8 **)(param_1 + 0x16);
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)(uVar2);
    }
    if (puVar3[1] != 0) {
      thunk_FUN_1801d3330(uVar2,puVar3[1],puVar3[2]);
      FUN_1800991d0(param_1);
      return;
    }
  }
  else {
    (**(code **)(*(longlong *)(param_1 + 0x12) + 0x20))
              (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x14),
               *(undefined8 *)(param_1 + 0x16));
  }
  FUN_1800991d0(param_1);
  return;
}


