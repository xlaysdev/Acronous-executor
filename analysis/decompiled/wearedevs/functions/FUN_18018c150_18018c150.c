/* FUN_18018c150 @ 18018c150 */

undefined8 FUN_18018c150(longlong *param_1,longlong *param_2)

{
  char *pcVar1;
  longlong lVar2;
  uint uVar3;
  undefined *puVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  bool bVar8;
  char *local_50;
  char local_48;
  char *local_40;
  uint local_34;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  lVar2 = *param_1;
  pcVar1 = (char *)(lVar2 + 0xc0);
  LOCK();
  bVar8 = *(char *)(lVar2 + 0xc0) == '\0';
  if (bVar8) {
    *(char *)(lVar2 + 0xc0) = '\x01';
  }
  UNLOCK();
  if (!bVar8) {
    FUN_180200390(pcVar1);
  }
  puVar4 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    cVar5 = *(char *)(lVar2 + 0xc1);
    uVar3 = local_34;
    local_34 = 0;
  }
  else {
    uVar6 = FUN_180200a50();
    cVar5 = *(char *)(lVar2 + 0xc1);
    uVar3 = local_34;
    local_34 = uVar6 ^ 1;
  }
  local_48 = (char)local_34;
  if (cVar5 != '\0') {
    local_50 = pcVar1;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_50,&PTR_FUN_180266128,
                  &PTR_s_C__Users_burne__cargo_registry_s_1802661c0);
  }
  if (*(longlong *)(lVar2 + 0x128) == 0) {
    local_40 = pcVar1;
    uVar7 = FUN_1801d6710(0,"I/O source not registered with `Registry`",0x29);
  }
  else if (*(longlong *)(*param_2 + 0x10) == *(longlong *)(lVar2 + 0x128)) {
    if (*(longlong *)(lVar2 + 200) != 0) {
      *(undefined8 *)(lVar2 + 200) = 0;
      local_34 = uVar3;
      if (((local_48 == '\0') && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
         (cVar5 = FUN_180200a50(), cVar5 == '\0')) {
        *(undefined1 *)(lVar2 + 0xc1) = 1;
      }
      uVar7 = 0;
      LOCK();
      cVar5 = *pcVar1;
      *pcVar1 = '\0';
      UNLOCK();
      goto joined_r0x00018018c218;
    }
    local_40 = pcVar1;
    uVar7 = FUN_1801d6710(0,"I/O source not registered with `Registry`",0x29);
  }
  else {
    local_40 = pcVar1;
    uVar7 = FUN_1801d6710(CONCAT71((int7)((ulonglong)*param_2 >> 8),0xc),
                          "I/O source already registered with a different `Registry`",0x39);
  }
  pcVar1 = local_40;
  if ((((char)local_34 == '\0') && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
     (cVar5 = FUN_180200a50(), cVar5 == '\0')) {
    *(undefined1 *)(lVar2 + 0xc1) = 1;
  }
  LOCK();
  cVar5 = *pcVar1;
  *pcVar1 = '\0';
  UNLOCK();
joined_r0x00018018c218:
  if (cVar5 == '\x02') {
    WakeByAddressSingle(pcVar1);
  }
  return uVar7;
}


