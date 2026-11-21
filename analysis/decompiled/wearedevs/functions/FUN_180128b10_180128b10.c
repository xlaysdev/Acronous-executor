/* FUN_180128b10 @ 180128b10 */

/* WARNING: Removing unreachable block (ram,0x000180128c8e) */

void FUN_180128b10(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined *puVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  bool bVar8;
  longlong *local_88;
  undefined1 local_80 [32];
  longlong *local_60;
  longlong *local_58;
  uint local_4c;
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
    while (plVar7 = (longlong *)FUN_180113670(lVar2 + 0x20), plVar7 != (longlong *)0x0) {
      plVar1 = plVar7 + 2;
      LOCK();
      bVar8 = (char)plVar7[2] == '\0';
      if (bVar8) {
        *(char *)(plVar7 + 2) = '\x01';
      }
      UNLOCK();
      local_58 = plVar7;
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
        local_80[0] = (undefined1)uVar6;
        local_88 = plVar1;
                    /* WARNING: Subroutine does not return */
        FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_88,
                      &PTR_FUN_180242c70,&PTR_s_C__Users_burne__cargo_registry_s_180242b90);
      }
      local_60 = plVar1;
      local_4c = uVar6;
      FUN_1801621f0(plVar7 + 3);
      plVar1 = local_60;
      if ((((char)local_4c == '\0') && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
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
      *local_58 = *local_58 + -1;
      UNLOCK();
      if (*local_58 == 0) {
        FUN_18003cd00(&local_58);
      }
    }
    if (*param_1 != 0) {
LAB_180128c4d:
      FUN_180127cf0(&local_88,param_1);
      if (local_88 == (longlong *)0x2) {
        if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180242cc0);
        }
        if (*(longlong *)(*param_1 + 0x38) != 0) goto code_r0x000180128c73;
      }
      else if (((ulonglong)local_88 & 1) != 0) goto LAB_180128c44;
    }
  }
  return;
code_r0x000180128c73:
  SwitchToThread();
  if (((ulonglong)local_88 & 0xfffffffffffffffd) != 0) {
LAB_180128c44:
    FUN_180044a30(local_80);
  }
  goto LAB_180128c4d;
}


