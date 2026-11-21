/* FUN_180124e90 @ 180124e90 */

void FUN_180124e90(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  char local_18;
  undefined3 local_17;
  undefined1 uStack_14;
  undefined3 uStack_13;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_18 = *(char *)(param_1 + 8);
  *(undefined1 *)(param_1 + 8) = 3;
  if (local_18 != '\x03') {
    local_38 = *param_1;
    uStack_34 = param_1[1];
    uStack_30 = param_1[2];
    uStack_2c = param_1[3];
    local_28 = param_1[4];
    uStack_24 = param_1[5];
    uStack_20 = param_1[6];
    uStack_1c = param_1[7];
    local_17 = (undefined3)*(undefined4 *)((longlong)param_1 + 0x21);
    uStack_14 = (undefined1)param_1[9];
    uStack_13 = (undefined3)((uint)param_1[9] >> 8);
    FUN_180027490();
    puVar1 = (undefined8 *)thunk_FUN_1801d32d0(0x18,8);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x18);
    }
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 2) = 2;
    FUN_180123ef0(&local_38,puVar1);
    FUN_180123a90(&local_38);
  }
  return;
}


