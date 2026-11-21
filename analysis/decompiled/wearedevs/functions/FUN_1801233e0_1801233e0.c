/* FUN_1801233e0 @ 1801233e0 */

void FUN_1801233e0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined *puVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  char *pcVar8;
  bool bVar9;
  char **local_58;
  undefined1 *local_50;
  char *local_48;
  undefined1 local_40;
  char *local_38;
  uint local_2c;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  if (lVar1 != 0) {
    pcVar8 = (char *)(lVar1 + 0x10);
    LOCK();
    bVar9 = *(char *)(lVar1 + 0x10) == '\0';
    if (bVar9) {
      *(char *)(lVar1 + 0x10) = '\x01';
    }
    UNLOCK();
    if (!bVar9) {
      FUN_180200390(pcVar8);
    }
    puVar2 = PTR_DAT_1802fd600;
    if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
      cVar4 = *(char *)(lVar1 + 0x11);
      uVar3 = local_2c;
      local_2c = 0;
    }
    else {
      uVar5 = FUN_180200a50();
      cVar4 = *(char *)(lVar1 + 0x11);
      uVar3 = local_2c;
      local_2c = uVar5 ^ 1;
    }
    if (cVar4 != '\0') {
      local_40 = (undefined1)local_2c;
      local_58 = &local_48;
      local_50 = &LAB_180118f90;
      local_48 = pcVar8;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_180241e10,&local_58,&PTR_s_C__Users_burne__cargo_registry_s_180242228);
    }
    uVar5 = local_2c;
    if (*(int *)(lVar1 + 0x50) != 1000000000) {
      local_38 = pcVar8;
      if (*(longlong *)(lVar1 + 0x60) == 0) {
        uVar6 = FUN_1801df8c0();
      }
      else {
        lVar7 = *(longlong *)(lVar1 + 0x68);
        uVar6 = (**(code **)(lVar7 + 0x28))
                          ((*(longlong *)(lVar7 + 0x10) - 1U & 0xfffffffffffffff0) +
                           *(longlong *)(lVar1 + 0x60) + 0x10);
        param_2 = (undefined4)lVar7;
      }
      *(undefined8 *)(lVar1 + 0x48) = uVar6;
      *(undefined4 *)(lVar1 + 0x50) = param_2;
      pcVar8 = local_38;
      uVar3 = local_2c;
      uVar5 = local_2c;
    }
    local_2c = uVar3;
    if ((((char)uVar5 == '\0') && ((*(ulonglong *)puVar2 & 0x7fffffffffffffff) != 0)) &&
       (cVar4 = FUN_180200a50(), cVar4 == '\0')) {
      *(undefined1 *)(lVar1 + 0x11) = 1;
    }
    LOCK();
    cVar4 = *pcVar8;
    *pcVar8 = '\0';
    UNLOCK();
    if (cVar4 == '\x02') {
      WakeByAddressSingle(pcVar8);
      return;
    }
  }
  return;
}


