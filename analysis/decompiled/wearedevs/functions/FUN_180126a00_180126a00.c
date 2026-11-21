/* FUN_180126a00 @ 180126a00 */

void FUN_180126a00(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  bool bVar5;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  if (lVar2 != 0) {
    puVar4 = (undefined8 *)(lVar1 + 0x18);
    lVar3 = 1;
    do {
      if (puVar4[-3] != 0) {
        (**(code **)(puVar4[-3] + 0x20))(*puVar4,puVar4[-2],puVar4[-1]);
      }
      puVar4 = puVar4 + 4;
      bVar5 = lVar3 != lVar2;
      lVar3 = lVar3 + 1;
    } while (bVar5);
  }
  if (*param_1 == 0) {
    return;
  }
  thunk_FUN_1801d3330(lVar1,*param_1 << 5,8);
  return;
}


