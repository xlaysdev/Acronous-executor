/* FUN_1801e2ba0 @ 1801e2ba0 */

void FUN_1801e2ba0(void)

{
  code *pcVar1;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  local_10 = 0;
  local_c = 0;
  local_18 = FUN_1801d62f0(&local_10,
                           "fatal runtime error: thread local panicked on drop, aborting\n",0x7b);
  FUN_1801e2b90(&local_18);
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(7);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


