/* FUN_180163890 @ 180163890 */

void FUN_180163890(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  thunk_FUN_1801d3330(*(undefined8 *)(lVar2 + 0x10),0x800,8);
  if (lVar2 != -1) {
    LOCK();
    plVar1 = (longlong *)(lVar2 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      thunk_FUN_1801d3330(lVar2,0x28,8);
      return;
    }
  }
  return;
}


