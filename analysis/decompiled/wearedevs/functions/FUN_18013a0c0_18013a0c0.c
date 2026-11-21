/* FUN_18013a0c0 @ 18013a0c0 */

byte FUN_18013a0c0(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined *puVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  byte bVar9;
  bool bVar10;
  int local_4c;
  int *local_48;
  code *local_40;
  uint local_34;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  lVar3 = *param_1;
  piVar1 = (int *)(lVar3 + 0x10);
  LOCK();
  bVar10 = *(char *)(lVar3 + 0x10) == '\0';
  if (bVar10) {
    *(char *)(lVar3 + 0x10) = '\x01';
  }
  UNLOCK();
  if (!bVar10) {
    FUN_180200390(piVar1);
  }
  puVar5 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_34 = 0;
    cVar6 = *(char *)(lVar3 + 0x11);
  }
  else {
    local_34 = FUN_180200a50();
    local_34 = local_34 ^ 1;
    cVar6 = *(char *)(lVar3 + 0x11);
  }
  if (cVar6 != '\0') {
    uVar4 = (ulonglong)local_40 >> 8;
    local_40 = (code *)CONCAT71((int7)uVar4,(char)local_34);
    local_48 = piVar1;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_48,&PTR_FUN_18024fab8,
                  &PTR_s_C__Users_burne__cargo_registry_s_18024e398);
  }
  local_4c = *(int *)((longlong)param_1 + 0xc);
  if (*(ulonglong *)(lVar3 + 0x1e8) <= (ulonglong)*(uint *)(param_1 + 1)) {
LAB_18013a229:
    local_48 = &local_4c;
    local_40 = FUN_180152d10;
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0(&DAT_180256fac,&local_48,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
  }
  lVar8 = (ulonglong)*(uint *)(param_1 + 1) * 0x148;
  if ((*(int *)(*(longlong *)(lVar3 + 0x1e0) + lVar8) == 2) ||
     (lVar8 = *(longlong *)(lVar3 + 0x1e0) + lVar8, *(int *)(lVar8 + 300) != local_4c))
  goto LAB_18013a229;
  uVar2 = *(uint *)(lVar8 + 0x40);
  iVar7 = 6;
  if (3 < uVar2) {
    iVar7 = uVar2 - 4;
  }
  if (iVar7 == 6) {
    if ((uVar2 & 0xd) != 0) goto LAB_18013a171;
  }
  else if (iVar7 != 5) {
LAB_18013a171:
    bVar9 = 0;
    goto joined_r0x00018013a189;
  }
  bVar9 = *(byte *)(lVar8 + 0x18) ^ 1;
joined_r0x00018013a189:
  if ((((char)local_34 == '\0') && ((*(ulonglong *)puVar5 & 0x7fffffffffffffff) != 0)) &&
     (cVar6 = FUN_180200a50(), cVar6 == '\0')) {
    *(undefined1 *)(lVar3 + 0x11) = 1;
  }
  LOCK();
  cVar6 = *(char *)piVar1;
  *(char *)piVar1 = '\0';
  UNLOCK();
  if (cVar6 == '\x02') {
    WakeByAddressSingle(piVar1);
  }
  return bVar9;
}


