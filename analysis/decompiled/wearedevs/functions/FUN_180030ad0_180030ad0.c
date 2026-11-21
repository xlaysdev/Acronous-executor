/* FUN_180030ad0 @ 180030ad0 */

void FUN_180030ad0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 8) + 0x50);
    do {
      if (puVar3[-10] != 0) {
        thunk_FUN_1801d3330(puVar3[-9],puVar3[-10],1);
      }
      if (puVar3[-7] != 0) {
        thunk_FUN_1801d3330(puVar3[-6],puVar3[-7],1);
      }
      lVar1 = puVar3[-1];
      if ((!SBORROW8(0,lVar1)) && (lVar1 != 0)) {
        thunk_FUN_1801d3330(*puVar3,lVar1,1);
      }
      if (puVar3[-4] != 0) {
        thunk_FUN_1801d3330(puVar3[-3],puVar3[-4],1);
      }
      puVar3 = puVar3 + 0xe;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}


