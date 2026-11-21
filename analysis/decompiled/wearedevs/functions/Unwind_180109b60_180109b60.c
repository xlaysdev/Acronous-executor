/* Unwind@180109b60 @ 180109b60 */

void Unwind_180109b60(void)

{
  code *pcVar1;
  
  FUN_180109cf0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


