/* FUN_18007f440 @ 18007f440 */

void FUN_18007f440(ulonglong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong local_40;
  longlong local_38;
  
  uVar5 = param_1[3];
  if (uVar5 == 0) {
    local_40 = 0;
    uVar10 = 0;
    lVar9 = 0;
  }
  else {
    uVar10 = *param_1;
    uVar11 = 0;
    if (uVar10 <= param_1[2]) {
      uVar11 = uVar10;
    }
    lVar9 = param_1[2] - uVar11;
    local_40 = uVar5 - (uVar10 - lVar9);
    if (uVar5 < uVar10 - lVar9 || local_40 == 0) {
      uVar10 = uVar5 + lVar9;
      local_40 = 0;
    }
  }
  uVar5 = param_1[1];
  lVar1 = uVar5 + lVar9 * 8;
  local_38 = 0;
  while (local_38 != uVar10 - lVar9) {
    puVar2 = (undefined8 *)(lVar1 + local_38 * 8);
    lVar6 = *(longlong *)(lVar1 + local_38 * 8);
    local_38 = local_38 + 1;
    LOCK();
    *(undefined1 *)(lVar6 + 0x80) = 1;
    UNLOCK();
    LOCK();
    cVar3 = *(char *)(lVar6 + 0x60);
    *(char *)(lVar6 + 0x60) = '\x01';
    UNLOCK();
    if (cVar3 == '\0') {
      lVar7 = *(longlong *)(lVar6 + 0x50);
      *(undefined8 *)(lVar6 + 0x50) = 0;
      LOCK();
      *(undefined1 *)(lVar6 + 0x60) = 0;
      UNLOCK();
      if (lVar7 != 0) {
        (**(code **)(lVar7 + 8))(*(undefined8 *)(lVar6 + 0x58));
      }
    }
    LOCK();
    cVar3 = *(char *)(lVar6 + 0x78);
    *(char *)(lVar6 + 0x78) = '\x01';
    UNLOCK();
    if (cVar3 == '\0') {
      lVar7 = *(longlong *)(lVar6 + 0x68);
      *(undefined8 *)(lVar6 + 0x68) = 0;
      if (lVar7 != 0) {
        (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar6 + 0x70));
      }
      LOCK();
      *(undefined1 *)(lVar6 + 0x78) = 0;
      UNLOCK();
      plVar8 = (longlong *)*puVar2;
      LOCK();
      *plVar8 = *plVar8 + -1;
      lVar6 = *plVar8;
      UNLOCK();
    }
    else {
      plVar8 = (longlong *)*puVar2;
      LOCK();
      *plVar8 = *plVar8 + -1;
      lVar6 = *plVar8;
      UNLOCK();
    }
    if (lVar6 == 0) {
      FUN_18003ce90();
    }
  }
  lVar9 = 0;
  while (lVar9 != local_40) {
    puVar2 = (undefined8 *)(uVar5 + lVar9 * 8);
    lVar1 = *(longlong *)(uVar5 + lVar9 * 8);
    lVar9 = lVar9 + 1;
    LOCK();
    *(undefined1 *)(lVar1 + 0x80) = 1;
    UNLOCK();
    LOCK();
    cVar3 = *(char *)(lVar1 + 0x60);
    *(char *)(lVar1 + 0x60) = '\x01';
    UNLOCK();
    if (cVar3 == '\0') {
      lVar6 = *(longlong *)(lVar1 + 0x50);
      *(undefined8 *)(lVar1 + 0x50) = 0;
      LOCK();
      uVar4 = *(undefined1 *)(lVar1 + 0x60);
      *(undefined1 *)(lVar1 + 0x60) = 0;
      UNLOCK();
      if (lVar6 != 0) {
        (**(code **)(lVar6 + 8))(*(undefined8 *)(lVar1 + 0x58),uVar4);
      }
    }
    LOCK();
    cVar3 = *(char *)(lVar1 + 0x78);
    *(char *)(lVar1 + 0x78) = '\x01';
    UNLOCK();
    if (cVar3 == '\0') {
      lVar6 = *(longlong *)(lVar1 + 0x68);
      *(undefined8 *)(lVar1 + 0x68) = 0;
      if (lVar6 != 0) {
        (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar1 + 0x70));
      }
      LOCK();
      *(undefined1 *)(lVar1 + 0x78) = 0;
      UNLOCK();
      plVar8 = (longlong *)*puVar2;
      LOCK();
      *plVar8 = *plVar8 + -1;
      lVar1 = *plVar8;
      UNLOCK();
    }
    else {
      plVar8 = (longlong *)*puVar2;
      LOCK();
      *plVar8 = *plVar8 + -1;
      lVar1 = *plVar8;
      UNLOCK();
    }
    if (lVar1 == 0) {
      FUN_18003ce90();
    }
  }
  return;
}


