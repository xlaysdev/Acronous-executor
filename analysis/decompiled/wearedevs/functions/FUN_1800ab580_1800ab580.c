/* FUN_1800ab580 @ 1800ab580 */

void FUN_1800ab580(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined *puVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  bool bVar8;
  longlong *local_70;
  undefined1 local_68;
  longlong *local_60;
  uint local_54;
  longlong *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar2 = *param_1;
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x38) < 0) {
      LOCK();
      *(ulonglong *)(lVar2 + 0x38) = *(ulonglong *)(lVar2 + 0x38) & 0x7fffffffffffffff;
      UNLOCK();
    }
    puVar4 = PTR_DAT_1802fd600;
    while (plVar7 = (longlong *)FUN_18003ff30(lVar2 + 0x20), plVar7 != (longlong *)0x0) {
      plVar1 = plVar7 + 2;
      LOCK();
      bVar8 = (char)plVar7[2] == '\0';
      if (bVar8) {
        *(char *)(plVar7 + 2) = '\x01';
      }
      UNLOCK();
      local_60 = plVar7;
      if (!bVar8) {
        FUN_180200390(plVar1);
      }
      if ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) == 0) {
        uVar6 = 0;
        cVar5 = *(char *)((longlong)plVar7 + 0x11);
      }
      else {
        uVar6 = FUN_180200a50();
        uVar6 = uVar6 ^ 1;
        cVar5 = *(char *)((longlong)plVar7 + 0x11);
      }
      if (cVar5 != '\0') {
        local_68 = (undefined1)uVar6;
        local_70 = plVar1;
                    /* WARNING: Subroutine does not return */
        FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_70,
                      &PTR_FUN_180210300,&PTR_s_C__Users_burne__cargo_registry_s_180210268);
      }
      local_54 = uVar6;
      local_50 = plVar1;
      FUN_1801621f0(plVar7 + 3);
      plVar1 = local_50;
      if ((((char)local_54 == '\0') && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
         (cVar5 = FUN_180200a50(), cVar5 == '\0')) {
        *(undefined1 *)((longlong)plVar7 + 0x11) = 1;
      }
      LOCK();
      lVar3 = *plVar1;
      *(char *)plVar1 = '\0';
      UNLOCK();
      if ((char)lVar3 == '\x02') {
        WakeByAddressSingle(plVar1);
      }
      LOCK();
      *local_60 = *local_60 + -1;
      UNLOCK();
      if (*local_60 == 0) {
        FUN_18003cd00(&local_60);
      }
    }
    while (lVar2 = *param_1, lVar2 != 0) {
      plVar7 = *(longlong **)(lVar2 + 0x18);
      lVar3 = *plVar7;
      while( true ) {
        if (lVar3 != 0) {
          *(longlong *)(lVar2 + 0x18) = lVar3;
                    /* WARNING: Subroutine does not return */
          FUN_180201ec0("assertion failed: (*next).value.is_some()",0x29,&DAT_180208008);
        }
        if (*(longlong **)(lVar2 + 0x10) == plVar7) break;
        SwitchToThread();
        plVar7 = *(longlong **)(lVar2 + 0x18);
        lVar3 = *plVar7;
      }
      if (*(longlong *)(lVar2 + 0x38) == 0) {
        plVar7 = (longlong *)*param_1;
        local_50 = param_1;
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *plVar7 = *plVar7 + -1;
          UNLOCK();
          if (*plVar7 == 0) {
            FUN_18003dcd0(param_1);
          }
        }
        *local_50 = 0;
        return;
      }
      if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180210850);
      }
      if (*(longlong *)(*param_1 + 0x38) == 0) {
        return;
      }
      SwitchToThread();
    }
  }
  return;
}


