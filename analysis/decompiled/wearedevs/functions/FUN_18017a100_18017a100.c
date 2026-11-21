/* FUN_18017a100 @ 18017a100 */

void FUN_18017a100(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != 0) {
    uVar5 = *(ulonglong *)(lVar2 + 0x30);
    do {
      uVar4 = uVar5;
      if ((uVar4 & 4) != 0) goto LAB_18017a15a;
      LOCK();
      uVar1 = *(ulonglong *)(lVar2 + 0x30);
      if (uVar4 == uVar1) {
        *(ulonglong *)(lVar2 + 0x30) = uVar4 | 2;
        uVar5 = uVar4;
      }
      else {
        uVar5 = uVar1;
      }
      UNLOCK();
    } while (uVar4 != uVar1);
    if ((uVar4 & 1) != 0) {
      (**(code **)(*(longlong *)(lVar2 + 0x20) + 0x10))(*(undefined8 *)(lVar2 + 0x28));
    }
LAB_18017a15a:
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        FUN_180162c50();
        return;
      }
    }
  }
  return;
}


