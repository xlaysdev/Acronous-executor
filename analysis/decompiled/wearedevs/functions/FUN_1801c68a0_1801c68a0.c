/* FUN_1801c68a0 @ 1801c68a0 */

void FUN_1801c68a0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = *param_1;
  puVar3 = (undefined8 *)(*(ulonglong *)(lVar2 + 0x80) & 0xfffffffffffffff8);
  if (puVar3[1] != 0) {
    thunk_FUN_1801d3330(*puVar3,puVar3[1] << 4,8);
  }
  thunk_FUN_1801d3330(puVar3,0x10,8);
  if (lVar2 != -1) {
    LOCK();
    plVar1 = (longlong *)(lVar2 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      thunk_FUN_1801d3330(lVar2,0x180,0x80);
      return;
    }
  }
  return;
}


