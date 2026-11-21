/* FUN_1800baa20 @ 1800baa20 */

longlong FUN_1800baa20(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  lVar3 = *param_1;
  lVar2 = -lVar3;
  if (!SBORROW8(0,lVar3)) {
    lVar1 = param_1[1];
    lVar4 = param_1[2];
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)(lVar1 + 8);
      do {
        if (puVar5[-1] != 0) {
          lVar2 = thunk_FUN_1801d3330(*puVar5,puVar5[-1],1);
        }
        puVar5 = puVar5 + 3;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_1801d3330(lVar1,lVar3 * 0x18,8);
      return lVar3;
    }
  }
  return lVar2;
}


