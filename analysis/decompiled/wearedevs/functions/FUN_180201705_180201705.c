/* FUN_180201705 @ 180201705 */

void FUN_180201705(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  
  FUN_1801d36c0(param_2,param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


