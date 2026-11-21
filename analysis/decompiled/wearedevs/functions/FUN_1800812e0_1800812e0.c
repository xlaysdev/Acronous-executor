/* FUN_1800812e0 @ 1800812e0 */

void FUN_1800812e0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  undefined *puVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  undefined *local_70;
  undefined1 *local_68;
  longlong *local_50;
  undefined *local_48;
  longlong *local_40;
  uint local_34;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  plVar3 = *(longlong **)(param_1 + 0x30);
  if ((longlong)plVar3 + 1U < 2) {
    return;
  }
  lVar8 = *plVar3;
  while( true ) {
    if (lVar8 == 0) {
      return;
    }
    if (lVar8 < 0) break;
    LOCK();
    lVar2 = *plVar3;
    bVar9 = lVar8 == lVar2;
    if (bVar9) {
      *plVar3 = lVar8 + 1;
    }
    else {
      lVar8 = lVar2;
    }
    UNLOCK();
    if (bVar9) {
      plVar1 = plVar3 + 2;
      LOCK();
      bVar9 = (char)plVar3[2] == '\0';
      if (bVar9) {
        *(undefined1 *)(plVar3 + 2) = 1;
      }
      UNLOCK();
      local_40 = plVar3;
      if (!bVar9) {
        FUN_180200390(plVar1);
      }
      puVar5 = PTR_DAT_1802fd600;
      if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
        cVar6 = *(char *)((longlong)plVar3 + 0x11);
        uVar4 = local_34;
        local_34 = 0;
      }
      else {
        uVar7 = FUN_180200a50();
        cVar6 = *(char *)((longlong)plVar3 + 0x11);
        uVar4 = local_34;
        local_34 = uVar7 ^ 1;
      }
      if (cVar6 == '\0') {
        local_50 = plVar1;
        FUN_1800a2a50(plVar3 + 5,param_1);
        FUN_1800a2740(&local_70,plVar3 + 0x11,param_1);
        if (!SBORROW8(0,(longlong)local_70)) {
          local_48 = local_70;
          FUN_18007f440(&local_70);
          if (local_48 != (undefined *)0x0) {
            thunk_FUN_1801d3330(local_68,(longlong)local_48 << 3,8);
          }
        }
        if ((((char)local_34 == '\0') && ((*(ulonglong *)puVar5 & 0x7fffffffffffffff) != 0)) &&
           (cVar6 = FUN_180200a50(), cVar6 == '\0')) {
          *(undefined1 *)((longlong)plVar3 + 0x11) = 1;
        }
        LOCK();
        lVar8 = *local_50;
        *(undefined1 *)local_50 = 0;
        UNLOCK();
        if ((char)lVar8 == '\x02') {
          WakeByAddressSingle();
        }
      }
      else {
        cVar6 = (char)local_34;
        local_34 = uVar4;
        if (((cVar6 == '\0') && ((*(ulonglong *)puVar5 & 0x7fffffffffffffff) != 0)) &&
           (cVar6 = FUN_180200a50(), cVar6 == '\0')) {
          *(undefined1 *)((longlong)plVar3 + 0x11) = 1;
        }
        LOCK();
        lVar8 = *plVar1;
        *(undefined1 *)plVar1 = 0;
        UNLOCK();
        if ((char)lVar8 == '\x02') {
          WakeByAddressSingle(plVar1);
        }
      }
      LOCK();
      *local_40 = *local_40 + -1;
      UNLOCK();
      if (*local_40 == 0) {
        FUN_18003cf20(&local_40);
      }
      return;
    }
  }
  local_70 = &DAT_1802071f8;
  local_68 = &LAB_1800a5660;
                    /* WARNING: Subroutine does not return */
  FUN_180201ee0(&DAT_180207208,&local_70,&PTR_s_C__Users_burne__rustup_toolchain_180207298);
}


