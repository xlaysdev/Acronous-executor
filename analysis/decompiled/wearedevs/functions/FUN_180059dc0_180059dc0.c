/* FUN_180059dc0 @ 180059dc0 */

void FUN_180059dc0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  bool bVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 0x80) == 3) {
    uVar1 = *(ulonglong *)(param_1 + 0xe8);
    lVar2 = 1;
    if (0x8000000000000001 < uVar1) {
      lVar2 = uVar1 + 0x7ffffffffffffffe;
    }
    if (lVar2 == 2) {
      if (*(char *)(param_1 + 0x145) != '\x01') goto LAB_180059f25;
      if (((*(byte *)(param_1 + 0x108) != 0xc) && (10 < *(byte *)(param_1 + 0x108))) &&
         (*(longlong *)(param_1 + 0x118) != 0)) {
        thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x110),*(longlong *)(param_1 + 0x118),1);
      }
      *(undefined1 *)(param_1 + 0x108) = 0xc;
      *(undefined1 *)(param_1 + 0x145) = 0;
      *(undefined8 *)(param_1 + 0x80) = 0;
      if (-1 < (longlong)uVar1) {
        lVar2 = *(longlong *)(param_1 + 0xf8);
        if (lVar2 != 0) {
          lVar6 = *(longlong *)(param_1 + 0xf0);
          puVar4 = (undefined8 *)(lVar6 + 0x18);
          lVar3 = 1;
          do {
            if (puVar4[-3] != 0) {
              (**(code **)(puVar4[-3] + 0x20))(*puVar4,puVar4[-2],puVar4[-1],param_4,lVar6);
            }
            puVar4 = puVar4 + 4;
            bVar5 = lVar3 != lVar2;
            lVar3 = lVar3 + 1;
          } while (bVar5);
        }
        if (*(longlong *)(param_1 + 0xe8) != 0) {
          thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0xf0),*(longlong *)(param_1 + 0xe8) << 5,8);
        }
      }
      *(undefined8 *)(param_1 + 0xe8) = 0x8000000000000002;
      *(undefined1 *)(param_1 + 0x143) = 1;
    }
    else if (lVar2 == 3) {
LAB_180059f25:
      FUN_1801146e0(param_1);
      return;
    }
  }
  else if (((int)*(longlong *)(param_1 + 0x80) == 4) &&
          (*(longlong *)(param_1 + 0xe8) == -0x7ffffffffffffffc)) goto LAB_180059f25;
  return;
}


