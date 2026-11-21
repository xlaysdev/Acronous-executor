/* FUN_180201e9b @ 180201e9b */

void FUN_180201e9b(void)

{
  code *pcVar1;
  
  FUN_180201ce0(&DAT_18029450c,0x26);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


