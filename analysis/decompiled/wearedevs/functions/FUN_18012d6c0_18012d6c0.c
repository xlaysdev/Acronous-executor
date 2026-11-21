/* FUN_18012d6c0 @ 18012d6c0 */

longlong * FUN_18012d6c0(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lStack_40;
  longlong lStack_28;
  
  if (*param_1 != 0) {
    return (longlong *)0x0;
  }
  FUN_180027490();
  plVar3 = (longlong *)thunk_FUN_1801d32d0(0x48,8);
  if (plVar3 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x48);
  }
  plVar3[8] = 0;
  plVar3[6] = 0;
  plVar3[7] = lStack_28;
  plVar3[4] = lStack_40;
  plVar3[5] = 0;
  plVar3[2] = 0;
  plVar3[3] = 0;
  *plVar3 = 1;
  plVar3[1] = 1;
  LOCK();
  lVar1 = *plVar3;
  *plVar3 = *plVar3 + 1;
  UNLOCK();
  if (*plVar3 == 0 || SCARRY8(lVar1,1) != *plVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  *param_1 = (longlong)plVar3;
  return plVar3;
}


