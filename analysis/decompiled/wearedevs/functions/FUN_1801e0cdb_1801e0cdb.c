/* FUN_1801e0cdb @ 1801e0cdb */

void FUN_1801e0cdb(undefined8 *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined1 local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  longlong local_40;
  longlong *local_38;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_2b = 3;
  if (*(char *)((longlong)param_1 + 0x19) == '\0') {
    local_2b = 1;
    if (*(ulonglong *)
         (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x148) <
        2) {
      local_2b = FUN_1801dfc80();
    }
  }
  local_78 = param_1[2];
  lVar3 = param_1[1];
  local_88 = FUN_1801e1180(*param_1);
  local_50 = &local_88;
  local_80 = lVar3;
  local_58 = &local_78;
  local_48 = &local_2b;
  bVar1 = FUN_1801d6f60(0);
  if (lVar3 == 0 || (bVar1 & 1) != 0) {
    local_70 = (ulonglong)local_70._5_3_ << 0x28;
    FUN_1801e0e67(&local_58,&local_70,&DAT_1802902a0);
  }
  else {
    local_40 = lVar3;
    FUN_1801df520(&local_70,lVar3 + 0x10);
    local_29 = local_60;
    local_38 = local_68;
    plVar4 = local_68 + 1;
    FUN_1801e0e67(&local_58,plVar4,&PTR_LAB_180290710);
    plVar4 = (longlong *)CONCAT71((int7)((ulonglong)plVar4 >> 8),local_29);
    FUN_1801e2520(local_38);
    local_2a = 0;
    uVar2 = FUN_1801d6f60(lVar3);
    if ((uVar2 & 1) == 0) {
      local_70 = 1;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_68 = plVar4;
          FUN_1801e37a0(&local_68);
        }
      }
    }
  }
  return;
}


