/* FUN_18017bb10 @ 18017bb10 */

void FUN_18017bb10(void)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  FUN_180027490();
  plVar3 = (longlong *)thunk_FUN_1801d32d0(0x40,8);
  if (plVar3 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x40);
  }
  *plVar3 = 1;
  plVar3[1] = 1;
  plVar3[6] = 0;
  *(undefined1 *)(plVar3 + 7) = 0;
  LOCK();
  lVar1 = *plVar3;
  *plVar3 = *plVar3 + 1;
  UNLOCK();
  if (*plVar3 == 0 || SCARRY8(lVar1,1) != *plVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  FUN_180027490();
  puVar4 = (undefined8 *)thunk_FUN_1801d32d0(0x18,8);
  if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x18);
  }
  puVar4[2] = plVar3;
  *puVar4 = 1;
  puVar4[1] = 1;
  return;
}


