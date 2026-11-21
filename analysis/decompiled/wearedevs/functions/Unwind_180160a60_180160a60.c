/* Unwind@180160a60 @ 180160a60 */

void Unwind_180160a60(void)

{
  code *pcVar1;
  
  FUN_180160a80();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


