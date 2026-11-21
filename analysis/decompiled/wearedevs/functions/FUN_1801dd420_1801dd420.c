/* FUN_1801dd420 @ 1801dd420 */

void FUN_1801dd420(void)

{
  code *pcVar1;
  
  FUN_1801e0c70();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


