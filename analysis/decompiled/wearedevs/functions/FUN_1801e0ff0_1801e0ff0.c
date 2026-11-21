/* FUN_1801e0ff0 @ 1801e0ff0 */

void FUN_1801e0ff0(longlong *param_1)

{
  code *pcVar1;
  undefined8 local_30;
  ulonglong local_28;
  longlong *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = ((undefined8 *)*param_1)[1];
  if ((local_28 & 1) == 0) {
    local_30 = 0x8000000000000000;
    local_18 = param_1;
    FUN_1801e1204(&local_30,&PTR_FUN_1802907f8,param_1[1],*(undefined1 *)(param_1[2] + 0x10),
                  *(undefined1 *)(param_1[2] + 0x11));
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_30 = *(undefined8 *)*param_1;
  local_28 = local_28 >> 1;
  FUN_1801e1204(&local_30,&DAT_180290830,param_1[1],*(undefined1 *)(param_1[2] + 0x10),
                *(undefined1 *)(param_1[2] + 0x11));
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


