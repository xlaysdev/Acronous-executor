/* FUN_180201990 @ 180201990 */

void FUN_180201990(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  
  FUN_1802019b0(param_2,param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


