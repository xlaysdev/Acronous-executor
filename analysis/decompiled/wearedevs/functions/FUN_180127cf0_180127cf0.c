/* FUN_180127cf0 @ 180127cf0 */

void FUN_180127cf0(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined *puVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  char local_b0 [8];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong *local_60;
  undefined1 local_58;
  longlong *local_50;
  uint local_44;
  longlong *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  lVar5 = *param_2;
  if (lVar5 == 0) {
LAB_180127e41:
    *param_1 = 0;
    return;
  }
  FUN_180113540(local_b0,lVar5 + 0x10);
  if (local_b0[0] == '\0') {
    if (*(longlong *)(lVar5 + 0x38) != 0) {
      *param_1 = 2;
      return;
    }
    plVar4 = (longlong *)*param_2;
    local_40 = param_2;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        FUN_180114080(param_2);
      }
    }
    *local_40 = 0;
    goto LAB_180127e41;
  }
  local_78 = local_98;
  uStack_74 = uStack_94;
  uStack_70 = uStack_90;
  uStack_6c = uStack_8c;
  local_88 = local_a8;
  uStack_84 = uStack_a4;
  uStack_80 = uStack_a0;
  uStack_7c = uStack_9c;
  plVar4 = (longlong *)FUN_180113670(lVar5 + 0x20);
  if (plVar4 != (longlong *)0x0) {
    plVar1 = plVar4 + 2;
    LOCK();
    bVar6 = (char)plVar4[2] == '\0';
    if (bVar6) {
      *(char *)(plVar4 + 2) = '\x01';
    }
    UNLOCK();
    local_50 = plVar4;
    if (!bVar6) {
      FUN_180200390(plVar1);
    }
    puVar2 = PTR_DAT_1802fd600;
    if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
      local_44 = 0;
      cVar3 = *(char *)((longlong)plVar4 + 0x11);
    }
    else {
      local_44 = FUN_180200a50();
      local_44 = local_44 ^ 1;
      cVar3 = *(char *)((longlong)plVar4 + 0x11);
    }
    if (cVar3 != '\0') {
      local_58 = (undefined1)local_44;
      local_60 = plVar1;
                    /* WARNING: Subroutine does not return */
      FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_60,&PTR_FUN_180242c70,
                    &PTR_s_C__Users_burne__cargo_registry_s_180242b78);
    }
    local_40 = plVar1;
    FUN_1801621f0(plVar4 + 3);
    if ((((char)local_44 == '\0') && ((*(ulonglong *)puVar2 & 0x7fffffffffffffff) != 0)) &&
       (cVar3 = FUN_180200a50(), cVar3 == '\0')) {
      *(undefined1 *)((longlong)plVar4 + 0x11) = 1;
    }
    LOCK();
    lVar5 = *local_40;
    *(char *)local_40 = '\0';
    UNLOCK();
    if ((char)lVar5 == '\x02') {
      WakeByAddressSingle();
    }
    LOCK();
    *local_50 = *local_50 + -1;
    UNLOCK();
    if (*local_50 == 0) {
      FUN_18003cd00(&local_50);
    }
    lVar5 = *param_2;
    if (lVar5 == 0) goto LAB_180127df0;
  }
  LOCK();
  *(longlong *)(lVar5 + 0x38) = *(longlong *)(lVar5 + 0x38) + -1;
  UNLOCK();
LAB_180127df0:
  param_1[3] = CONCAT44(uStack_74,local_78);
  param_1[4] = CONCAT44(uStack_6c,uStack_70);
  param_1[1] = CONCAT44(uStack_84,local_88);
  param_1[2] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = 1;
  return;
}


