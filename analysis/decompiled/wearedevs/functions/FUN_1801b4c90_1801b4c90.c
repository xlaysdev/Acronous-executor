/* FUN_1801b4c90 @ 1801b4c90 */

void FUN_1801b4c90(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x18),*(longlong *)(param_1 + 0x10),1);
  }
  lVar1 = *(longlong *)(param_1 + 0x38);
  lVar3 = *(longlong *)(param_1 + 0x40);
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
  if (*(longlong *)(param_1 + 0x30) != 0) {
    thunk_FUN_1801d3330(lVar1,*(longlong *)(param_1 + 0x30) << 5,8);
  }
  lVar1 = *(longlong *)(param_1 + 0x60);
  if ((!SBORROW8(0,lVar1)) && (lVar1 != 0)) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x68),lVar1,1);
  }
  lVar1 = *(longlong *)(param_1 + 0x80);
  if ((!SBORROW8(0,lVar1)) && (lVar1 != 0)) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x88),lVar1,1);
  }
  lVar1 = *(longlong *)(param_1 + 0x50);
  lVar3 = *(longlong *)(param_1 + 0x58);
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
  if (*(longlong *)(param_1 + 0x48) != 0) {
    thunk_FUN_1801d3330(lVar1,*(longlong *)(param_1 + 0x48) << 5,8);
  }
  lVar1 = *(longlong *)(param_1 + 0x98);
  if ((!SBORROW8(0,lVar1)) && (lVar1 != 0)) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0xa0),lVar1,1);
  }
  lVar1 = *(longlong *)(param_1 + 0xb8);
  if ((!SBORROW8(0,lVar1)) && (lVar1 != 0)) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0xc0),lVar1,1);
  }
  plVar2 = *(longlong **)(param_1 + 0xf8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_1801b4f50(param_1 + 0xf8);
      return;
    }
  }
  return;
}


