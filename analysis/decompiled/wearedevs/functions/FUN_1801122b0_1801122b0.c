/* FUN_1801122b0 @ 1801122b0 */

undefined1 * FUN_1801122b0(undefined1 *param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined1 uVar2;
  undefined8 local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined *local_70;
  char local_62;
  uint5 local_61;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_30 = 0;
  local_88 = 1;
  local_80 = &DAT_18023ef78;
  local_78 = 1;
  local_70 = &DAT_18023efa0;
  local_40 = param_2;
  local_38 = param_3;
  uVar1 = FUN_180112560(&local_40);
  if ((uVar1 & 1) == 0) {
    local_30 = 0;
    FUN_180112710(&local_62,&local_40);
    if (local_62 != '\x01') {
      local_30 = 0;
      FUN_180112470(&local_88);
      goto LAB_1801123a5;
    }
    uVar1 = (ulonglong)local_61;
    local_50 = local_5c;
    local_48 = local_54;
    uVar2 = 1;
  }
  else {
    uVar1 = (uVar1 & 0xffffffffff00) >> 8;
    uVar2 = 0;
  }
  FUN_180112470(&local_88);
  if (local_30 == local_38) {
    *param_1 = uVar2;
    *(int *)(param_1 + 1) = (int)uVar1;
    param_1[5] = (char)(uVar1 >> 0x20);
    *(undefined8 *)(param_1 + 6) = local_50;
    *(undefined4 *)(param_1 + 0xe) = local_48;
    return param_1;
  }
LAB_1801123a5:
  *param_1 = 2;
  return param_1;
}


