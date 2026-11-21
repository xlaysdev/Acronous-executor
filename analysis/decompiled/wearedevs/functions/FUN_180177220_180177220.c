/* FUN_180177220 @ 180177220 */

void FUN_180177220(ulonglong *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  
  LOCK();
  uVar1 = *param_1;
  *param_1 = *param_1 - 2;
  UNLOCK();
  if (uVar1 < 2) {
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(7);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  return;
}


