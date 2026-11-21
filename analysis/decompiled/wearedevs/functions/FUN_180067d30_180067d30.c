/* FUN_180067d30 @ 180067d30 */

void FUN_180067d30(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  if (*(char *)((longlong)param_1 + 0x19) != '\x02') {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)param_1[1];
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(lVar1);
      }
      if (puVar2[1] != 0) {
        thunk_FUN_1801d3330(lVar1,puVar2[1],puVar2[2]);
      }
    }
    plVar3 = (longlong *)param_1[2];
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_1801029b0(param_1 + 2);
      return;
    }
  }
  return;
}


