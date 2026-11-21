/* FUN_1801d0120 @ 1801d0120 */

undefined8 FUN_1801d0120(longlong param_1,ulonglong *param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (*(ulonglong *)(param_1 + 0x80) <= param_3) {
    uVar3 = FUN_1801cf370();
    return uVar3;
  }
  if (param_3 != 0) {
    bVar2 = *(byte *)(param_1 + 0xa8);
    if (param_3 < 8) {
      if (bVar2 == (byte)*param_2) {
        return 1;
      }
      if (param_3 != 1) {
        if (bVar2 == *(byte *)((longlong)param_2 + 1)) {
          return 1;
        }
        if (param_3 != 2) {
          if (bVar2 == *(byte *)((longlong)param_2 + 2)) {
            return 1;
          }
          if (param_3 != 3) {
            if (bVar2 == *(byte *)((longlong)param_2 + 3)) {
              return 1;
            }
            if (param_3 != 4) {
              if (bVar2 == *(byte *)((longlong)param_2 + 4)) {
                return 1;
              }
              if (param_3 != 5) {
                if (bVar2 == *(byte *)((longlong)param_2 + 5)) {
                  return 1;
                }
                if ((param_3 != 6) && (bVar2 == *(byte *)((longlong)param_2 + 6))) {
                  return 1;
                }
              }
            }
          }
        }
      }
    }
    else {
      uVar4 = (ulonglong)bVar2 * 0x101010101010101;
      if ((~(0x101010101010100 - (*param_2 ^ uVar4) | *param_2 ^ uVar4) & 0x8080808080808080) != 0)
      {
        do {
          if (bVar2 == (byte)*param_2) {
            return 1;
          }
          param_2 = (ulonglong *)((longlong)param_2 + 1);
          param_3 = param_3 - 1;
        } while (param_3 != 0);
        return 0;
      }
      puVar1 = (ulonglong *)((longlong)param_2 + param_3);
      uVar5 = (ulonglong)((uint)param_2 & 7);
      param_2 = (ulonglong *)((longlong)param_2 + (8 - uVar5));
      if (param_3 < 0x11) {
        if (8 - uVar5 < param_3) {
          do {
            if (bVar2 == (byte)*param_2) {
              return 1;
            }
            param_2 = (ulonglong *)((longlong)param_2 + 1);
          } while (param_2 < puVar1);
          return 0;
        }
      }
      else {
        while (((param_2 <= puVar1 + -2 &&
                ((~(0x101010101010100 - (*param_2 ^ uVar4) | *param_2 ^ uVar4) & 0x8080808080808080)
                 == 0)) &&
               ((~(0x101010101010100 - (param_2[1] ^ uVar4) | param_2[1] ^ uVar4) &
                0x8080808080808080) == 0))) {
          param_2 = param_2 + 2;
        }
        if (param_2 < puVar1) {
          do {
            if (bVar2 == (byte)*param_2) {
              return 1;
            }
            param_2 = (ulonglong *)((longlong)param_2 + 1);
          } while (param_2 != puVar1);
          return 0;
        }
      }
    }
  }
  return 0;
}


