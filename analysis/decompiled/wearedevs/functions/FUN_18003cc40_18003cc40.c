/* FUN_18003cc40 @ 18003cc40 */

void FUN_18003cc40(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar2 = *param_1;
  puVar3 = (undefined8 *)param_1[1];
  uVar4 = puVar3[2];
  if ((code *)*puVar3 != (code *)0x0) {
    (*(code *)*puVar3)((uVar4 - 1 & 0xfffffffffffffff0) + lVar2 + 0x10);
  }
  if (lVar2 != -1) {
    LOCK();
    plVar1 = (longlong *)(lVar2 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      uVar5 = 8;
      if (8 < uVar4) {
        uVar5 = uVar4;
      }
      if ((-uVar5 & puVar3[1] + uVar5 + 0xf) != 0) {
        thunk_FUN_1801d3330();
        return;
      }
    }
  }
  return;
}


