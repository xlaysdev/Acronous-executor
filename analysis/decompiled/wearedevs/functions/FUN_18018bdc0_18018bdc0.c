/* FUN_18018bdc0 @ 18018bdc0 */

/* WARNING: Removing unreachable block (ram,0x00018018be0a) */
/* WARNING: Removing unreachable block (ram,0x00018018be23) */
/* WARNING: Removing unreachable block (ram,0x00018018be43) */
/* WARNING: Removing unreachable block (ram,0x00018018be49) */
/* WARNING: Removing unreachable block (ram,0x00018018be5a) */
/* WARNING: Removing unreachable block (ram,0x00018018be63) */
/* WARNING: Removing unreachable block (ram,0x00018018bf34) */
/* WARNING: Removing unreachable block (ram,0x00018018bf5c) */
/* WARNING: Removing unreachable block (ram,0x00018018bf62) */
/* WARNING: Removing unreachable block (ram,0x00018018bf73) */
/* WARNING: Removing unreachable block (ram,0x00018018bf7c) */
/* WARNING: Removing unreachable block (ram,0x00018018bfa1) */

void FUN_18018bdc0(longlong *param_1)

{
  longlong lVar1;
  undefined *puVar2;
  char cVar3;
  BOOL BVar4;
  uint uVar5;
  char *pcVar6;
  bool bVar7;
  char *local_68;
  undefined1 local_60;
  char *local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  if ((*(char *)(lVar1 + 0xb8) != '\0') &&
     (BVar4 = CancelIoEx(*(HANDLE *)(lVar1 + 0xb0),(LPOVERLAPPED)(lVar1 + 0x10)), BVar4 == 0)) {
    GetLastError();
  }
  pcVar6 = (char *)(lVar1 + 0xc0);
  LOCK();
  bVar7 = *(char *)(lVar1 + 0xc0) == '\0';
  if (bVar7) {
    *(char *)(lVar1 + 0xc0) = '\x01';
  }
  UNLOCK();
  if (!bVar7) {
    FUN_180200390(pcVar6);
  }
  puVar2 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    uVar5 = 0;
    cVar3 = *(char *)(lVar1 + 0xc1);
  }
  else {
    uVar5 = FUN_180200a50();
    uVar5 = uVar5 ^ 1;
    cVar3 = *(char *)(lVar1 + 0xc1);
  }
  if (cVar3 != '\0') {
    local_60 = (undefined1)uVar5;
    local_68 = pcVar6;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_68,&PTR_FUN_180266128,
                  &PTR_s_C__Users_burne__cargo_registry_s_1802661a8);
  }
  if (*(int *)(lVar1 + 0xd8) == 1) {
    BVar4 = CancelIoEx(*(HANDLE *)(lVar1 + 0xb0),(LPOVERLAPPED)(lVar1 + 0x38));
    if (BVar4 == 0) {
      local_38 = CONCAT44(local_38._4_4_,uVar5);
      local_40 = pcVar6;
      GetLastError();
      pcVar6 = local_40;
      uVar5 = (uint)local_38;
    }
    else {
    }
  }
  if ((((char)uVar5 == '\0') && ((*(ulonglong *)puVar2 & 0x7fffffffffffffff) != 0)) &&
     (cVar3 = FUN_180200a50(), cVar3 == '\0')) {
    *(undefined1 *)(lVar1 + 0xc1) = 1;
  }
  LOCK();
  cVar3 = *pcVar6;
  *pcVar6 = '\0';
  UNLOCK();
  if (cVar3 == '\x02') {
    WakeByAddressSingle(pcVar6);
    return;
  }
  return;
}


