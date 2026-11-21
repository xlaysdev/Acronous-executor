/* FUN_1800a4970 @ 1800a4970 */

void FUN_1800a4970(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined *puVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  longlong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong *local_88;
  undefined1 local_80;
  undefined8 local_78;
  longlong *local_70;
  longlong *local_68;
  uint local_5c;
  longlong *local_58;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  lVar5 = *param_2;
  if (lVar5 == 0) {
LAB_1800a4ac4:
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  FUN_180040050(&local_a0,lVar5 + 0x10);
  if (local_a0 == 0) {
    if (*(longlong *)(lVar5 + 0x38) != 0) {
      *param_1 = 1;
      return;
    }
    plVar4 = (longlong *)*param_2;
    local_58 = param_2;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        FUN_18003d970(param_2);
      }
    }
    *local_58 = 0;
    goto LAB_1800a4ac4;
  }
  local_58 = (longlong *)local_a0;
  local_78 = local_98;
  plVar4 = (longlong *)FUN_18003ff30(lVar5 + 0x20);
  if (plVar4 != (longlong *)0x0) {
    plVar1 = plVar4 + 2;
    LOCK();
    bVar6 = (char)plVar4[2] == '\0';
    if (bVar6) {
      *(char *)(plVar4 + 2) = '\x01';
    }
    UNLOCK();
    local_68 = plVar4;
    if (!bVar6) {
      FUN_180200390(plVar1);
    }
    puVar2 = PTR_DAT_1802fd600;
    if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
      local_5c = 0;
      cVar3 = *(char *)((longlong)plVar4 + 0x11);
    }
    else {
      local_5c = FUN_180200a50();
      local_5c = local_5c ^ 1;
      cVar3 = *(char *)((longlong)plVar4 + 0x11);
    }
    if (cVar3 != '\0') {
      local_80 = (undefined1)local_5c;
      local_88 = plVar1;
                    /* WARNING: Subroutine does not return */
      FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_88,&PTR_FUN_180210300,
                    &PTR_s_C__Users_burne__cargo_registry_s_180210250);
    }
    local_70 = plVar1;
    FUN_1801621f0(plVar4 + 3);
    if ((((char)local_5c == '\0') && ((*(ulonglong *)puVar2 & 0x7fffffffffffffff) != 0)) &&
       (cVar3 = FUN_180200a50(), cVar3 == '\0')) {
      *(undefined1 *)((longlong)plVar4 + 0x11) = 1;
    }
    LOCK();
    lVar5 = *local_70;
    *(char *)local_70 = '\0';
    UNLOCK();
    if ((char)lVar5 == '\x02') {
      WakeByAddressSingle();
    }
    LOCK();
    *local_68 = *local_68 + -1;
    UNLOCK();
    if (*local_68 == 0) {
      FUN_18003cd00(&local_68);
    }
    lVar5 = *param_2;
    if (lVar5 == 0) goto LAB_1800a4a77;
  }
  LOCK();
  *(longlong *)(lVar5 + 0x38) = *(longlong *)(lVar5 + 0x38) + -1;
  UNLOCK();
LAB_1800a4a77:
  param_1[1] = local_58;
  param_1[2] = local_98;
  param_1[3] = uStack_90;
  *param_1 = 0;
  return;
}


