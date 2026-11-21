/* FUN_18017ddf0 @ 18017ddf0 */

void FUN_18017ddf0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 local_8;
  undefined1 local_4;
  
  local_8 = 0;
  local_4 = 0;
  uVar2 = thunk_FUN_18016cde0(&local_8,
                              "fatal runtime error: thread local panicked on drop, aborting\n",0x7b)
  ;
  FUN_18002ce10(uVar2);
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(7);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


