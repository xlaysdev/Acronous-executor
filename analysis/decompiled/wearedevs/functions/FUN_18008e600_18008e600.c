/* FUN_18008e600 @ 18008e600 */

void FUN_18008e600(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18008f930(&local_68,param_1);
  FUN_180027490();
  puVar1 = (undefined8 *)thunk_FUN_1801d32d0(0x58,8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x58);
  }
  puVar1[10] = local_18;
  puVar1[8] = local_28;
  puVar1[9] = uStack_20;
  puVar1[6] = local_38;
  puVar1[7] = uStack_30;
  puVar1[4] = local_48;
  puVar1[5] = uStack_40;
  puVar1[2] = local_58;
  puVar1[3] = uStack_50;
  *puVar1 = local_68;
  puVar1[1] = uStack_60;
  return;
}


