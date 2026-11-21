/* FUN_1801d3270 @ 1801d3270 */

void FUN_1801d3270(void)

{
  code *pcVar1;
  undefined4 *local_30;
  code *local_28;
  undefined8 local_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  local_14 = FUN_1801e67f0();
  local_10 = 0;
  local_c = 0;
  local_30 = &local_14;
  local_28 = FUN_1801ee6c0;
  local_20 = FUN_1801d62f0(&local_10,&DAT_18028e870,&local_30);
  FUN_1801e2b90(&local_20);
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(7);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


