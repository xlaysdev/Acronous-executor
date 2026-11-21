/* FUN_18009f490 @ 18009f490 */

void FUN_18009f490(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_1 != 0) {
    plVar3 = (longlong *)(param_2 + -8);
    lVar4 = 0;
    do {
      if (-1 < *(char *)(param_2 + lVar4)) {
        lVar1 = plVar3[-1];
        puVar2 = (undefined8 *)*plVar3;
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)(lVar1);
        }
        if (puVar2[1] != 0) {
          thunk_FUN_1801d3330(lVar1,puVar2[1],puVar2[2]);
        }
      }
      lVar4 = lVar4 + 1;
      plVar3 = plVar3 + -4;
    } while (param_1 != lVar4);
  }
  return;
}


