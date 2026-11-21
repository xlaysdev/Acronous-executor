/* Unwind@1800754f0 @ 1800754f0 */

void Unwind_1800754f0(void)

{
  code *pcVar1;
  
  FUN_18007c680();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


