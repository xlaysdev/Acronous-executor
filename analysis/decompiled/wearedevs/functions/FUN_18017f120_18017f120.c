/* FUN_18017f120 @ 18017f120 */

void FUN_18017f120(void)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  
  FUN_180027490();
  lVar2 = thunk_FUN_1801d32d0(0x800,8);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(8,0x800);
  }
  FUN_180027490();
  plVar3 = (longlong *)thunk_FUN_1801d32d0(0x28,8);
  if (plVar3 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x28);
  }
  *plVar3 = 1;
  plVar3[1] = 1;
  plVar3[2] = lVar2;
  plVar3[3] = 0;
  *(undefined4 *)(plVar3 + 4) = 0;
  LOCK();
  lVar2 = *plVar3;
  *plVar3 = *plVar3 + 1;
  UNLOCK();
  if (*plVar3 == 0 || SCARRY8(lVar2,1) != *plVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  return;
}


