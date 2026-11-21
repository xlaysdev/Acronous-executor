/* FUN_1800936b0 @ 1800936b0 */

void FUN_1800936b0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
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
    local_48 = FUN_18016c5d0(*(undefined8 *)(param_1 + 0x28));
    local_30 = (undefined4 *)(local_40 + 0x30);
    FUN_18003ad30();
    local_30[4] = local_60;
    local_30[5] = uStack_5c;
    local_30[6] = uStack_58;
    local_30[7] = uStack_54;
    *local_30 = 2;
    local_30[1] = uStack_6c;
    local_30[2] = uStack_68;
    local_30[3] = uStack_64;
    local_21 = 0;
    FUN_1801783b0(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_180177b70(param_1 + 0x50);
    uVar3 = FUN_180177e60(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_180177af0(param_1 + 0x50,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_180164f80(local_40 + 0x20,&local_50);
  cVar2 = FUN_180177df0(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180091d00(lVar1);
  }
  return;
}


