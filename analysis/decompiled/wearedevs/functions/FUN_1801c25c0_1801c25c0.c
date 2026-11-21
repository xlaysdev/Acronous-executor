/* FUN_1801c25c0 @ 1801c25c0 */

void FUN_1801c25c0(void)

{
  code *pcVar1;
  
  FUN_1801d73e0("Rayon: detected unexpected panic; aborting\n",0x57);
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(7);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


