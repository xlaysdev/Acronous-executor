/* FUN_18016f900 @ 18016f900 */

void FUN_18016f900(char *param_1)

{
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  char *local_40;
  byte local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  LOCK();
  cVar2 = *param_1;
  if (cVar2 == '\0') {
    *param_1 = '\x01';
  }
  UNLOCK();
  if (cVar2 != '\0') {
    FUN_180200390();
  }
  puVar1 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_38 = 0;
    cVar2 = param_1[1];
  }
  else {
    local_38 = FUN_180200a50();
    local_38 = local_38 ^ 1;
    cVar2 = param_1[1];
  }
  if (cVar2 != '\0') {
    local_40 = param_1;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("RNG seed generator is internally corrupt",0x28,&local_40,&PTR_FUN_180261f58,
                  &PTR_s_C__Users_burne__cargo_registry_s_180262008);
  }
  uVar4 = *(uint *)(param_1 + 8);
  uVar3 = *(uint *)(param_1 + 4) << 0x11 ^ *(uint *)(param_1 + 4);
  uVar3 = uVar3 >> 7 ^ uVar4 >> 0x10 ^ uVar4 ^ uVar3;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  *(uint *)(param_1 + 4) = uVar3;
  *(uint *)(param_1 + 8) = uVar4 >> 7 ^ uVar4 ^ uVar3 ^ uVar3 >> 0x10;
  if (((local_38 == 0) && ((*(ulonglong *)puVar1 & 0x7fffffffffffffff) != 0)) &&
     (cVar2 = FUN_180200a50(), cVar2 == '\0')) {
    param_1[1] = '\x01';
  }
  LOCK();
  cVar2 = *param_1;
  *param_1 = '\0';
  UNLOCK();
  if (cVar2 == '\x02') {
    WakeByAddressSingle();
  }
  return;
}


