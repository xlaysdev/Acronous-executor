/* FUN_18012bf50 @ 18012bf50 */

void FUN_18012bf50(void)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  
  FUN_180027490();
  plVar3 = (longlong *)thunk_FUN_1801d32d0(0x30,8);
  if (plVar3 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x30);
  }
  *plVar3 = 1;
  plVar3[1] = 1;
  *(undefined1 *)(plVar3 + 5) = 0;
  plVar3[2] = 0;
  plVar3[3] = 0;
  LOCK();
  lVar1 = *plVar3;
  *plVar3 = *plVar3 + 1;
  UNLOCK();
  if (*plVar3 == 0 || SCARRY8(lVar1,1) != *plVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  return;
}


