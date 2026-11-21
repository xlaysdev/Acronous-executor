/* FUN_18003cda0 @ 18003cda0 */

void FUN_18003cda0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  if (*(longlong *)(lVar2 + 0x10) != 0) {
    (**(code **)(*(longlong *)(lVar2 + 0x10) + 0x18))(*(undefined8 *)(lVar2 + 0x18));
  }
  if (*(longlong *)(lVar2 + 0x28) != 0) {
    (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x18))(*(undefined8 *)(lVar2 + 0x30));
  }
  if (lVar2 != -1) {
    LOCK();
    plVar1 = (longlong *)(lVar2 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      thunk_FUN_1801d3330(lVar2,0x48,8);
      return;
    }
  }
  return;
}


