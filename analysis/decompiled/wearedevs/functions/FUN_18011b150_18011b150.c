/* FUN_18011b150 @ 18011b150 */

void FUN_18011b150(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  bool bVar3;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38 [3];
  ulonglong local_20;
  int local_18 [2];
  ulonglong local_10;
  longlong local_8;
  
  local_38[0] = 0;
  local_38[1] = 0;
  local_48 = 0;
  uStack_40 = 0x45;
  uStack_3c = 0;
  FUN_18012aef0(local_18,param_1,&local_48);
  if (local_18[0] == 1) {
    if (*(ulonglong *)(local_8 + 0x28) <= local_10) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(local_10,*(ulonglong *)(local_8 + 0x28),
                    &PTR_s_C__Users_burne__cargo_registry_s_180242e08);
    }
    uVar1 = *(ulonglong *)(local_8 + 0x20);
    bVar3 = (*(byte *)(uVar1 + local_10 * 0x68) & 1) == 0;
    if (!bVar3) {
      uVar1 = *(ulonglong *)(uVar1 + local_10 * 0x68 + 0x10);
    }
    local_38[0] = (ulonglong)!bVar3;
    puVar2 = local_38 + 1;
    local_20 = local_10;
    local_48 = 0;
  }
  else {
    puVar2 = local_38;
    local_20 = 0xffffffffffffffff;
    local_48 = 2;
    uVar1 = 2;
  }
  *puVar2 = uVar1;
  FUN_180119d90(&local_48);
  return;
}


