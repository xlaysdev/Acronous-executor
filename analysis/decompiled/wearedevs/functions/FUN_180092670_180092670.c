/* FUN_180092670 @ 180092670 */

void FUN_180092670(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  longlong local_48;
  undefined4 *local_38;
  undefined1 local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_180177ec0();
  if ((param_2 & 1) != 0) {
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_18016c5d0(*(undefined8 *)(param_1 + 0x28));
    local_38 = (undefined4 *)(local_48 + 0x30);
    FUN_18003ad30();
    local_38[4] = local_60;
    local_38[5] = uStack_5c;
    local_38[6] = uStack_58;
    local_38[7] = uStack_54;
    *local_38 = 2;
    local_38[1] = uStack_6c;
    local_38[2] = uStack_68;
    local_38[3] = uStack_64;
    local_2a = 0;
    FUN_1801783b0(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_180177af0(param_1 + 0x50,0);
  }
  cVar2 = FUN_180177f20(param_1);
  if (cVar2 != '\0') {
    FUN_180091ba0(param_1);
  }
  return;
}


