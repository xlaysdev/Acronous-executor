/* FUN_1802018d0 @ 1802018d0 */

void FUN_1802018d0(void)

{
  code *pcVar1;
  
  FUN_1801f1b60();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


