/* FUN_1801bb120 @ 1801bb120 */

void FUN_1801bb120(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 8) + 8);
    do {
      if (puVar2[-1] != 0) {
        thunk_FUN_1801d3330(*puVar2,puVar2[-1],1);
      }
      puVar2 = puVar2 + 4;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}


