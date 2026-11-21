/* FUN_18003df30 @ 18003df30 */

void FUN_18003df30(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  FUN_18003c2f0(*(undefined8 *)(lVar2 + 0x10));
  if (*(longlong *)(lVar2 + 0x20) != 0) {
    (**(code **)(*(longlong *)(lVar2 + 0x20) + 0x18))(*(undefined8 *)(lVar2 + 0x28));
  }
  if (*(longlong *)(lVar2 + 0x38) != 0) {
    (**(code **)(*(longlong *)(lVar2 + 0x38) + 0x18))(*(undefined8 *)(lVar2 + 0x40));
  }
  if (lVar2 != -1) {
    LOCK();
    plVar1 = (longlong *)(lVar2 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      thunk_FUN_1801d3330(lVar2,0x58,8);
      return;
    }
  }
  return;
}


