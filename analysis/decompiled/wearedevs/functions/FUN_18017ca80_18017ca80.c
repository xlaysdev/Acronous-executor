/* FUN_18017ca80 @ 18017ca80 */

void FUN_18017ca80(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  undefined8 local_38;
  undefined8 *local_30;
  code *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  LOCK();
  local_38 = *(undefined8 *)(lVar1 + 0x18);
  *(undefined8 *)(lVar1 + 0x18) = 3;
  UNLOCK();
  switch(local_38) {
  case 0:
  case 3:
    return;
  case 1:
    break;
  case 2:
    if (*param_2 == 0) {
      FUN_1801691b0(param_2[1] + 0x10);
      return;
    }
    local_30 = (undefined8 *)FUN_18018cbb0();
    if (local_30 != (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201bc0("failed to wake I/O driver",0x19,&local_30,&PTR_FUN_180262428,
                    &PTR_s_C__Users_burne__cargo_registry_s_180262610);
    }
    return;
  default:
    local_30 = &local_38;
    local_28 = FUN_1801ee720;
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0(&DAT_180264628,&local_30,&PTR_s_C__Users_burne__cargo_registry_s_180264658);
  }
  LOCK();
  bVar5 = *(char *)(lVar1 + 0x24) == '\0';
  if (bVar5) {
    *(char *)(lVar1 + 0x24) = '\x01';
  }
  UNLOCK();
  if (!bVar5) {
    FUN_180200390(lVar1 + 0x24);
  }
  puVar3 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    uVar2 = *(ulonglong *)PTR_DAT_1802fd600;
  }
  else {
    cVar4 = FUN_180200a50();
    if (cVar4 == '\0') goto LAB_18017caf6;
    uVar2 = *(ulonglong *)puVar3;
  }
  if ((uVar2 & 0x7fffffffffffffff) != 0) {
    cVar4 = FUN_180200a50();
    if (cVar4 == '\0') {
      *(undefined1 *)(lVar1 + 0x25) = 1;
    }
  }
LAB_18017caf6:
  LOCK();
  cVar4 = *(char *)(lVar1 + 0x24);
  *(char *)(lVar1 + 0x24) = '\0';
  UNLOCK();
  if (cVar4 == '\x02') {
    WakeByAddressSingle(lVar1 + 0x24);
  }
  FUN_1801df5c0(lVar1 + 0x20);
  return;
}


