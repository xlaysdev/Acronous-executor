/* FUN_1801137a0 @ 1801137a0 */

void FUN_1801137a0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_1 != (longlong *)0x0) {
    do {
      plVar1 = (longlong *)*param_1;
      plVar2 = (longlong *)param_1[1];
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          FUN_18003cd00(param_1 + 1);
        }
      }
      thunk_FUN_1801d3330(param_1,0x10,8);
      param_1 = plVar1;
    } while (plVar1 != (longlong *)0x0);
  }
  return;
}


