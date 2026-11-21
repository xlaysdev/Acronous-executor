/* FUN_180162e30 @ 180162e30 */

void FUN_180162e30(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  FUN_180180a10(lVar2 + 0x80,0x2f);
  if (*(longlong *)(lVar2 + 0xb0) != 0) {
    (**(code **)(*(longlong *)(lVar2 + 0xb0) + 0x18))(*(undefined8 *)(lVar2 + 0xb8));
  }
  if (*(longlong *)(lVar2 + 0xc0) != 0) {
    (**(code **)(*(longlong *)(lVar2 + 0xc0) + 0x18))(*(undefined8 *)(lVar2 + 200));
  }
  if (lVar2 != -1) {
    LOCK();
    plVar1 = (longlong *)(lVar2 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      thunk_FUN_1801d3330(lVar2,0x100,0x80);
      return;
    }
  }
  return;
}


