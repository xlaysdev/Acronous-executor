/* FUN_1801139f0 @ 1801139f0 */

void FUN_1801139f0(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  bool bVar6;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 *local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_28 = *param_1;
  lVar2 = *(longlong *)(local_28 + 0x18);
  if (lVar2 != 0) {
    local_30 = (undefined8 *)(local_28 + 0x18);
    uVar5 = *(ulonglong *)(lVar2 + 0x30);
    do {
      LOCK();
      uVar1 = *(ulonglong *)(lVar2 + 0x30);
      bVar6 = uVar5 == uVar1;
      if (bVar6) {
        *(ulonglong *)(lVar2 + 0x30) = uVar5 | 4;
      }
      else {
        uVar5 = uVar1;
      }
      UNLOCK();
    } while (!bVar6);
    if (((uint)uVar5 & 10) == 8) {
      (**(code **)(*(longlong *)(lVar2 + 0x10) + 0x10))(*(undefined8 *)(lVar2 + 0x18));
    }
    if (((uint)uVar5 & 3) == 1) {
      LOCK();
      *(ulonglong *)(lVar2 + 0x30) = *(ulonglong *)(lVar2 + 0x30) & 0xfffffffffffffffe;
      UNLOCK();
      FUN_180177590(lVar2 + 0x20);
    }
    if ((uVar5 & 2) != 0) {
      local_38 = *(undefined8 *)(lVar2 + 0x68);
      lVar4 = *(longlong *)(lVar2 + 0x38);
      uStack_60 = *(undefined4 *)(lVar2 + 0x40);
      uStack_5c = *(undefined4 *)(lVar2 + 0x44);
      local_58 = *(undefined4 *)(lVar2 + 0x48);
      uStack_54 = *(undefined4 *)(lVar2 + 0x4c);
      uStack_50 = *(undefined4 *)(lVar2 + 0x50);
      uStack_4c = *(undefined4 *)(lVar2 + 0x54);
      local_48 = *(undefined4 *)(lVar2 + 0x58);
      uStack_44 = *(undefined4 *)(lVar2 + 0x5c);
      uStack_40 = *(undefined4 *)(lVar2 + 0x60);
      uStack_3c = *(undefined4 *)(lVar2 + 100);
      *(undefined8 *)(lVar2 + 0x38) = 0;
      if (lVar4 != 0) {
        FUN_180121830(&uStack_60);
      }
    }
    plVar3 = (longlong *)*local_30;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        FUN_180113f90();
      }
    }
  }
  if (local_28 != -1) {
    LOCK();
    plVar3 = (longlong *)(local_28 + 8);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      thunk_FUN_1801d3330(local_28,0x20,8);
      return;
    }
  }
  return;
}


