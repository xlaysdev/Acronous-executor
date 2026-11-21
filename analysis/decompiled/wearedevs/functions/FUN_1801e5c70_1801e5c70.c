/* FUN_1801e5c70 @ 1801e5c70 */

void FUN_1801e5c70(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  *param_1 = 0;
  if (lVar1 == 0) {
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(7);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  FUN_180027490();
  plVar4 = (longlong *)thunk_FUN_1801d32d0(0x10,8);
  if (plVar4 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x10);
  }
  *plVar4 = lVar1;
  plVar4[1] = lVar2;
  return;
}


