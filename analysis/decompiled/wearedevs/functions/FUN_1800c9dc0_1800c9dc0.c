/* FUN_1800c9dc0 @ 1800c9dc0 */

longlong * FUN_1800c9dc0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  
  LOCK();
  bVar6 = *(longlong *)*param_1 == 1;
  if (bVar6) {
    *(longlong *)*param_1 = 0;
  }
  UNLOCK();
  plVar2 = (longlong *)*param_1;
  if (bVar6) {
    if (plVar2[1] == 1) {
      *plVar2 = 1;
      plVar4 = plVar2;
    }
    else {
      plVar1 = plVar2 + 1;
      lVar5 = 0x88;
      plVar3 = (longlong *)FUN_1801ec950(8);
      plVar4 = plVar3;
      if (lVar5 != 0) {
        FUN_180027490();
        plVar4 = (longlong *)thunk_FUN_1801d32d0(lVar5,plVar3);
      }
      if (plVar4 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201705(plVar3,lVar5);
      }
      *plVar4 = 1;
      plVar4[1] = 1;
      memcpy(plVar4 + 2,plVar2 + 2,0x88);
      *param_1 = plVar4;
      if (plVar2 != (longlong *)0xffffffffffffffff) {
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          thunk_FUN_1801d3330(plVar2,0x98,8);
        }
      }
    }
  }
  else {
    plVar4 = (longlong *)FUN_18003cad0(plVar2 + 2);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_1800f5960(param_1);
    }
    *param_1 = plVar4;
  }
  return plVar4 + 2;
}


