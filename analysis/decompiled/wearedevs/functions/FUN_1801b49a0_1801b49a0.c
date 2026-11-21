/* FUN_1801b49a0 @ 1801b49a0 */

undefined8 * FUN_1801b49a0(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (param_2[2] == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if (*param_2 != 0) {
      thunk_FUN_1801d3330(param_2[1],*param_2 * 0x158,8);
    }
  }
  else {
    FUN_180027490();
    plVar2 = (longlong *)thunk_FUN_1801d32d0(0x28,8);
    if (plVar2 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x28);
    }
    plVar2[2] = param_2[2];
    lVar1 = param_2[1];
    *plVar2 = *param_2;
    plVar2[1] = lVar1;
    plVar2[3] = 0;
    plVar2[4] = 0;
    *param_1 = plVar2;
    param_1[1] = plVar2;
    param_1[2] = 1;
  }
  return param_1;
}


