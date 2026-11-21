/* FUN_1800a6500 @ 1800a6500 */

void FUN_1800a6500(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  bool bVar5;
  int local_130 [66];
  longlong *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  lVar2 = *param_1;
  if (lVar2 != 0) {
    uVar4 = *(ulonglong *)(lVar2 + 0x30);
    do {
      LOCK();
      uVar1 = *(ulonglong *)(lVar2 + 0x30);
      bVar5 = uVar4 == uVar1;
      if (bVar5) {
        *(ulonglong *)(lVar2 + 0x30) = uVar4 | 4;
      }
      else {
        uVar4 = uVar1;
      }
      UNLOCK();
    } while (!bVar5);
    local_28 = param_1;
    if (((uint)uVar4 & 10) == 8) {
      (**(code **)(*(longlong *)(lVar2 + 0x10) + 0x10))(*(undefined8 *)(lVar2 + 0x18));
    }
    if (((uint)uVar4 & 3) == 1) {
      LOCK();
      *(ulonglong *)(lVar2 + 0x30) = *(ulonglong *)(lVar2 + 0x30) & 0xfffffffffffffffe;
      UNLOCK();
      FUN_180177590(lVar2 + 0x20);
    }
    if ((uVar4 & 2) != 0) {
      memcpy(local_130,(void *)(lVar2 + 0x38),0x108);
      *(undefined8 *)(lVar2 + 0x38) = 5;
      if (local_130[0] != 5) {
        FUN_1800a62b0(local_130);
      }
    }
    plVar3 = (longlong *)*local_28;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        FUN_18003d880();
      }
    }
  }
  return;
}


