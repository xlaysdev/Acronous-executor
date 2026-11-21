/* Unwind@1801e0610 @ 1801e0610 */

void Unwind_1801e0610(void)

{
  code *pcVar1;
  
  FUN_1801e2640();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


