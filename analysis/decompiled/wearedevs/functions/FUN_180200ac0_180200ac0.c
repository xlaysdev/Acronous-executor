/* FUN_180200ac0 @ 180200ac0 */

undefined8 FUN_180200ac0(longlong *param_1,longlong param_2,uint param_3,char param_4)

{
  int *piVar1;
  ulonglong uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  int *piVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  int *piVar11;
  int *piVar12;
  
  if (param_4 == '\0') {
    lVar8 = *param_1;
    piVar1 = (int *)param_1[2];
    param_2 = param_2 + lVar8;
    uVar2 = param_1[3];
    if (uVar2 < 4) {
      do {
        uVar9 = CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
        if (uVar2 == 0) {
          return uVar9;
        }
        uVar4 = 0;
        for (uVar5 = param_3; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar10 = (ulonglong)uVar4;
        if (*(char *)(param_2 + 1 + uVar10) == (char)*piVar1) {
          if (uVar2 == 1) {
            return uVar9;
          }
          if (*(char *)(param_2 + 2 + uVar10) == *(char *)((longlong)piVar1 + 1)) {
            if (uVar2 == 2) {
              return uVar9;
            }
            if (*(char *)(param_2 + 3 + uVar10) == *(char *)((longlong)piVar1 + 2) && uVar2 == 3) {
              return uVar9;
            }
          }
        }
        bVar3 = (byte)uVar4 & 0xf;
        uVar6 = -2 << bVar3 | 0xfffeU >> 0x10 - bVar3;
        lVar8 = CONCAT62((int6)((ulonglong)lVar8 >> 0x10),uVar6);
        uVar6 = (ushort)param_3 & uVar6;
        param_3 = CONCAT22((short)(param_3 >> 0x10),uVar6);
      } while (uVar6 != 0);
    }
    else {
      do {
        uVar4 = 0;
        for (uVar5 = param_3; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        piVar12 = (int *)(param_2 + 1 + (ulonglong)uVar4);
        piVar7 = (int *)((longlong)piVar12 + (uVar2 - 4));
        if (piVar12 < piVar7) {
          piVar11 = piVar1;
          do {
            if (*piVar12 != *piVar11) goto LAB_180200afd;
            piVar12 = piVar12 + 1;
            piVar11 = piVar11 + 1;
          } while (piVar12 < piVar7);
        }
        if (*piVar7 == *(int *)((longlong)piVar1 + (uVar2 - 4))) {
          return CONCAT71((uint7)(uint3)((uint)*piVar7 >> 8),1);
        }
LAB_180200afd:
        bVar3 = (byte)uVar4 & 0xf;
        uVar6 = (ushort)param_3 & (-2 << bVar3 | 0xfffeU >> 0x10 - bVar3);
        param_3 = CONCAT22((short)(param_3 >> 0x10),uVar6);
      } while (uVar6 != 0);
    }
  }
  return 0;
}


