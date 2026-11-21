/* FUN_1802018f0 @ 1802018f0 */

void FUN_1802018f0(void)

{
  code *pcVar1;
  
  FUN_180201900();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


