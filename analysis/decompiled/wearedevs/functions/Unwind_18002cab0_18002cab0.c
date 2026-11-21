/* Unwind@18002cab0 @ 18002cab0 */

void Unwind_18002cab0(void)

{
  code *pcVar1;
  
  FUN_18002cee0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


