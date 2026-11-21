/* FUN_18009aab0 @ 18009aab0 */

longlong FUN_18009aab0(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  bool bVar7;
  
  uVar1 = *param_1;
  lVar4 = -0x7fffffffffffffff;
  if (((uVar1 < 0x8000000000000002) && (uVar1 != 0x8000000000000001)) &&
     (lVar4 = -uVar1, !SBORROW8(0,uVar1))) {
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    lVar4 = 0;
    if (uVar3 != 0) {
      puVar6 = (undefined8 *)(uVar2 + 0x18);
      uVar5 = 1;
      do {
        if (puVar6[-3] != 0) {
          (**(code **)(puVar6[-3] + 0x20))(*puVar6,puVar6[-2],puVar6[-1]);
        }
        puVar6 = puVar6 + 4;
        bVar7 = uVar5 != uVar3;
        lVar4 = 1;
        uVar5 = uVar5 + 1;
      } while (bVar7);
    }
    if (uVar1 != 0) {
      lVar4 = thunk_FUN_1801d3330(uVar2,uVar1 << 5,8);
      return lVar4;
    }
  }
  return lVar4;
}


