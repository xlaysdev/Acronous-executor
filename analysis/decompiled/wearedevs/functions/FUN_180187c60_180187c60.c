/* FUN_180187c60 @ 180187c60 */

undefined8 FUN_180187c60(longlong *param_1)

{
  char *pcVar1;
  longlong lVar2;
  undefined *puVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  bool bVar7;
  char *local_50;
  undefined1 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*param_1 == 0) {
    uVar6 = 3;
  }
  else {
    lVar2 = *(longlong *)(*param_1 + 8);
    pcVar1 = (char *)(lVar2 + 0x10);
    LOCK();
    bVar7 = *(char *)(lVar2 + 0x10) == '\0';
    if (bVar7) {
      *(char *)(lVar2 + 0x10) = '\x01';
    }
    UNLOCK();
    if (!bVar7) {
      FUN_180200390(pcVar1);
    }
    puVar3 = PTR_DAT_1802fd600;
    if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
      uVar5 = 0;
      cVar4 = *(char *)(lVar2 + 0x11);
    }
    else {
      uVar5 = FUN_180200a50();
      uVar5 = uVar5 ^ 1;
      cVar4 = *(char *)(lVar2 + 0x11);
    }
    if (cVar4 != '\0') {
      local_48 = (undefined1)uVar5;
      local_50 = pcVar1;
                    /* WARNING: Subroutine does not return */
      FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_50,&PTR_FUN_1802658f8,
                    &PTR_s_C__Users_burne__cargo_registry_s_1802658e0);
    }
    local_38 = CONCAT44(local_38._4_4_,uVar5);
    local_40 = (longlong *)pcVar1;
    FUN_18018ec50(lVar2 + 0x18);
    if ((((char)local_38 == '\0') && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
       (cVar4 = FUN_180200a50(), cVar4 == '\0')) {
      *(undefined1 *)(lVar2 + 0x11) = 1;
    }
    LOCK();
    lVar2 = *local_40;
    *(char *)local_40 = '\0';
    UNLOCK();
    if ((char)lVar2 == '\x02') {
      WakeByAddressSingle();
      local_38 = *param_1;
    }
    else {
      local_38 = *param_1;
    }
    if (local_38 != 0) {
      local_40 = param_1;
      FUN_180188540();
      thunk_FUN_1801d3330(local_38,0x20,8);
      param_1 = local_40;
    }
    *param_1 = 0;
    uVar6 = 0;
  }
  return uVar6;
}


