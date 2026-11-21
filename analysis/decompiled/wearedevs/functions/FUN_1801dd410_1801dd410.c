/* FUN_1801dd410 @ 1801dd410 */

void FUN_1801dd410(void)

{
  code *pcVar1;
  
  FUN_1801e0ff0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


