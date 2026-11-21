/* FUN_180099b90 @ 180099b90 */

void FUN_180099b90(byte *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  FUN_1800812e0();
  if (1 < *param_1) {
    plVar1 = *(longlong **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x20))(plVar1[3],plVar1[1],plVar1[2]);
    thunk_FUN_1801d3330(plVar1,0x20,8);
  }
  (**(code **)(*(longlong *)(param_1 + 0x10) + 0x20))
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x18),
             *(undefined8 *)(param_1 + 0x20));
  lVar2 = *(longlong *)(param_1 + 0x30);
  if (1 < lVar2 + 1U) {
    LOCK();
    plVar1 = (longlong *)(lVar2 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      thunk_FUN_1801d3330(lVar2,0xe8,8);
      return;
    }
  }
  return;
}


