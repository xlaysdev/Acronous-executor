/* FUN_18007eb90 @ 18007eb90 */

void FUN_18007eb90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  char *pcVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  longlong lVar9;
  longlong *local_48;
  char *local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_48 = *(longlong **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (local_48 != (longlong *)0x0) {
    lVar6 = FUN_1801790f0();
    lVar7 = FUN_18018c150(&local_48,lVar6);
    local_40 = (char *)(lVar6 + 0x20);
    LOCK();
    bVar8 = *(char *)(lVar6 + 0x20) == '\0';
    if (bVar8) {
      *(char *)(lVar6 + 0x20) = '\x01';
    }
    UNLOCK();
    lVar9 = lVar7;
    if (!bVar8) {
      FUN_180200390(local_40);
    }
    puVar2 = PTR_DAT_1802fd600;
    if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
      local_38 = local_38 & 0xffffffff00000000;
    }
    else {
      uVar5 = FUN_180200a50();
      local_38 = CONCAT44(local_38._4_4_,uVar5) ^ 1;
    }
    cVar4 = FUN_18017e5c0(lVar6 + 0x18,lVar6 + 0x28,param_1 + 0x10,param_4,lVar9);
    pcVar3 = local_40;
    if (cVar4 == '\0') {
      if ((((char)local_38 == '\0') && ((*(ulonglong *)puVar2 & 0x7fffffffffffffff) != 0)) &&
         (cVar4 = FUN_180200a50(), cVar4 == '\0')) {
        *(undefined1 *)(lVar6 + 0x21) = 1;
      }
      LOCK();
      cVar4 = *pcVar3;
      *pcVar3 = '\0';
      UNLOCK();
      if (cVar4 == '\x02') {
        WakeByAddressSingle(pcVar3);
      }
    }
    else {
      if ((((char)local_38 == '\0') && ((*(ulonglong *)puVar2 & 0x7fffffffffffffff) != 0)) &&
         (cVar4 = FUN_180200a50(), cVar4 == '\0')) {
        *(undefined1 *)(lVar6 + 0x21) = 1;
      }
      LOCK();
      cVar4 = *pcVar3;
      *pcVar3 = '\0';
      UNLOCK();
      if (cVar4 == '\x02') {
        WakeByAddressSingle(pcVar3);
      }
      FUN_180172e60(lVar6);
    }
    if (((uint)lVar7 & 3) == 1) {
      local_38 = lVar7 - 1;
      local_40 = *(char **)(lVar7 + -1);
      puVar1 = *(undefined8 **)(lVar7 + 7);
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)(local_40);
      }
      if (puVar1[1] != 0) {
        thunk_FUN_1801d3330(local_40,puVar1[1],puVar1[2]);
      }
      thunk_FUN_1801d3330(local_38,0x18,8);
    }
    FUN_18018bdc0(&local_48);
    LOCK();
    *local_48 = *local_48 + -1;
    UNLOCK();
    if (*local_48 == 0) {
      FUN_1801876c0(&local_48);
    }
  }
  return;
}


