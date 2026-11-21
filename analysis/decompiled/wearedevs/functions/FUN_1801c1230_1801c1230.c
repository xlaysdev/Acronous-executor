/* FUN_1801c1230 @ 1801c1230 */

void FUN_1801c1230(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x20),*(longlong *)(param_1 + 0x18),1);
  }
  lVar1 = *(longlong *)(param_1 + 0x40);
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(lVar1 + 8);
    do {
      if (puVar4[-1] != 0) {
        thunk_FUN_1801d3330(*puVar4,puVar4[-1],1);
      }
      puVar4 = puVar4 + 4;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    thunk_FUN_1801d3330(lVar1,*(longlong *)(param_1 + 0x38) << 5,8);
  }
  lVar1 = *(longlong *)(param_1 + 0x68);
  if ((!SBORROW8(0,lVar1)) && (lVar1 != 0)) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x70),lVar1,1);
  }
  lVar1 = *(longlong *)(param_1 + 0x88);
  if ((!SBORROW8(0,lVar1)) && (lVar1 != 0)) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x90),lVar1,1);
  }
  lVar1 = *(longlong *)(param_1 + 0x58);
  lVar3 = *(longlong *)(param_1 + 0x60);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(lVar1 + 8);
    do {
      if (puVar4[-1] != 0) {
        thunk_FUN_1801d3330(*puVar4,puVar4[-1],1);
      }
      puVar4 = puVar4 + 4;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    thunk_FUN_1801d3330(lVar1,*(longlong *)(param_1 + 0x50) << 5,8);
  }
  lVar1 = *(longlong *)(param_1 + 0xa0);
  if ((!SBORROW8(0,lVar1)) && (lVar1 != 0)) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0xa8),lVar1,1);
  }
  lVar1 = *(longlong *)(param_1 + 0xc0);
  if ((!SBORROW8(0,lVar1)) && (lVar1 != 0)) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 200),lVar1,1);
  }
  plVar2 = *(longlong **)(param_1 + 0x100);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_1801b4f50(param_1 + 0x100);
      return;
    }
  }
  return;
}


