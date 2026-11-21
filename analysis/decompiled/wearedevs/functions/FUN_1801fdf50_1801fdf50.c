/* FUN_1801fdf50 @ 1801fdf50 */

void FUN_1801fdf50(longlong param_1,ulonglong *param_2,longlong *param_3,longlong param_4)

{
  char *pcVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined *puVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  char *pcVar8;
  longlong lVar9;
  bool bVar10;
  char *local_68;
  char local_60;
  char *local_58;
  uint local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar2 = *param_2;
  LOCK();
  lVar7 = *param_3;
  if (lVar7 == 0) {
    *param_3 = 1;
  }
  UNLOCK();
  if (lVar7 == 0) {
    if (*(ulonglong *)(param_1 + 0x10) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(uVar2,*(ulonglong *)(param_1 + 0x10),
                    &PTR_s_C__Users_burne__cargo_registry_s_180287c98);
    }
    lVar7 = *(longlong *)(param_1 + 8);
    lVar9 = uVar2 * 0x80;
    pcVar8 = (char *)(lVar7 + lVar9 + 4);
    pcVar1 = (char *)(lVar7 + 4 + lVar9);
    LOCK();
    bVar10 = *pcVar1 == '\0';
    if (bVar10) {
      *pcVar1 = '\x01';
    }
    UNLOCK();
    if (!bVar10) {
      FUN_180200390(pcVar8);
    }
    puVar4 = PTR_DAT_1802fd600;
    lVar7 = lVar7 + lVar9;
    if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
      cVar5 = *(char *)(lVar7 + 5);
      uVar3 = local_4c;
      local_4c = 0;
    }
    else {
      uVar6 = FUN_180200a50();
      cVar5 = *(char *)(lVar7 + 5);
      uVar3 = local_4c;
      local_4c = uVar6 ^ 1;
    }
    local_60 = (char)local_4c;
    if (cVar5 != '\0') {
      local_68 = pcVar8;
                    /* WARNING: Subroutine does not return */
      FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_68,&PTR_FUN_180287e20,
                    &PTR_s_C__Users_burne__cargo_registry_s_180287cb0);
    }
    LOCK();
    lVar9 = *param_3;
    if (lVar9 == 1) {
      *param_3 = 2;
    }
    UNLOCK();
    if (lVar9 == 1) {
      do {
        uVar2 = *(ulonglong *)(param_1 + 0x18);
        if (uVar2 >> 0x20 != param_2[1]) {
          *(undefined4 *)(param_2 + 2) = 0x20;
          param_2[1] = 0xffffffffffffffff;
          if (*param_3 != 3) {
            LOCK();
            if (*param_3 == 2) {
              *param_3 = 0;
            }
            UNLOCK();
          }
          goto joined_r0x0001801fe0d7;
        }
        LOCK();
        bVar10 = uVar2 == *(ulonglong *)(param_1 + 0x18);
        if (bVar10) {
          *(ulonglong *)(param_1 + 0x18) = uVar2 + 1;
        }
        UNLOCK();
      } while (!bVar10);
      LOCK();
      UNLOCK();
      LOCK();
      UNLOCK();
      if ((*(longlong *)(*(longlong *)(param_4 + 0x138) + 0x108) -
           *(longlong *)(*(longlong *)(param_4 + 0x138) + 0x100) < 1) &&
         ((*(ulonglong *)(*(longlong *)(param_4 + 0x110) + 0x100) ^
          *(ulonglong *)(*(longlong *)(param_4 + 0x110) + 0x80)) < 2)) {
        *(undefined1 *)(lVar7 + 6) = 1;
        local_58 = pcVar8;
        do {
          FUN_1801dc490(lVar7,local_58);
          if (*(char *)(lVar7 + 5) != '\0') {
            local_68 = local_58;
            local_60 = (char)local_4c;
                    /* WARNING: Subroutine does not return */
            FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_68,
                          &PTR_FUN_180287e20,&PTR_s_C__Users_burne__cargo_registry_s_180287cc8);
          }
          pcVar8 = local_58;
        } while (*(char *)(lVar7 + 6) != '\0');
      }
      else {
        LOCK();
        *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + -1;
        UNLOCK();
      }
      *(undefined4 *)(param_2 + 2) = 0;
      param_2[1] = 0xffffffffffffffff;
      if (*param_3 != 3) {
        LOCK();
        if (*param_3 == 2) {
          *param_3 = 0;
        }
        UNLOCK();
      }
      uVar3 = local_4c;
      local_60 = (char)local_4c;
    }
    else {
      *(undefined4 *)(param_2 + 2) = 0;
      param_2[1] = 0xffffffffffffffff;
    }
joined_r0x0001801fe0d7:
    local_4c = uVar3;
    if (((local_60 == '\0') && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
       (cVar5 = FUN_180200a50(), cVar5 == '\0')) {
      *(undefined1 *)(lVar7 + 5) = 1;
    }
    LOCK();
    cVar5 = *pcVar8;
    *pcVar8 = '\0';
    UNLOCK();
    if (cVar5 == '\x02') {
      WakeByAddressSingle(pcVar8);
      return;
    }
  }
  return;
}


