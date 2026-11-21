/* FUN_180043c70 @ 180043c70 */

void FUN_180043c70(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_1801d3330(param_1[1],*param_1 * 0x12,1);
  }
  lVar1 = param_1[4];
  lVar2 = param_1[5];
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(lVar1 + 8);
    do {
      if (puVar3[-1] != 0) {
        thunk_FUN_1801d3330(*puVar3,puVar3[-1],1);
      }
      puVar3 = puVar3 + 3;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if (param_1[3] == 0) {
    return;
  }
  thunk_FUN_1801d3330(lVar1,param_1[3] * 0x18,8);
  return;
}


