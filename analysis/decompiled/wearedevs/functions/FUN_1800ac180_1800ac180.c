/* FUN_1800ac180 @ 1800ac180 */

void FUN_1800ac180(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 local_160 [256];
  longlong local_60;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  lVar6 = *param_1;
  if (*(char *)(lVar6 + 0x1b8) == '\0') {
    *(undefined1 *)(lVar6 + 0x1b8) = 1;
  }
  lVar1 = lVar6 + 0x1c0;
  LOCK();
  *(ulonglong *)(lVar6 + 0x1c0) = *(ulonglong *)(lVar6 + 0x1c0) | 1;
  UNLOCK();
  FUN_180166e40(lVar6 + 0x180);
  lVar2 = lVar6 + 0x1a0;
  lVar3 = lVar6 + 0x80;
  uVar8 = *(ulonglong *)(lVar6 + 0x110);
  do {
    LOCK();
    uVar4 = *(ulonglong *)(lVar6 + 0x110);
    bVar9 = uVar8 == uVar4;
    if (bVar9) {
      *(ulonglong *)(lVar6 + 0x110) = uVar8 | 2;
    }
    else {
      uVar8 = uVar4;
    }
    UNLOCK();
  } while (!bVar9);
  local_48 = lVar2;
  local_40 = lVar3;
  local_38 = lVar1;
  if (uVar8 == 0) {
    lVar7 = *(longlong *)(lVar6 + 0x100);
    *(undefined8 *)(lVar6 + 0x100) = 0;
    LOCK();
    uVar5 = *(undefined8 *)(lVar6 + 0x110);
    *(undefined8 *)(lVar6 + 0x110) = 0;
    UNLOCK();
    if (lVar7 != 0) {
      (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar6 + 0x108),uVar5);
    }
  }
  while( true ) {
    FUN_18009c180(local_160,lVar2,lVar3);
    if (local_60 - 3U < 2) break;
    FUN_180177220(lVar1);
    if (1 < local_60 - 3U) {
      FUN_1800a5ed0(local_160);
    }
  }
  FUN_18009c180(local_160,lVar2,lVar3);
  if (1 < local_60 - 3U) {
    do {
      FUN_180177220(lVar1);
      if (1 < local_60 - 3U) {
        FUN_1800a5ed0(local_160);
      }
      FUN_18009c180(local_160,lVar2,lVar3);
    } while (1 < local_60 - 3U);
  }
  return;
}


