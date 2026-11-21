/* FUN_180114410 @ 180114410 */

void FUN_180114410(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  bool bVar6;
  
  lVar1 = *(longlong *)(param_1 + 0xe8);
  if (-1 < lVar1) {
    lVar2 = *(longlong *)(param_1 + 0xf0);
    lVar3 = *(longlong *)(param_1 + 0xf8);
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
    }
  }
  *(undefined8 *)(param_1 + 0xe8) = 0x8000000000000005;
  *(undefined1 *)(param_1 + 0x145) = 2;
  return;
}


