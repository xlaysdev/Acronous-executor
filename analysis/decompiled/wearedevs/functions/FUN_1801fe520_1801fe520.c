/* FUN_1801fe520 @ 1801fe520 */

void FUN_1801fe520(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  
  if (*(longlong *)(param_2 + 8) != 3) {
    FUN_1801fe2e0(param_1,param_2 + 8);
  }
  FUN_1801c22b0(param_3,param_4);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


