/* FUN_18017dc10 @ 18017dc10 */

void FUN_18017dc10(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  plVar1 = (longlong *)*param_1;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1801e3970(param_1);
  }
  uVar2 = param_1[1];
  puVar3 = (undefined8 *)param_1[2];
  if ((code *)*puVar3 != (code *)0x0) {
    (*(code *)*puVar3)(uVar2);
  }
  if (puVar3[1] == 0) {
    return;
  }
  thunk_FUN_1801d3330(uVar2,puVar3[1],puVar3[2]);
  return;
}


