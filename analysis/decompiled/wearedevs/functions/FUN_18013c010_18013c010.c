/* FUN_18013c010 @ 18013c010 */

undefined8 * FUN_18013c010(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  code *pcVar4;
  ulonglong uVar5;
  undefined *puVar6;
  char cVar7;
  longlong lVar8;
  bool bVar9;
  int local_5c;
  longlong *local_58;
  longlong *local_50;
  code *local_48;
  uint local_3c;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  plVar3 = (longlong *)*param_2;
  plVar1 = plVar3 + 2;
  LOCK();
  bVar9 = (char)plVar3[2] == '\0';
  if (bVar9) {
    *(char *)(plVar3 + 2) = '\x01';
  }
  UNLOCK();
  if (!bVar9) {
    FUN_180200390(plVar1);
  }
  puVar6 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_3c = 0;
    cVar7 = *(char *)((longlong)plVar3 + 0x11);
  }
  else {
    local_3c = FUN_180200a50();
    local_3c = local_3c ^ 1;
    cVar7 = *(char *)((longlong)plVar3 + 0x11);
  }
  if (cVar7 != '\0') {
    uVar5 = (ulonglong)local_48 >> 8;
    local_48 = (code *)CONCAT71((int7)uVar5,(char)local_3c);
    local_50 = plVar1;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_50,&PTR_FUN_18024fab8,
                  &PTR_s_C__Users_burne__cargo_registry_s_18024fb10);
  }
  uVar2 = *(uint *)(param_2 + 1);
  local_5c = *(int *)((longlong)param_2 + 0xc);
  local_58 = plVar1;
  if ((ulonglong)uVar2 < (ulonglong)plVar3[0x3d]) {
    lVar8 = (ulonglong)uVar2 * 0x148;
    if ((*(int *)(plVar3[0x3c] + lVar8) != 2) &&
       (lVar8 = plVar3[0x3c] + lVar8, *(int *)(lVar8 + 300) == local_5c)) {
      if (*(longlong *)(lVar8 + 0x80) == -1) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: self.ref_count < usize::MAX",0x2d,
                      &PTR_s_C__Users_burne__cargo_registry_s_1802497c8);
      }
      *(longlong *)(lVar8 + 0x80) = *(longlong *)(lVar8 + 0x80) + 1;
      plVar3[0x49] = plVar3[0x49] + 1;
      LOCK();
      lVar8 = *plVar3;
      *plVar3 = *plVar3 + 1;
      UNLOCK();
      if (*plVar3 == 0 || SCARRY8(lVar8,1) != *plVar3 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      *param_1 = plVar3;
      *(uint *)(param_1 + 1) = uVar2;
      *(int *)((longlong)param_1 + 0xc) = local_5c;
      if ((((char)local_3c == '\0') && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
         (cVar7 = FUN_180200a50(), cVar7 == '\0')) {
        *(undefined1 *)((longlong)plVar3 + 0x11) = 1;
      }
      LOCK();
      lVar8 = *plVar1;
      *(char *)plVar1 = '\0';
      UNLOCK();
      if ((char)lVar8 == '\x02') {
        WakeByAddressSingle(plVar1);
      }
      return param_1;
    }
  }
  local_50 = (longlong *)&local_5c;
  local_48 = FUN_180152d10;
                    /* WARNING: Subroutine does not return */
  FUN_180201ee0(&DAT_180256fac,&local_50,&PTR_s_C__Users_burne__cargo_registry_s_180257058);
}


