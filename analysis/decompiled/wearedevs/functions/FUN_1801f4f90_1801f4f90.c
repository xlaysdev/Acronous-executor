/* FUN_1801f4f90 @ 1801f4f90 */

undefined8 FUN_1801f4f90(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  char *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  char cVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
  bool bVar15;
  
  pcVar2 = (char *)param_1[2];
  uVar3 = *param_1;
  lVar4 = param_1[1];
  uVar8 = 0;
  bVar14 = false;
  uVar13 = 0;
  do {
    if (bVar14) {
      return 0;
    }
    if (param_3 < uVar8) {
    }
    else {
      uVar10 = uVar8;
      do {
        uVar8 = param_3 - uVar10;
        lVar1 = param_2 + uVar10;
        if (0xf < uVar8) {
          uVar9 = (lVar1 + 7U & 0xfffffffffffffff8) - lVar1;
          if (uVar9 == 0) {
            uVar9 = 0;
          }
          else {
            uVar12 = 0;
            do {
              if (*(char *)(lVar1 + uVar12) == '\n') goto LAB_1801f5180;
              uVar12 = uVar12 + 1;
            } while (uVar9 != uVar12);
            uVar12 = uVar9;
            if (uVar8 - 0x10 < uVar9) goto joined_r0x0001801f515e;
          }
          lVar11 = param_2 + 8 + uVar10;
          do {
            uVar5 = *(ulonglong *)(lVar11 + -8 + uVar9);
            uVar6 = *(ulonglong *)(lVar11 + uVar9);
            uVar12 = uVar9;
            if ((~(((uVar6 ^ 0xf5f5f5f5f5f5f5f5) + 0x101010101010101 | uVar6) &
                  ((uVar5 ^ 0xf5f5f5f5f5f5f5f5) + 0x101010101010101 | uVar5)) & 0x8080808080808080)
                != 0) break;
            uVar9 = uVar9 + 0x10;
            uVar12 = uVar9;
          } while (uVar9 <= uVar8 - 0x10);
joined_r0x0001801f515e:
          do {
            if (uVar8 == uVar12) goto LAB_1801f51b0;
            if (*(char *)(lVar1 + uVar12) == '\n') goto LAB_1801f5180;
            uVar12 = uVar12 + 1;
          } while( true );
        }
        if (param_3 == uVar10) {
LAB_1801f51b0:
          uVar8 = param_3;
          break;
        }
        uVar12 = 0;
        while (*(char *)(lVar1 + uVar12) != '\n') {
          uVar12 = uVar12 + 1;
          if (uVar8 == uVar12) goto LAB_1801f51b0;
        }
LAB_1801f5180:
        uVar8 = uVar10 + uVar12 + 1;
        if ((uVar10 + uVar12 < param_3) && (*(char *)(uVar12 + lVar1) == '\n')) {
          bVar14 = false;
          uVar10 = uVar8;
          uVar9 = uVar8;
          goto LAB_1801f51ca;
        }
        uVar10 = uVar8;
      } while (uVar8 <= param_3);
    }
    bVar14 = true;
    uVar10 = param_3;
    uVar9 = uVar13;
    if (param_3 == uVar13) {
      return 0;
    }
LAB_1801f51ca:
    if ((*pcVar2 != '\0') &&
       (cVar7 = (**(code **)(lVar4 + 0x18))(uVar3,&DAT_180294788,4), cVar7 != '\0')) {
      return 1;
    }
    if (uVar10 == uVar13) {
      bVar15 = false;
    }
    else {
      bVar15 = *(char *)(param_2 + -1 + uVar10) == '\n';
    }
    *pcVar2 = bVar15;
    cVar7 = (**(code **)(lVar4 + 0x18))(uVar3,uVar13 + param_2,uVar10 - uVar13);
    uVar13 = uVar9;
    if (cVar7 != '\0') {
      return 1;
    }
  } while( true );
}


