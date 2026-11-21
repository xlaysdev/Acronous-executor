/* FUN_1800515a0 @ 1800515a0 */

void FUN_1800515a0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  bool bVar6;
  
  lVar1 = *param_1;
  if (-0x7fffffffffffffff < lVar1) {
    lVar2 = param_1[1];
    lVar3 = param_1[2];
    if (lVar3 != 0) {
      puVar5 = (undefined8 *)(lVar2 + 0x18);
      lVar4 = 1;
      do {
        if (puVar5[-3] != 0) {
          (**(code **)(puVar5[-3] + 0x20))(*puVar5,puVar5[-2],puVar5[-1]);
        }
        puVar5 = puVar5 + 4;
        bVar6 = lVar4 != lVar3;
        lVar4 = lVar4 + 1;
      } while (bVar6);
    }
    if (lVar1 != 0) {
      thunk_FUN_1801d3330(lVar2,lVar1 << 5,8);
      return;
    }
  }
  return;
}


