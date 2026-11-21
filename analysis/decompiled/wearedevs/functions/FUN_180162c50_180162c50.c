/* FUN_180162c50 @ 180162c50 */

void FUN_180162c50(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = *param_1;
  uVar3 = *(ulonglong *)(lVar2 + 0x30);
  if ((uVar3 & 1) != 0) {
    (**(code **)(*(longlong *)(lVar2 + 0x20) + 0x18))(*(undefined8 *)(lVar2 + 0x28));
  }
  if ((uVar3 & 8) != 0) {
    (**(code **)(*(longlong *)(lVar2 + 0x10) + 0x18))(*(undefined8 *)(lVar2 + 0x18));
  }
  if (lVar2 != -1) {
    LOCK();
    plVar1 = (longlong *)(lVar2 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      thunk_FUN_1801d3330(lVar2,0x40,8);
      return;
    }
  }
  return;
}


