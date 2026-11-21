/* FUN_1801dd430 @ 1801dd430 */

void FUN_1801dd430(void)

{
  code *pcVar1;
  
  FUN_1801dfc30();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


