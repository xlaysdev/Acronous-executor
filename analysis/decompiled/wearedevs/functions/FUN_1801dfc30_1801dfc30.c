/* FUN_1801dfc30 @ 1801dfc30 */

void FUN_1801dfc30(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = FUN_1801dfa30;
  if (DAT_1802fd810 != (code *)0x0) {
    pcVar1 = DAT_1802fd810;
  }
  (*pcVar1)(*param_1,param_1[1]);
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(7);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


