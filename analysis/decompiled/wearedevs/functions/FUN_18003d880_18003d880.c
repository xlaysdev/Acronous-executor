/* FUN_18003d880 @ 18003d880 */

void FUN_18003d880(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = *param_1;
  uVar3 = *(ulonglong *)(lVar2 + 0x30);
  if ((uVar3 & 1) != 0) {
    FUN_180177590(lVar2 + 0x20);
  }
  if ((uVar3 & 8) != 0) {
    FUN_180177590(lVar2 + 0x10);
  }
  FUN_18003b350(lVar2 + 0x38);
  if (lVar2 != -1) {
    LOCK();
    plVar1 = (longlong *)(lVar2 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      thunk_FUN_1801d3330(lVar2,0x140,8);
      return;
    }
  }
  return;
}


