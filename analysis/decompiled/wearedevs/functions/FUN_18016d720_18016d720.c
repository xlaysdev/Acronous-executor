/* FUN_18016d720 @ 18016d720 */

void FUN_18016d720(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 local_8;
  undefined1 local_4;
  
  local_8 = 0;
  local_4 = 0;
  uVar2 = thunk_FUN_18016cde0(&local_8,
                              "fatal runtime error: thread local panicked on drop, aborting\nC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.53.1\\src\\net\\tcp\\stream.rs"
                              ,0x7b);
  FUN_18002ce10(uVar2);
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(7);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


