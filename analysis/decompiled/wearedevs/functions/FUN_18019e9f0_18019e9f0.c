/* FUN_18019e9f0 @ 18019e9f0 */

/* WARNING: Type propagation algorithm not settling */

bool FUN_18019e9f0(longlong *param_1,char param_2,uint *param_3,ulonglong param_4,char param_5,
                  undefined1 *param_6,byte param_7,char param_8)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint *puVar9;
  uint *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  
  if (param_2 != '\0') {
    if (param_4 == 0) {
      return false;
    }
    if (*param_3 == 0x2d) {
      if (param_5 != '\0') {
        return true;
      }
      *param_6 = 1;
      *param_3 = 0xfffd;
      if (param_3[param_4 - 1] == 0x2d) {
LAB_18019ea5e:
        *param_6 = 1;
        param_3[param_4 - 1] = 0xfffd;
      }
    }
    else if (param_3[param_4 - 1] == 0x2d) {
      if (param_5 != '\0') {
        return true;
      }
      goto LAB_18019ea5e;
    }
    if ((3 < param_4 && param_2 != '\x01') && (param_3[2] == 0x2d)) {
      if (param_3[3] == 0x2d && param_5 == '\0') {
        *param_6 = 1;
        param_3[2] = 0xfffd;
        param_3[3] = 0xfffd;
      }
      else if (param_3[3] == 0x2d) {
        return true;
      }
    }
  }
  if ((param_7 & param_4 != 0) == 0) {
LAB_18019eb8b:
    if (param_8 == '\0') goto joined_r0x00018019eddc;
    if (param_4 == 0) {
      return false;
    }
  }
  else {
    uVar1 = *param_3;
    plVar2 = (longlong *)param_1[5];
    uVar7 = 0xffff;
    if ((char)plVar2[6] != '\0') {
      uVar7 = 0xfff;
    }
    if (uVar7 < uVar1) {
      bVar5 = FUN_1801a3a30(plVar2);
    }
    else {
      bVar5 = *(byte *)(plVar2[2] +
                       (ulonglong)(uVar1 & 0x3f) +
                       (ulonglong)*(ushort *)(*plVar2 + (ulonglong)(uVar1 >> 6) * 2));
    }
    if ((0x1c0U >> (bVar5 & 0x1f) & 1) == 0) goto LAB_18019eb8b;
    if (param_5 != '\0') {
      return true;
    }
    *param_6 = 1;
    *param_3 = 0xfffd;
    if (param_8 == '\0') {
      if (param_4 < 0x3e9) {
        return false;
      }
LAB_18019ee1b:
      *param_6 = 1;
      param_3[1000] = 0xfffd;
      return false;
    }
  }
  plVar2 = (longlong *)*param_1;
  plVar3 = (longlong *)param_1[7];
  lVar12 = param_4 * 4;
  lVar13 = 0;
  uVar4 = 1;
  puVar10 = param_3;
  uVar14 = 0;
  do {
    uVar8 = uVar4;
    uVar1 = param_3[uVar14];
    if ((uVar1 & 0xfffffffe) == 0x200c) {
      puVar9 = param_3 + uVar14;
      if (puVar9 + -1 != (uint *)0x0 && uVar14 != 0) {
        uVar7 = puVar9[-1];
        uVar6 = 0xffff;
        if (*(char *)((longlong)plVar2 + 0x34) != '\0') {
          uVar6 = 0xfff;
        }
        if (uVar6 < uVar7) {
          uVar7 = FUN_1801a8300();
        }
        else {
          uVar7 = *(uint *)(plVar2[2] +
                           (ulonglong)
                           ((uVar7 & 0x3f) +
                           (uint)*(ushort *)(*plVar2 + (ulonglong)(uVar7 >> 6) * 2)) * 4);
        }
        if ((uVar7 & 0x3ffffeff) == 0xd809) goto LAB_18019ebd0;
        if (uVar1 != 0x200d) {
          for (lVar11 = lVar13; lVar11 != 0; lVar11 = lVar11 + -4) {
            uVar1 = *(uint *)((longlong)param_3 + lVar11 + -4);
            uVar7 = 0xffff;
            if ((char)plVar3[6] != '\0') {
              uVar7 = 0xfff;
            }
            if (uVar7 < uVar1) {
              bVar5 = FUN_1801a3920(plVar3);
            }
            else {
              bVar5 = *(byte *)(plVar3[2] +
                               (ulonglong)(uVar1 & 0x3f) +
                               (ulonglong)*(ushort *)(*plVar3 + (ulonglong)(uVar1 >> 6) * 2));
            }
            if (bVar5 != 5) {
              if ((1 << (bVar5 & 0x1f) & 0xcU) != 0) {
                lVar11 = 4;
                goto LAB_18019ed50;
              }
              break;
            }
          }
        }
      }
LAB_18019ec1e:
      if (param_5 != '\0') {
        return true;
      }
      *param_6 = 1;
      *puVar9 = 0xfffd;
    }
LAB_18019ebd0:
    lVar13 = lVar13 + 4;
    lVar12 = lVar12 + -4;
    puVar10 = puVar10 + 1;
    uVar4 = uVar8 + 1;
    uVar14 = uVar8;
  } while (uVar8 != param_4);
joined_r0x00018019eddc:
  if (param_4 != 0) {
    lVar12 = 0;
    do {
      if (0x7f < *(uint *)((longlong)param_3 + lVar12)) {
        if (1000 >= param_4 || param_5 != '\0') {
          return 1000 < param_4;
        }
        goto LAB_18019ee1b;
      }
      lVar12 = lVar12 + 4;
    } while (param_4 * 4 != lVar12);
  }
  return false;
LAB_18019ed50:
  if (lVar12 == lVar11) goto LAB_18019ec1e;
  uVar1 = *(uint *)((longlong)puVar10 + lVar11);
  uVar7 = 0xffff;
  if ((char)plVar3[6] != '\0') {
    uVar7 = 0xfff;
  }
  if (uVar7 < uVar1) {
    bVar5 = FUN_1801a3920(plVar3);
  }
  else {
    bVar5 = *(byte *)(plVar3[2] +
                     (ulonglong)(uVar1 & 0x3f) +
                     (ulonglong)*(ushort *)(*plVar3 + (ulonglong)(uVar1 >> 6) * 2));
  }
  if (bVar5 != 5) {
    if ((1 << (bVar5 & 0x1f) & 0x14U) != 0) goto LAB_18019ebd0;
    goto LAB_18019ec1e;
  }
  lVar11 = lVar11 + 4;
  goto LAB_18019ed50;
}


