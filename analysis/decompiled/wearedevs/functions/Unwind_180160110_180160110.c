/* Unwind@180160110 @ 180160110 */

void Unwind_180160110(void)

{
  code *pcVar1;
  
  FUN_180160130();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


