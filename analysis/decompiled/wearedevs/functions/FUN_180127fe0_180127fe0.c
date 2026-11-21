/* FUN_180127fe0 @ 180127fe0 */

char FUN_180127fe0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined *puVar4;
  char cVar5;
  uint uVar6;
  char cVar7;
  undefined8 *puVar8;
  char *pcVar9;
  bool bVar10;
  char *local_70;
  char local_68;
  char *local_60;
  undefined8 *local_58;
  longlong local_50;
  undefined8 local_48;
  uint local_3c;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 0x10) == '\x01') {
    lVar2 = *(longlong *)(param_1 + 8);
    pcVar9 = (char *)(lVar2 + 0x10);
    LOCK();
    bVar10 = *(char *)(lVar2 + 0x10) == '\0';
    if (bVar10) {
      *(char *)(lVar2 + 0x10) = '\x01';
    }
    UNLOCK();
    if (!bVar10) {
      FUN_180200390(pcVar9);
    }
    puVar4 = PTR_DAT_1802fd600;
    if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
      uVar6 = 0;
      cVar5 = *(char *)(lVar2 + 0x11);
    }
    else {
      uVar6 = FUN_180200a50();
      uVar6 = uVar6 ^ 1;
      cVar5 = *(char *)(lVar2 + 0x11);
    }
    local_68 = (char)uVar6;
    if (cVar5 != '\0') {
      local_70 = pcVar9;
                    /* WARNING: Subroutine does not return */
      FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_70,&PTR_FUN_180242c70,
                    &PTR_s_C__Users_burne__cargo_registry_s_180242ba8);
    }
    cVar1 = *(char *)(lVar2 + 0x28);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0x10) = 0;
      if (((local_68 == '\0') && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
         (cVar5 = FUN_180200a50(), cVar5 == '\0')) {
        *(undefined1 *)(lVar2 + 0x11) = 1;
      }
      cVar5 = '\0';
      LOCK();
      cVar7 = *pcVar9;
      *pcVar9 = '\0';
      UNLOCK();
    }
    else {
      local_60 = pcVar9;
      local_3c = uVar6;
      if (param_2 == (undefined8 *)0x0) {
        local_48 = 0;
        lVar3 = *(longlong *)(lVar2 + 0x18);
      }
      else {
        puVar8 = *(undefined8 **)*param_2;
        local_48 = (*(code *)*puVar8)();
        lVar3 = *(longlong *)(lVar2 + 0x18);
        local_58 = puVar8;
      }
      local_50 = lVar2;
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 0x18))();
      }
      lVar2 = local_50;
      *(undefined8 *)(local_50 + 0x18) = local_48;
      *(undefined8 **)(local_50 + 0x20) = local_58;
      if ((((char)local_3c == '\0') && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
         (cVar5 = FUN_180200a50(), cVar5 == '\0')) {
        *(undefined1 *)(lVar2 + 0x11) = 1;
      }
      LOCK();
      cVar7 = *local_60;
      *local_60 = '\0';
      UNLOCK();
      cVar5 = '\x01';
      pcVar9 = local_60;
    }
    if (cVar7 == '\x02') {
      WakeByAddressSingle(pcVar9);
      cVar5 = cVar1;
    }
  }
  else {
    cVar5 = '\0';
  }
  return cVar5;
}


