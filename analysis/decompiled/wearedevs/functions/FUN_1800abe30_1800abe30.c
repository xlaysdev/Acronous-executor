/* FUN_1800abe30 @ 1800abe30 */

void FUN_1800abe30(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined *puVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  longlong *local_78;
  undefined1 local_70;
  undefined7 uStack_6f;
  longlong local_68;
  longlong *local_58;
  uint local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar7 = *param_1;
  if (lVar7 != 0) {
    if (*(longlong *)(lVar7 + 0x38) < 0) {
      LOCK();
      *(ulonglong *)(lVar7 + 0x38) = *(ulonglong *)(lVar7 + 0x38) & 0x7fffffffffffffff;
      UNLOCK();
    }
    puVar3 = PTR_DAT_1802fd600;
    while (plVar6 = (longlong *)FUN_18003ff30(lVar7 + 0x20), plVar6 != (longlong *)0x0) {
      plVar1 = plVar6 + 2;
      LOCK();
      bVar8 = (char)plVar6[2] == '\0';
      if (bVar8) {
        *(char *)(plVar6 + 2) = '\x01';
      }
      UNLOCK();
      local_58 = plVar6;
      if (!bVar8) {
        FUN_180200390(plVar1);
      }
      if ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) == 0) {
        uVar5 = 0;
        cVar4 = *(char *)((longlong)plVar6 + 0x11);
      }
      else {
        uVar5 = FUN_180200a50();
        uVar5 = uVar5 ^ 1;
        cVar4 = *(char *)((longlong)plVar6 + 0x11);
      }
      if (cVar4 != '\0') {
        local_70 = (undefined1)uVar5;
        local_78 = plVar1;
                    /* WARNING: Subroutine does not return */
        FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_78,
                      &PTR_FUN_180210300,&PTR_s_C__Users_burne__cargo_registry_s_180210268);
      }
      local_4c = uVar5;
      FUN_1801621f0(plVar6 + 3);
      if ((((char)local_4c == '\0') && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
         (cVar4 = FUN_180200a50(), cVar4 == '\0')) {
        *(undefined1 *)((longlong)plVar6 + 0x11) = 1;
      }
      LOCK();
      lVar2 = *plVar1;
      *(char *)plVar1 = '\0';
      UNLOCK();
      if ((char)lVar2 == '\x02') {
        WakeByAddressSingle(plVar1);
      }
      LOCK();
      *local_58 = *local_58 + -1;
      UNLOCK();
      if (*local_58 == 0) {
        FUN_18003cd00(&local_58);
      }
    }
    if (*param_1 != 0) {
LAB_1800abf70:
      FUN_1800a4970(&local_78,param_1);
      if ((int)local_78 == 1) {
        if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180210850);
        }
        if (*(longlong *)(*param_1 + 0x38) != 0) goto code_r0x0001800abf96;
        if (((char)local_78 == '\0') && (local_68 != 0 && CONCAT71(uStack_6f,local_70) != 0)) {
          thunk_FUN_1801d3330(CONCAT71(uStack_6f,local_70),local_68,1);
        }
      }
      else {
        lVar7 = CONCAT71(uStack_6f,local_70);
        if (lVar7 != 0) goto LAB_1800abfb9;
      }
    }
  }
  return;
code_r0x0001800abf96:
  SwitchToThread();
  if ((char)local_78 == '\0') {
    lVar7 = CONCAT71(uStack_6f,local_70);
LAB_1800abfb9:
    if (local_68 != 0 && lVar7 != 0) {
      thunk_FUN_1801d3330(lVar7,local_68,1);
    }
  }
  goto LAB_1800abf70;
}


