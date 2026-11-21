/* FUN_1801d36c0 @ 1801d36c0 */

void FUN_1801d36c0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  
  FUN_1801dfc10(param_2,param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


