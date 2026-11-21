/* FUN_1801e2640 @ 1801e2640 */

void FUN_1801e2640(void)

{
  code *pcVar1;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  local_10 = 0;
  local_c = 0;
  local_18 = FUN_1801d62f0(&local_10,&DAT_18029118d,0xb7);
  FUN_1801e2b90(&local_18);
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(7);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


