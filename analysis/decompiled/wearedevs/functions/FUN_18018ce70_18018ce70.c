/* FUN_18018ce70 @ 18018ce70 */

undefined8 FUN_18018ce70(longlong param_1,longlong param_2,undefined8 param_3,byte param_4)

{
  char *pcVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  char *local_68;
  byte local_60;
  longlong local_58;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  iVar5 = 0x89;
  if ((param_4 & 1) == 0) {
    iVar5 = 0;
  }
  pcVar1 = (char *)(param_2 + 0x10);
  LOCK();
  bVar6 = *(char *)(param_2 + 0x10) == '\0';
  if (bVar6) {
    *(char *)(param_2 + 0x10) = '\x01';
  }
  UNLOCK();
  local_58 = param_2;
  if (!bVar6) {
    local_49 = 1;
    FUN_180200390(pcVar1);
  }
  puVar2 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_60 = 0;
    cVar3 = *(char *)(param_2 + 0x11);
  }
  else {
    local_49 = 1;
    local_60 = FUN_180200a50();
    local_60 = local_60 ^ 1;
    cVar3 = *(char *)(param_2 + 0x11);
  }
  if (cVar3 != '\0') {
    local_68 = pcVar1;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_68,&PTR_FUN_1802667b0,
                  &DAT_180266588);
  }
  *(uint *)(param_2 + 0x68) = ((byte)(param_4 * '\x02') & 4) + iVar5 + 0x110;
  *(undefined8 *)(param_2 + 0x60) = param_3;
  if ((local_60 == 0) && ((*(ulonglong *)puVar2 & 0x7fffffffffffffff) != 0)) {
    local_49 = 1;
    cVar3 = FUN_180200a50();
    if (cVar3 == '\0') {
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
  }
  LOCK();
  cVar3 = *pcVar1;
  *pcVar1 = '\0';
  UNLOCK();
  if (cVar3 == '\x02') {
    local_49 = 1;
    WakeByAddressSingle(pcVar1);
  }
  local_49 = 0;
  FUN_18018d090(param_1,local_58);
  if (*(char *)(param_1 + 0x58) == '\0') {
    uVar4 = 0;
  }
  else {
    local_49 = 0;
    uVar4 = FUN_18018d2d0(param_1);
  }
  return uVar4;
}


