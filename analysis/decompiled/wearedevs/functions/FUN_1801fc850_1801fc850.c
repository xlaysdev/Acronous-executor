/* FUN_1801fc850 @ 1801fc850 */

void FUN_1801fc850(undefined8 *param_1,longlong *param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  
  FUN_180027490();
  plVar3 = (longlong *)thunk_FUN_1801d32d0(0x18,8);
  if (plVar3 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x18);
  }
  *plVar3 = param_4;
  plVar3[1] = (param_5 - param_4) + param_6;
  plVar3[2] = 2;
  LOCK();
  lVar2 = *param_2;
  bVar4 = param_3 == lVar2;
  if (bVar4) {
    *param_2 = (longlong)plVar3;
  }
  else {
    param_3 = lVar2;
  }
  UNLOCK();
  if (bVar4) {
    param_1[1] = param_5;
    param_1[2] = param_6;
    param_1[3] = plVar3;
    *param_1 = &PTR_FUN_180285b78;
    return;
  }
  LOCK();
  plVar1 = (longlong *)(param_3 + 0x10);
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + 1;
  UNLOCK();
  if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1801fca10();
  }
  param_1[1] = param_5;
  param_1[2] = param_6;
  param_1[3] = param_3;
  *param_1 = &PTR_FUN_180285b78;
  thunk_FUN_1801d3330(plVar3,0x18,8);
  return;
}


