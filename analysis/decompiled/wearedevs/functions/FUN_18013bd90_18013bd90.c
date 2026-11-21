/* FUN_18013bd90 @ 18013bd90 */

void FUN_18013bd90(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined *puVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  int local_4c;
  int *local_48;
  code *local_40;
  uint local_34;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  lVar2 = *param_1;
  piVar1 = (int *)(lVar2 + 0x10);
  LOCK();
  bVar8 = *(char *)(lVar2 + 0x10) == '\0';
  if (bVar8) {
    *(char *)(lVar2 + 0x10) = '\x01';
  }
  UNLOCK();
  if (!bVar8) {
    FUN_180200390(piVar1);
  }
  puVar3 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_34 = 0;
    cVar4 = *(char *)(lVar2 + 0x11);
  }
  else {
    local_34 = FUN_180200a50();
    local_34 = local_34 ^ 1;
    cVar4 = *(char *)(lVar2 + 0x11);
  }
  if (cVar4 != '\0') {
    uVar5 = (ulonglong)local_40 >> 8;
    local_40 = (code *)CONCAT71((int7)uVar5,(char)local_34);
    local_48 = piVar1;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_48,&PTR_FUN_18024fab8,
                  &PTR_s_C__Users_burne__cargo_registry_s_18024e3f8);
  }
  uVar5 = (ulonglong)*(uint *)(param_1 + 1);
  local_4c = *(int *)((longlong)param_1 + 0xc);
  local_48 = &local_4c;
  if (uVar5 < *(ulonglong *)(lVar2 + 0x1e8)) {
    lVar6 = uVar5 * 0x148;
    if ((*(int *)(*(longlong *)(lVar2 + 0x1e0) + lVar6) != 2) &&
       (lVar7 = *(longlong *)(lVar2 + 0x1e0) + lVar6, *(int *)(lVar7 + 300) == local_4c)) {
      *(undefined1 *)(lVar7 + 0x140) = 0;
      if ((*(ulonglong *)(lVar2 + 0x1e8) <= uVar5) ||
         ((*(int *)(*(longlong *)(lVar2 + 0x1e0) + lVar6) == 2 ||
          (lVar6 = *(longlong *)(lVar2 + 0x1e0) + lVar6, *(int *)(lVar6 + 300) != local_4c)))) {
        local_40 = FUN_180152d10;
                    /* WARNING: Subroutine does not return */
        FUN_180201ee0(&DAT_180256fac,&local_48,&PTR_s_C__Users_burne__cargo_registry_s_180257058);
      }
      FUN_180158360(lVar2 + 0x88,lVar6,lVar2 + 0x1c8,lVar2 + 0x18);
      if ((((char)local_34 == '\0') && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
         (cVar4 = FUN_180200a50(), cVar4 == '\0')) {
        *(undefined1 *)(lVar2 + 0x11) = 1;
      }
      LOCK();
      cVar4 = *(char *)piVar1;
      *(char *)piVar1 = '\0';
      UNLOCK();
      if (cVar4 == '\x02') {
        WakeByAddressSingle();
        return;
      }
      return;
    }
  }
  local_40 = FUN_180152d10;
                    /* WARNING: Subroutine does not return */
  FUN_180201ee0(&DAT_180256fac,&local_48,&PTR_s_C__Users_burne__cargo_registry_s_180257058);
}


