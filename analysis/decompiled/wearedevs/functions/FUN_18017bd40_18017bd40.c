/* FUN_18017bd40 @ 18017bd40 */

bool FUN_18017bd40(ulonglong *param_1,longlong param_2)

{
  undefined *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  
  LOCK();
  UNLOCK();
  if (((short)*param_1 == 0) && (*param_1 >> 0x10 < param_1[1])) {
    LOCK();
    bVar4 = *(char *)(param_2 + 0xe0) == '\0';
    if (bVar4) {
      *(char *)(param_2 + 0xe0) = '\x01';
    }
    UNLOCK();
    if (!bVar4) {
      FUN_180200390(param_2 + 0xe0);
    }
    puVar1 = PTR_DAT_1802fd600;
    if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = FUN_180200a50();
      bVar2 = bVar2 ^ 1;
    }
    LOCK();
    UNLOCK();
    if (((short)*param_1 == 0) && (*param_1 >> 0x10 < param_1[1])) {
      LOCK();
      *param_1 = *param_1 + 0x10001;
      UNLOCK();
      bVar4 = *(longlong *)(param_2 + 0xf8) != 0;
      if (bVar4) {
        *(longlong *)(param_2 + 0xf8) = *(longlong *)(param_2 + 0xf8) + -1;
      }
      if (((bVar2 == 0) && ((*(ulonglong *)puVar1 & 0x7fffffffffffffff) != 0)) &&
         (cVar3 = FUN_180200a50(), cVar3 == '\0')) {
        *(undefined1 *)(param_2 + 0xe1) = 1;
      }
      LOCK();
      cVar3 = *(char *)(param_2 + 0xe0);
      *(char *)(param_2 + 0xe0) = '\0';
      UNLOCK();
    }
    else {
      if ((bVar2 == 0) &&
         (((*(ulonglong *)puVar1 & 0x7fffffffffffffff) != 0 &&
          (cVar3 = FUN_180200a50(), cVar3 == '\0')))) {
        *(undefined1 *)(param_2 + 0xe1) = 1;
      }
      bVar4 = false;
      LOCK();
      cVar3 = *(char *)(param_2 + 0xe0);
      *(char *)(param_2 + 0xe0) = '\0';
      UNLOCK();
    }
    if (cVar3 == '\x02') {
      WakeByAddressSingle(param_2 + 0xe0);
    }
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}


