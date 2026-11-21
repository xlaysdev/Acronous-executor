/* FUN_18013bc70 @ 18013bc70 */

void FUN_18013bc70(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) != 0) {
    FUN_180200a50();
  }
  FUN_18013b670(lVar2 + 0x88);
  FUN_18013b4e0(lVar2 + 0x1d8);
  if (lVar2 != -1) {
    LOCK();
    plVar1 = (longlong *)(lVar2 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      thunk_FUN_1801d3330(lVar2,0x250,8);
      return;
    }
  }
  return;
}


