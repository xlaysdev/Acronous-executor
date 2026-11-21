/* FUN_180189f80 @ 180189f80 */

void FUN_180189f80(longlong param_1,longlong *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined *puVar5;
  char cVar6;
  bool bVar7;
  char *local_58;
  undefined1 local_50;
  char *local_48;
  uint local_3c;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  pcVar1 = (char *)(param_1 + 0xc0);
  LOCK();
  bVar7 = *(char *)(param_1 + 0xc0) == '\0';
  if (bVar7) {
    *(char *)(param_1 + 0xc0) = '\x01';
  }
  UNLOCK();
  if (!bVar7) {
    FUN_180200390(pcVar1);
  }
  puVar5 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_3c = 0;
    cVar6 = *(char *)(param_1 + 0xc1);
  }
  else {
    local_3c = FUN_180200a50();
    local_3c = local_3c ^ 1;
    cVar6 = *(char *)(param_1 + 0xc1);
  }
  if (cVar6 != '\0') {
    local_50 = (undefined1)local_3c;
    local_58 = pcVar1;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_58,&PTR_FUN_180266128,
                  &PTR_s_C__Users_burne__cargo_registry_s_180266060);
  }
  local_48 = pcVar1;
  cVar6 = FUN_18018a170(param_1,(int *)(param_1 + 200),param_2);
  if (((cVar6 != '\0') && (*(longlong *)(param_1 + 0x100) == 0)) && (*(int *)(param_1 + 200) == 1))
  {
    uVar2 = *(undefined8 *)(param_1 + 0xd0);
    if (param_2 == (longlong *)0x0) {
      FUN_180189a50(*(undefined8 *)(param_1 + 0x128),param_1,uVar2,4);
    }
    else {
      lVar3 = param_2[2];
      if (lVar3 == *param_2) {
        FUN_1801f8fa0(param_2);
      }
      lVar4 = param_2[1];
      *(undefined8 *)(lVar4 + lVar3 * 0x10) = uVar2;
      *(undefined4 *)(lVar4 + 8 + lVar3 * 0x10) = 4;
      param_2[2] = lVar3 + 1;
    }
  }
  if ((((char)local_3c == '\0') && ((*(ulonglong *)puVar5 & 0x7fffffffffffffff) != 0)) &&
     (cVar6 = FUN_180200a50(), cVar6 == '\0')) {
    *(undefined1 *)(param_1 + 0xc1) = 1;
  }
  LOCK();
  cVar6 = *local_48;
  *local_48 = '\0';
  UNLOCK();
  if (cVar6 == '\x02') {
    WakeByAddressSingle();
    return;
  }
  return;
}


