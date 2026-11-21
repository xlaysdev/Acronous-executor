/* FUN_18007c680 @ 18007c680 */

void FUN_18007c680(void)

{
  code *pcVar1;
  undefined4 local_10;
  undefined1 local_c;
  undefined8 local_8;
  
  local_10 = 0;
  local_c = 0;
  local_8 = thunk_FUN_1800ae470(&local_10,
                                "fatal runtime error: thread local panicked on drop, aborting\n",
                                0x7b);
  FUN_18007c4a0(&local_8);
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(7);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


