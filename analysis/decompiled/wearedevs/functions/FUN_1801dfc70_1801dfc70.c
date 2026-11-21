/* FUN_1801dfc70 @ 1801dfc70 */

void FUN_1801dfc70(void)

{
  code *pcVar1;
  
  FUN_1801e10c0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


