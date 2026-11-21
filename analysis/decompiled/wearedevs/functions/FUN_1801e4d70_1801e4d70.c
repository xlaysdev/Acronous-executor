/* FUN_1801e4d70 @ 1801e4d70 */

void FUN_1801e4d70(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar1 = (longlong *)*param_1;
  *param_1 = 0;
  while( true ) {
    if (plVar1 == (longlong *)0x0) {
      return;
    }
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) break;
    lVar2 = plVar1[2];
    puVar3 = (undefined8 *)plVar1[3];
    plVar4 = (longlong *)plVar1[4];
    if (plVar1 != (longlong *)0xffffffffffffffff) {
      LOCK();
      plVar5 = plVar1 + 1;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        thunk_FUN_1801d3330(plVar1,0x28,8);
      }
    }
    if (lVar2 == 0) {
      return;
    }
    plVar5 = plVar4;
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)(lVar2);
    }
    plVar1 = plVar4;
    if (puVar3[1] != 0) {
      thunk_FUN_1801d3330(lVar2,puVar3[1],puVar3[2],param_4,plVar5);
    }
  }
  return;
}


