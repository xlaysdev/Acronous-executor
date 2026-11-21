/* FUN_1801102e0 @ 1801102e0 */

void FUN_1801102e0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_40;
  undefined4 *local_30;
  undefined1 local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_180177d50();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_21 = 1;
    local_48 = FUN_18016c5d0(*(undefined8 *)(param_1 + 0x30));
    local_30 = (undefined4 *)(local_40 + 0x38);
    FUN_18010f230();
    local_30[8] = local_58;
    local_30[9] = uStack_54;
    local_30[10] = uStack_50;
    local_30[0xb] = uStack_4c;
    local_30[4] = local_68;
    local_30[5] = uStack_64;
    local_30[6] = uStack_60;
    local_30[7] = uStack_5c;
    *local_30 = 2;
    local_30[1] = uStack_74;
    local_30[2] = uStack_70;
    local_30[3] = uStack_6c;
    local_21 = 0;
    FUN_1801783b0(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_180177b70(param_1 + 0x68);
    uVar3 = FUN_180177e60(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_180177af0(param_1 + 0x68,0);
    }
  }
  lVar1 = local_40;
  cVar2 = FUN_180177df0(local_40,1);
  if (cVar2 != '\0') {
    FUN_180102b60(lVar1);
  }
  return;
}


