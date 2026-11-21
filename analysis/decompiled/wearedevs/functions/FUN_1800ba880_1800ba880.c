/* FUN_1800ba880 @ 1800ba880 */

void FUN_1800ba880(SOCKET param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  if (param_1 == 0xffffffffffffffff) {
    return;
  }
  if (param_2 != (undefined8 *)0x0) {
    FUN_1801886d0(param_2);
    plVar1 = (longlong *)*param_2;
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_180187950(param_2);
    }
    plVar1 = (longlong *)param_2[1];
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_180187b30(param_2 + 1);
    }
    thunk_FUN_1801d3330(param_2,0x20,8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001800ba8fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  closesocket(param_1);
  return;
}


