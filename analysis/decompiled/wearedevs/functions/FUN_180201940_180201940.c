/* FUN_180201940 @ 180201940 */

void FUN_180201940(void)

{
  code *pcVar1;
  
  FUN_180201950();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


