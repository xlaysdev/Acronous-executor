/* FUN_180123180 @ 180123180 */

void FUN_180123180(longlong *param_1,longlong param_2)

{
  char *pcVar1;
  longlong lVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  char **local_70;
  undefined1 *local_68;
  char *local_48;
  undefined1 local_40;
  char *local_38;
  uint local_2c;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return;
  }
  pcVar1 = (char *)(lVar2 + 0x10);
  LOCK();
  bVar10 = *(char *)(lVar2 + 0x10) == '\0';
  if (bVar10) {
    *(char *)(lVar2 + 0x10) = '\x01';
  }
  UNLOCK();
  lVar9 = param_2;
  if (!bVar10) {
    FUN_180200390(pcVar1);
  }
  puVar3 = PTR_DAT_1802fd600;
  uVar7 = (uint)lVar9;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_2c = 0;
    cVar4 = *(char *)(lVar2 + 0x11);
    local_48 = pcVar1;
  }
  else {
    local_38 = pcVar1;
    local_2c = FUN_180200a50();
    local_2c = local_2c ^ 1;
    cVar4 = *(char *)(lVar2 + 0x11);
    local_48 = local_38;
  }
  local_38 = local_48;
  if (cVar4 != '\0') {
    local_40 = (undefined1)local_2c;
    local_70 = &local_48;
    local_68 = &LAB_180118f90;
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0(&DAT_180241e10,&local_70,&PTR_s_C__Users_burne__cargo_registry_s_180242210);
  }
  if (*(int *)(lVar2 + 0x50) != 1000000000) {
    if (*(longlong *)(lVar2 + 0x60) == 0) {
      uVar5 = FUN_1801df8c0();
    }
    else {
      lVar9 = *(longlong *)(lVar2 + 0x68);
      uVar5 = (**(code **)(lVar9 + 0x28))
                        ((*(longlong *)(lVar9 + 0x10) - 1U & 0xfffffffffffffff0) +
                         *(longlong *)(lVar2 + 0x60) + 0x10);
      uVar7 = (uint)lVar9;
    }
    *(undefined8 *)(lVar2 + 0x48) = uVar5;
    *(uint *)(lVar2 + 0x50) = uVar7;
  }
  if (*(int *)(lVar2 + 0x40) == 1000000000) {
LAB_180123261:
    if ((*(char *)(lVar2 + 0x18) != '\0') &&
       (*(longlong *)(lVar2 + 0x20) = *(longlong *)(lVar2 + 0x20) + param_2,
       *(int *)(lVar2 + 0x30) == 1000000000)) {
      iVar8 = (int)lVar2 + 0x58;
      FUN_18013acc0(&local_70);
      if ((char)local_70 == '\x05') {
        if (*(longlong *)(lVar2 + 0x60) == 0) {
          uVar5 = FUN_1801df8c0();
        }
        else {
          lVar9 = *(longlong *)(lVar2 + 0x68);
          uVar5 = (**(code **)(lVar9 + 0x28))
                            ((*(longlong *)(lVar9 + 0x10) - 1U & 0xfffffffffffffff0) +
                             *(longlong *)(lVar2 + 0x60) + 0x10);
          iVar8 = (int)lVar9;
        }
        *(undefined8 *)(lVar2 + 0x28) = uVar5;
        *(int *)(lVar2 + 0x30) = iVar8;
        goto joined_r0x0001801232ee;
      }
      FUN_180116070(&local_70);
    }
  }
  else {
    if (*(longlong *)(lVar2 + 0x60) == 0) {
      uVar6 = FUN_1801df8c0();
    }
    else {
      lVar9 = *(longlong *)(lVar2 + 0x68);
      uVar6 = (**(code **)(lVar9 + 0x28))
                        ((*(longlong *)(lVar9 + 0x10) - 1U & 0xfffffffffffffff0) +
                         *(longlong *)(lVar2 + 0x60) + 0x10);
      uVar7 = (uint)lVar9;
    }
    bVar10 = uVar6 < *(ulonglong *)(lVar2 + 0x38);
    if (uVar6 == *(ulonglong *)(lVar2 + 0x38)) {
      bVar10 = uVar7 < *(uint *)(lVar2 + 0x40);
    }
    if (!bVar10) {
      *(undefined4 *)(lVar2 + 0x40) = 1000000000;
      goto LAB_180123261;
    }
  }
joined_r0x0001801232ee:
  if ((((char)local_2c == '\0') && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
     (cVar4 = FUN_180200a50(), cVar4 == '\0')) {
    *(undefined1 *)(lVar2 + 0x11) = 1;
  }
  LOCK();
  cVar4 = *local_38;
  *local_38 = '\0';
  UNLOCK();
  if (cVar4 == '\x02') {
    WakeByAddressSingle();
    return;
  }
  return;
}


