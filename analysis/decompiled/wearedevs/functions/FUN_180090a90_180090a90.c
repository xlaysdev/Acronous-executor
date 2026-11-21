/* FUN_180090a90 @ 180090a90 */

longlong * FUN_180090a90(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  undefined *puVar5;
  char cVar6;
  bool bVar7;
  longlong *local_40;
  byte local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  plVar1 = (longlong *)*param_1;
  plVar2 = plVar1 + 2;
  LOCK();
  bVar7 = (char)plVar1[2] == '\0';
  if (bVar7) {
    *(char *)(plVar1 + 2) = '\x01';
  }
  UNLOCK();
  if (!bVar7) {
    FUN_180200390(plVar2);
  }
  puVar5 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_38 = 0;
    cVar6 = *(char *)((longlong)plVar1 + 0x11);
  }
  else {
    local_38 = FUN_180200a50();
    local_38 = local_38 ^ 1;
    cVar6 = *(char *)((longlong)plVar1 + 0x11);
  }
  if (cVar6 != '\0') {
    local_40 = plVar2;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_40,&PTR_FUN_18020e6e0,
                  &PTR_s_C__Users_burne__cargo_registry_s_18020ea88);
  }
  plVar1[0x49] = plVar1[0x49] + 1;
  if (((local_38 == 0) && ((*(ulonglong *)puVar5 & 0x7fffffffffffffff) != 0)) &&
     (cVar6 = FUN_180200a50(), cVar6 == '\0')) {
    *(undefined1 *)((longlong)plVar1 + 0x11) = 1;
  }
  LOCK();
  lVar4 = *plVar2;
  *(char *)plVar2 = '\0';
  UNLOCK();
  if ((char)lVar4 == '\x02') {
    WakeByAddressSingle(plVar2);
    LOCK();
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar4,1) != *plVar1 < 0) goto LAB_180090b87;
  }
  else {
    LOCK();
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar4,1) != *plVar1 < 0) goto LAB_180090b87;
  }
  plVar2 = (longlong *)param_1[1];
  LOCK();
  lVar4 = *plVar2;
  *plVar2 = *plVar2 + 1;
  UNLOCK();
  if (*plVar2 != 0 && SCARRY8(lVar4,1) == *plVar2 < 0) {
    return plVar1;
  }
LAB_180090b87:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}


