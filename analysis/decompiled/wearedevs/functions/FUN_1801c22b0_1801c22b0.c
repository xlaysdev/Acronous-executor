/* FUN_1801c22b0 @ 1801c22b0 */

void FUN_1801c22b0(void)

{
  code *pcVar1;
  
  FUN_1801dfc70();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


