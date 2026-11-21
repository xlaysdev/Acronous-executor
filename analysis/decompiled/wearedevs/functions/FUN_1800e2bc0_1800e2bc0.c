/* FUN_1800e2bc0 @ 1800e2bc0 */

void FUN_1800e2bc0(char *param_1)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  bool bVar6;
  int local_130 [66];
  char *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  cVar2 = param_1[0x110];
  if (*param_1 == '\0') {
    if (cVar2 == '\x03') {
      lVar3 = *(longlong *)(param_1 + 0x108);
      if (lVar3 == 0) {
        return;
      }
      local_28 = param_1 + 0x108;
      uVar5 = *(ulonglong *)(lVar3 + 0x30);
      do {
        LOCK();
        uVar1 = *(ulonglong *)(lVar3 + 0x30);
        bVar6 = uVar5 == uVar1;
        if (bVar6) {
          *(ulonglong *)(lVar3 + 0x30) = uVar5 | 4;
        }
        else {
          uVar5 = uVar1;
        }
        UNLOCK();
      } while (!bVar6);
      if (((uint)uVar5 & 10) == 8) {
        (**(code **)(*(longlong *)(lVar3 + 0x10) + 0x10))(*(undefined8 *)(lVar3 + 0x18));
      }
      if (((uint)uVar5 & 3) == 1) {
        LOCK();
        *(ulonglong *)(lVar3 + 0x30) = *(ulonglong *)(lVar3 + 0x30) & 0xfffffffffffffffe;
        UNLOCK();
        FUN_180177590(lVar3 + 0x20);
      }
      if ((uVar5 & 2) != 0) {
        memcpy(local_130,(void *)(lVar3 + 0x38),0x108);
        *(undefined8 *)(lVar3 + 0x38) = 5;
        if (local_130[0] != 5) {
          FUN_1800a62b0(local_130);
        }
      }
    }
    else {
      if (cVar2 != '\0') {
        return;
      }
      if (*(int *)(param_1 + 8) != 3) goto LAB_1800e2e24;
      lVar3 = *(longlong *)(param_1 + 0x10);
      if (lVar3 == 0) {
        return;
      }
      local_28 = param_1 + 0x10;
      uVar5 = *(ulonglong *)(lVar3 + 0x30);
      do {
        LOCK();
        uVar1 = *(ulonglong *)(lVar3 + 0x30);
        bVar6 = uVar5 == uVar1;
        if (bVar6) {
          *(ulonglong *)(lVar3 + 0x30) = uVar5 | 4;
        }
        else {
          uVar5 = uVar1;
        }
        UNLOCK();
      } while (!bVar6);
      if (((uint)uVar5 & 10) == 8) {
        (**(code **)(*(longlong *)(lVar3 + 0x10) + 0x10))(*(undefined8 *)(lVar3 + 0x18));
      }
      if (((uint)uVar5 & 3) == 1) {
        LOCK();
        *(ulonglong *)(lVar3 + 0x30) = *(ulonglong *)(lVar3 + 0x30) & 0xfffffffffffffffe;
        UNLOCK();
        FUN_180177590(lVar3 + 0x20);
      }
      if ((uVar5 & 2) != 0) {
        memcpy(local_130,(void *)(lVar3 + 0x38),0x108);
        *(undefined8 *)(lVar3 + 0x38) = 5;
        if (local_130[0] != 5) {
          FUN_1800a62b0(local_130);
        }
      }
    }
  }
  else if (cVar2 == '\x03') {
    lVar3 = *(longlong *)(param_1 + 0x108);
    if (lVar3 == 0) {
      return;
    }
    local_28 = param_1 + 0x108;
    uVar5 = *(ulonglong *)(lVar3 + 0x30);
    do {
      LOCK();
      uVar1 = *(ulonglong *)(lVar3 + 0x30);
      bVar6 = uVar5 == uVar1;
      if (bVar6) {
        *(ulonglong *)(lVar3 + 0x30) = uVar5 | 4;
      }
      else {
        uVar5 = uVar1;
      }
      UNLOCK();
    } while (!bVar6);
    if (((uint)uVar5 & 10) == 8) {
      (**(code **)(*(longlong *)(lVar3 + 0x10) + 0x10))(*(undefined8 *)(lVar3 + 0x18));
    }
    if (((uint)uVar5 & 3) == 1) {
      LOCK();
      *(ulonglong *)(lVar3 + 0x30) = *(ulonglong *)(lVar3 + 0x30) & 0xfffffffffffffffe;
      UNLOCK();
      FUN_180177590(lVar3 + 0x20);
    }
    if ((uVar5 & 2) != 0) {
      memcpy(local_130,(void *)(lVar3 + 0x38),0x108);
      *(undefined8 *)(lVar3 + 0x38) = 5;
      if (local_130[0] != 5) {
        FUN_1800a62b0(local_130);
      }
    }
  }
  else {
    if (cVar2 != '\0') {
      return;
    }
    if (*(int *)(param_1 + 8) != 3) {
LAB_1800e2e24:
      FUN_180091e90();
      return;
    }
    lVar3 = *(longlong *)(param_1 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    local_28 = param_1 + 0x10;
    uVar5 = *(ulonglong *)(lVar3 + 0x30);
    do {
      LOCK();
      uVar1 = *(ulonglong *)(lVar3 + 0x30);
      bVar6 = uVar5 == uVar1;
      if (bVar6) {
        *(ulonglong *)(lVar3 + 0x30) = uVar5 | 4;
      }
      else {
        uVar5 = uVar1;
      }
      UNLOCK();
    } while (!bVar6);
    if (((uint)uVar5 & 10) == 8) {
      (**(code **)(*(longlong *)(lVar3 + 0x10) + 0x10))(*(undefined8 *)(lVar3 + 0x18));
    }
    if (((uint)uVar5 & 3) == 1) {
      LOCK();
      *(ulonglong *)(lVar3 + 0x30) = *(ulonglong *)(lVar3 + 0x30) & 0xfffffffffffffffe;
      UNLOCK();
      FUN_180177590(lVar3 + 0x20);
    }
    if ((uVar5 & 2) != 0) {
      memcpy(local_130,(void *)(lVar3 + 0x38),0x108);
      *(undefined8 *)(lVar3 + 0x38) = 5;
      if (local_130[0] != 5) {
        FUN_1800a62b0(local_130);
      }
    }
  }
  plVar4 = *(longlong **)local_28;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_18003d880();
      return;
    }
  }
  return;
}


