/* FUN_1800396d0 @ 1800396d0 */

void FUN_1800396d0(void)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lStack_40;
  uint7 uStack_37;
  longlong local_28;
  uint7 uStack_1f;
  uint6 uStack_16;
  
  FUN_180027490();
  plVar3 = (longlong *)thunk_FUN_1801d32d0(0x48,8);
  if (plVar3 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x48);
  }
  plVar3[8] = (ulonglong)uStack_16 << 0x10;
  plVar3[6] = local_28;
  plVar3[7] = (ulonglong)uStack_1f << 8;
  plVar3[4] = (ulonglong)uStack_37 << 8;
  plVar3[5] = 0;
  plVar3[2] = 0;
  plVar3[3] = lStack_40;
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
  return;
}


