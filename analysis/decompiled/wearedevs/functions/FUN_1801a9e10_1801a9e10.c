/* FUN_1801a9e10 @ 1801a9e10 */

undefined8 FUN_1801a9e10(int *param_1,ushort param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong uVar6;
  ushort uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  uVar3 = 0;
  if (*param_1 != 1) {
    return 0;
  }
  uVar6 = *(ulonglong *)(param_1 + 2);
  if (param_1[4] == 1) {
    if (*(ulonglong *)(param_1 + 10) <= uVar6) {
      return 0;
    }
    lVar8 = *(longlong *)(param_1 + 8);
    if (param_2 != *(ushort *)(lVar8 + uVar6 * 2)) goto LAB_1801aa131;
    param_1[0] = 1;
    param_1[1] = 0;
    *(ulonglong *)(param_1 + 2) = uVar6 + 1;
    if (*(longlong *)(param_1 + 6) == 0) {
      param_1[4] = 0;
      param_1[5] = 0;
      if (*(ulonglong *)(param_1 + 10) <= uVar6 + 1) {
        return 0;
      }
      uVar7 = *(ushort *)(lVar8 + 2 + uVar6 * 2);
      goto joined_r0x0001801aa17c;
    }
    param_1[4] = 1;
    param_1[5] = 0;
    *(longlong *)(param_1 + 6) = *(longlong *)(param_1 + 6) + -1;
LAB_1801a9e76:
    uVar3 = 1;
  }
  else {
    uVar2 = *(ulonglong *)(param_1 + 10);
    if (uVar2 <= uVar6) {
      return 0;
    }
    lVar8 = *(longlong *)(param_1 + 8);
    uVar7 = *(ushort *)(lVar8 + uVar6 * 2);
    uVar9 = uVar6 + 1;
    if (uVar7 < 0x30) {
      uVar5 = uVar7;
LAB_1801a9ea8:
      if (uVar5 == 0) {
        if (uVar2 <= uVar9) {
          return 0;
        }
        uVar5 = *(ushort *)(lVar8 + uVar9 * 2);
        uVar9 = uVar9 + 1;
      }
      uVar6 = (ulonglong)uVar5 + 1;
      if (4 < uVar5) {
        do {
          while( true ) {
            if (uVar2 <= uVar9) {
              return 0;
            }
            if (param_2 < *(ushort *)(lVar8 + uVar9 * 2)) break;
            if (uVar2 <= uVar9 + 1) {
              return 0;
            }
            uVar7 = *(ushort *)(lVar8 + 2 + uVar9 * 2);
            lVar4 = (ulonglong)(uVar7 == 0xffff) + 3;
            if (uVar7 < 0xfc00) {
              lVar4 = 2;
            }
            uVar9 = uVar9 + lVar4;
            uVar6 = uVar6 - (uVar6 >> 1);
joined_r0x0001801a9ee7:
            if (uVar6 < 6) goto LAB_1801a9fe0;
          }
          if (uVar2 <= uVar9 + 1) {
            return 0;
          }
          uVar7 = *(ushort *)(lVar8 + 2 + uVar9 * 2);
          if ((ulonglong)uVar7 < 0xfc00) {
            uVar9 = uVar9 + uVar7 + 2;
joined_r0x0001801a9ee7:
            uVar6 = uVar6 >> 1;
            goto joined_r0x0001801a9ee7;
          }
          if (uVar7 == 0xffff) {
            if (uVar2 <= uVar9 + 2) {
              return 0;
            }
            if (uVar2 <= uVar9 + 3) {
              return 0;
            }
            uVar9 = uVar9 + CONCAT22(*(undefined2 *)(lVar8 + 4 + uVar9 * 2),
                                     *(undefined2 *)(lVar8 + 6 + uVar9 * 2)) + 4;
            goto joined_r0x0001801a9ee7;
          }
          if (uVar2 <= uVar9 + 2) {
            return 0;
          }
          uVar9 = (ulonglong)*(ushort *)(lVar8 + 4 + uVar9 * 2) +
                  ((uint)uVar7 * 0x10000 + 0x4000000) + uVar9 + 3;
          uVar6 = uVar6 >> 1;
        } while (5 < uVar6);
      }
LAB_1801a9fe0:
      do {
        if (uVar2 <= uVar9) {
          return 0;
        }
        uVar1 = uVar9 + 1;
        if (param_2 == *(ushort *)(lVar8 + uVar9 * 2)) {
          if (uVar2 <= uVar1) {
            return 0;
          }
          uVar7 = *(ushort *)(lVar8 + 2 + uVar9 * 2);
          if ((longlong)(short)uVar7 < 0) {
            param_1[0] = 1;
            param_1[1] = 0;
            *(ulonglong *)(param_1 + 2) = uVar1;
            goto LAB_1801aa1ca;
          }
          uVar6 = uVar9 + 2;
          if (uVar7 < 0x4000) {
            uVar6 = uVar6 + (longlong)(short)uVar7;
          }
          else if ((short)uVar7 == 0x7fff) {
            if (uVar2 <= uVar6) {
              return 0;
            }
            if (uVar2 <= uVar9 + 3) {
              return 0;
            }
            uVar6 = uVar9 + CONCAT22(*(undefined2 *)(lVar8 + 4 + uVar9 * 2),
                                     *(undefined2 *)(lVar8 + 6 + uVar9 * 2)) + 4;
          }
          else {
            if (uVar2 <= uVar6) {
              return 0;
            }
            uVar6 = (ulonglong)*(ushort *)(lVar8 + 4 + uVar9 * 2) +
                    ((short)uVar7 * 0x10000 + 0xc0000000) + uVar9 + 3;
          }
          if (uVar2 <= uVar6) {
            return 0;
          }
          uVar7 = *(ushort *)(lVar8 + uVar6 * 2);
          param_1[0] = 1;
          param_1[1] = 0;
          *(ulonglong *)(param_1 + 2) = uVar6;
          goto joined_r0x0001801aa17c;
        }
        if (uVar2 <= uVar1) {
          return 0;
        }
        uVar7 = *(ushort *)(lVar8 + 2 + uVar9 * 2) & 0x7fff;
        lVar4 = (ulonglong)(uVar7 == 0x7fff) + 3;
        if (uVar7 < 0x4000) {
          lVar4 = 2;
        }
        uVar9 = uVar9 + lVar4;
        uVar6 = uVar6 - 1;
      } while (1 < uVar6);
      if (uVar2 <= uVar9) {
        return 0;
      }
      if (param_2 == *(ushort *)(lVar8 + uVar9 * 2)) {
        uVar6 = uVar9 + 1;
        goto LAB_1801aa0c7;
      }
    }
    else {
      uVar5 = uVar7 & 0x3f;
      if (uVar5 < 0x30) {
        if (0x3f < uVar7) {
          if ((short)uVar7 < 0) goto LAB_1801aa131;
          if (0x403f < uVar7) {
            if (uVar7 < 0x7fc0) {
              uVar9 = uVar6 + 2;
            }
            else {
              uVar9 = uVar6 + 3;
            }
          }
          goto LAB_1801a9ea8;
        }
LAB_1801aa09a:
        uVar5 = uVar7;
      }
      else {
        if (uVar7 < 0x40) goto LAB_1801aa09a;
        if ((short)uVar7 < 0) goto LAB_1801aa131;
        if (0x403f < uVar7) {
          if (uVar7 < 0x7fc0) {
            uVar9 = uVar6 + 2;
          }
          else {
            uVar9 = uVar6 + 3;
          }
        }
      }
      if (uVar2 <= uVar9) {
        return 0;
      }
      if (param_2 == *(ushort *)(lVar8 + uVar9 * 2)) {
        uVar6 = uVar9 + 1;
        if (uVar5 != 0x30) {
          param_1[4] = 1;
          param_1[5] = 0;
          *(ulonglong *)(param_1 + 6) = (ulonglong)uVar5 - 0x31;
          param_1[0] = 1;
          param_1[1] = 0;
          *(ulonglong *)(param_1 + 2) = uVar6;
          goto LAB_1801a9e76;
        }
        param_1[4] = 0;
        param_1[5] = 0;
LAB_1801aa0c7:
        param_1[0] = 1;
        param_1[1] = 0;
        *(ulonglong *)(param_1 + 2) = uVar6;
        if (uVar2 <= uVar6) {
          return 0;
        }
        uVar7 = *(ushort *)(lVar8 + 2 + uVar9 * 2);
joined_r0x0001801aa17c:
        if (0x3f < uVar7) {
LAB_1801aa1ca:
          uVar3 = FUN_1801a9cc0(lVar8);
          return uVar3;
        }
        goto LAB_1801a9e76;
      }
    }
LAB_1801aa131:
    param_1[0] = 0;
    param_1[1] = 0;
  }
  return uVar3;
}


