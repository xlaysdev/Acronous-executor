/* FUN_1801d7050 @ 1801d7050 */

undefined8 FUN_1801d7050(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  bool bVar5;
  longlong *local_78;
  longlong local_70;
  char *local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 *local_48;
  uint local_3c;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (DAT_1802fd7d8 != '\0') {
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    plVar2 = (longlong *)(lVar4 + 0xe0);
    cVar3 = *(char *)(lVar4 + 0xe8);
    if (cVar3 != '\x01') {
      if (cVar3 == '\x02') {
        return 0;
      }
      FUN_1801fff20(plVar2);
    }
    lVar4 = *plVar2;
    *plVar2 = 0;
    if (lVar4 != 0) {
      pcVar1 = (char *)(lVar4 + 0x10);
      LOCK();
      bVar5 = *(char *)(lVar4 + 0x10) == '\0';
      if (bVar5) {
        *(char *)(lVar4 + 0x10) = '\x01';
      }
      UNLOCK();
      local_70 = lVar4;
      if (!bVar5) {
        FUN_180200390(pcVar1);
      }
      local_68 = pcVar1;
      if ((DAT_1802fd838 & 0x7fffffffffffffff) == 0) {
        local_3c = 0;
      }
      else {
        local_3c = FUN_180200a50();
        local_3c = local_3c ^ 1;
      }
      local_58 = lVar4;
      lVar4 = FUN_1801d6450(lVar4 + 0x18,param_1,param_2);
      if (((uint)lVar4 & 3) == 1) {
        local_60 = lVar4 + -1;
        local_50 = *(undefined8 *)(lVar4 + -1);
        local_48 = *(undefined8 **)(lVar4 + 7);
        if ((code *)*local_48 != (code *)0x0) {
          (*(code *)*local_48)(local_50);
        }
        if (local_48[1] != 0) {
          thunk_FUN_1801d3330(local_50,local_48[1],local_48[2]);
        }
        thunk_FUN_1801d3330(local_60,0x18,8);
      }
      else {
      }
      if ((((char)local_3c == '\0') && ((DAT_1802fd838 & 0x7fffffffffffffff) != 0)) &&
         (cVar3 = FUN_180200a50(), cVar3 == '\0')) {
        *(undefined1 *)(local_58 + 0x11) = 1;
      }
      lVar4 = local_58;
      LOCK();
      cVar3 = *local_68;
      *local_68 = '\0';
      UNLOCK();
      if (cVar3 == '\x02') {
        WakeByAddressSingle();
      }
      local_78 = (longlong *)*plVar2;
      *plVar2 = lVar4;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        *local_78 = *local_78 + -1;
        UNLOCK();
        if (*local_78 == 0) {
          FUN_1801e37a0(&local_78);
        }
      }
      return 1;
    }
  }
  return 0;
}


