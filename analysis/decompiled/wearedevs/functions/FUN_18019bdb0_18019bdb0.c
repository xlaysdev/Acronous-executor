/* FUN_18019bdb0 @ 18019bdb0 */

undefined8 FUN_18019bdb0(short *param_1,ulonglong param_2)

{
  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  
  uVar9 = 2;
  if (param_2 != 0) {
    if (param_2 == 1) {
LAB_18019bdcb:
      uVar11 = 0;
      while (param_2 != uVar11) {
        pcVar1 = (char *)((longlong)param_1 + uVar11);
        uVar11 = uVar11 + 1;
        if (9 < (byte)(*pcVar1 - 0x30U)) {
          return 2;
        }
      }
      cVar3 = (char)*param_1;
      lVar13 = 10;
      bVar6 = false;
      bVar5 = false;
joined_r0x00018019bece:
      if (param_2 == 1) {
        if (cVar3 == '+') {
          return 0;
        }
        bVar5 = bVar6;
        if (cVar3 == '-') {
          return 0;
        }
      }
      uVar11 = (ulonglong)(cVar3 == '+');
      uVar12 = (uint)lVar13;
      if (param_2 - uVar11 < 9) {
        if (param_2 == uVar11) {
          return 1;
        }
        lVar13 = param_2 + -uVar11;
        lVar14 = 0;
        if (bVar5) {
          do {
            bVar4 = *(byte *)((longlong)param_1 + lVar14 + uVar11);
            uVar10 = bVar4 - 0x30;
            if (0x39 < bVar4) {
              uVar10 = (bVar4 - 0x41 & 0xffffffdf) + 10;
            }
            if (uVar12 <= uVar10) {
              return 0;
            }
            lVar14 = lVar14 + 1;
          } while (lVar14 != lVar13);
        }
        else {
          do {
            if (uVar12 <= *(byte *)((longlong)param_1 + lVar14 + uVar11) - 0x30) {
              return 0;
            }
            lVar14 = lVar14 + 1;
          } while (lVar14 != lVar13);
        }
      }
      else {
        lVar14 = param_2 + -uVar11;
        lVar15 = 0;
        uVar10 = 0;
        if (bVar5) {
          while (lVar15 != lVar14) {
            uVar7 = (uint)((ulonglong)uVar10 * lVar13);
            if ((int)((ulonglong)uVar10 * lVar13 >> 0x20) != 0) {
              return 0;
            }
            bVar4 = *(byte *)((longlong)param_1 + lVar15 + uVar11);
            uVar8 = bVar4 - 0x30;
            if (0x39 < bVar4) {
              uVar8 = (bVar4 - 0x41 & 0xffffffdf) + 10;
            }
            uVar10 = uVar7 + uVar8;
            if (uVar12 <= uVar8) {
              return 0;
            }
            lVar15 = lVar15 + 1;
            if (CARRY4(uVar7,uVar8)) {
              return 0;
            }
          }
        }
        else {
          while (lVar15 != lVar14) {
            uVar7 = (uint)((ulonglong)uVar10 * lVar13);
            if ((int)((ulonglong)uVar10 * lVar13 >> 0x20) != 0) {
              return 0;
            }
            uVar8 = *(byte *)((longlong)param_1 + lVar15 + uVar11) - 0x30;
            uVar10 = uVar7 + uVar8;
            if (uVar12 <= uVar8) {
              return 0;
            }
            lVar15 = lVar15 + 1;
            if (CARRY4(uVar7,uVar8)) {
              return 0;
            }
          }
        }
      }
      return 1;
    }
    if ((*param_1 == 0x7830) || (*param_1 == 0x5830)) {
      if (param_2 < 3) {
        uVar9 = 1;
      }
      else {
        cVar3 = (char)param_1[1];
        if (cVar3 < -0x40) {
                    /* WARNING: Subroutine does not return */
          FUN_1802018d0(param_1,param_2,2,param_2,&DAT_180267d88);
        }
        uVar11 = 2;
        do {
          if (param_2 == uVar11) {
            lVar13 = 0x10;
            bVar6 = true;
            bVar5 = true;
            param_1 = param_1 + 1;
            param_2 = param_2 - 2;
            goto joined_r0x00018019bece;
          }
          pbVar2 = (byte *)((longlong)param_1 + uVar11);
          uVar11 = uVar11 + 1;
        } while (((byte)(*pbVar2 - 0x30) < 10) || ((byte)((*pbVar2 & 0xdf) + 0xbf) < 6));
      }
    }
    else {
      if ((char)*param_1 != '0') goto LAB_18019bdcb;
      cVar3 = *(char *)((longlong)param_1 + 1);
      if (cVar3 < -0x40) {
                    /* WARNING: Subroutine does not return */
        FUN_1802018d0(param_1,param_2,1,param_2,&DAT_180267d70);
      }
      uVar11 = 1;
      do {
        if (param_2 == uVar11) {
          lVar13 = 8;
          bVar6 = false;
          bVar5 = false;
          param_1 = (short *)((longlong)param_1 + 1);
          param_2 = param_2 - 1;
          goto joined_r0x00018019bece;
        }
        pbVar2 = (byte *)((longlong)param_1 + uVar11);
        uVar11 = uVar11 + 1;
      } while ((*pbVar2 & 0xf8) == 0x30);
    }
  }
  return uVar9;
}


