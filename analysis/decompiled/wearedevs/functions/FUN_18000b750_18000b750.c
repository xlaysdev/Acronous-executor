/* FUN_18000b750 @ 18000b750 */

void FUN_18000b750(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(lVar1 + 8);
    do {
      if (puVar3[-1] != 0) {
        thunk_FUN_1801d3330(*puVar3,puVar3[-1],1);
      }
      puVar3 = puVar3 + 0xb;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if (*param_1 == 0) {
    return;
  }
  thunk_FUN_1801d3330(lVar1,*param_1 * 0x58,8);
  return;
}


