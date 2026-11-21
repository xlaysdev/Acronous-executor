/* FUN_18007eeb0 @ 18007eeb0 */

void FUN_18007eeb0(longlong param_1)

{
  undefined *puVar1;
  char *pcVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  bool bVar6;
  longlong local_58;
  undefined8 local_50;
  undefined8 *local_48;
  char *local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_58 = *(longlong *)(param_1 + 0x18);
  local_50 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = 0xffffffffffffffff;
  if (local_58 != -1) {
    lVar5 = FUN_1801790f0(param_1);
    local_48 = (undefined8 *)FUN_18018c7a0(&local_58,lVar5);
    local_40 = (char *)(lVar5 + 0x20);
    LOCK();
    bVar6 = *(char *)(lVar5 + 0x20) == '\0';
    if (bVar6) {
      *(char *)(lVar5 + 0x20) = '\x01';
    }
    UNLOCK();
    if (!bVar6) {
      FUN_180200390(local_40);
    }
    puVar1 = PTR_DAT_1802fd600;
    if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
      local_38 = local_38 & 0xffffffff00000000;
    }
    else {
      uVar4 = FUN_180200a50();
      local_38 = CONCAT44(local_38._4_4_,uVar4) ^ 1;
    }
    cVar3 = FUN_18017e5c0(lVar5 + 0x18,lVar5 + 0x28,param_1 + 0x10);
    pcVar2 = local_40;
    if (cVar3 == '\0') {
      if ((((char)local_38 == '\0') && ((*(ulonglong *)puVar1 & 0x7fffffffffffffff) != 0)) &&
         (cVar3 = FUN_180200a50(), cVar3 == '\0')) {
        *(undefined1 *)(lVar5 + 0x21) = 1;
      }
      LOCK();
      cVar3 = *pcVar2;
      *pcVar2 = '\0';
      UNLOCK();
      if (cVar3 == '\x02') {
        WakeByAddressSingle(pcVar2);
      }
    }
    else {
      if ((((char)local_38 == '\0') && ((*(ulonglong *)puVar1 & 0x7fffffffffffffff) != 0)) &&
         (cVar3 = FUN_180200a50(), cVar3 == '\0')) {
        *(undefined1 *)(lVar5 + 0x21) = 1;
      }
      LOCK();
      cVar3 = *pcVar2;
      *pcVar2 = '\0';
      UNLOCK();
      if (cVar3 == '\x02') {
        WakeByAddressSingle(pcVar2);
      }
      FUN_180172e60(lVar5);
    }
    if (((uint)local_48 & 3) == 1) {
      local_38 = (longlong)local_48 - 1;
      local_40 = *(char **)((longlong)local_48 + -1);
      local_48 = *(undefined8 **)((longlong)local_48 + 7);
      if ((code *)*local_48 != (code *)0x0) {
        (*(code *)*local_48)(local_40);
      }
      if (local_48[1] != 0) {
        thunk_FUN_1801d3330(local_40,local_48[1],local_48[2]);
      }
      thunk_FUN_1801d3330(local_38,0x18,8);
    }
    FUN_18007b1e0(local_58,local_50);
  }
  return;
}


