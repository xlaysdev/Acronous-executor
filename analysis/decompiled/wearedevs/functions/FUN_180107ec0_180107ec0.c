/* FUN_180107ec0 @ 180107ec0 */

undefined8 * FUN_180107ec0(undefined8 *param_1,longlong param_2,char *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  char *pcVar3;
  ulonglong uVar4;
  int iVar5;
  undefined7 uVar6;
  longlong lVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  char *pcVar12;
  longlong lVar13;
  int *piVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 uStack_58;
  uint local_51;
  undefined4 uStack_4d;
  undefined4 uStack_49;
  undefined4 uStack_45;
  undefined1 local_41;
  
  uVar15 = *(ulonglong *)(param_3 + 0x20);
  if (uVar15 == 0) goto LAB_180108248;
  pcVar12 = (char *)FUN_1801ac970(*(undefined8 *)(param_3 + 0x18));
  if (uVar15 == 0) {
    uVar15 = 0;
  }
  else if (*pcVar12 == '[') {
    pcVar12 = (char *)FUN_180110c90(pcVar12,uVar15,&DAT_18023b760);
  }
  FUN_1801f19d0(&local_51,pcVar12,uVar15);
  if ((char)local_51 == '\x02') {
    if (*(longlong *)(param_2 + 0x28) != 0) {
      lVar13 = *(longlong *)(param_2 + 0x20);
      lVar18 = lVar13 + *(longlong *)(param_2 + 0x28) * 0x18;
      do {
        pcVar3 = *(char **)(lVar13 + 8);
        uVar4 = *(ulonglong *)(lVar13 + 0x10);
        if (uVar4 == uVar15) {
          uVar16 = 0;
          do {
            if (uVar15 == uVar16) goto LAB_180108248;
            pbVar1 = (byte *)(pcVar3 + uVar16);
            pbVar2 = (byte *)(pcVar12 + uVar16);
            uVar16 = uVar16 + 1;
          } while ((byte)(((byte)(*pbVar1 + 0xbf) < 0x1a) << 5 | *pbVar1) ==
                   (byte)(((byte)(*pbVar2 + 0xbf) < 0x1a) << 5 | *pbVar2));
        }
        if (((uVar4 != 0) && (*pcVar3 == '.')) && (uVar4 - 1 == uVar15)) {
          uVar16 = 0;
          do {
            if (uVar15 == uVar16) goto LAB_180108248;
            lVar7 = uVar16 + 1;
            pbVar1 = (byte *)(pcVar12 + uVar16);
            uVar16 = uVar16 + 1;
          } while ((byte)(((byte)(pcVar3[lVar7] + 0xbfU) < 0x1a) << 5 | pcVar3[lVar7]) ==
                   (byte)(((byte)(*pbVar1 + 0xbf) < 0x1a) << 5 | *pbVar1));
        }
        uVar16 = 0;
        if (uVar15 >= uVar4) {
          uVar16 = uVar15 - uVar4;
        }
        if ((((uVar15 < uVar4 || uVar15 - uVar4 == 0) || (uVar15 <= uVar16)) ||
            (-0x41 < pcVar12[uVar16])) && (uVar15 - uVar16 == uVar4)) {
          uVar17 = 0;
          do {
            if (uVar4 == uVar17) {
              if (((uVar4 != 0) && (*pcVar3 == '.')) ||
                 ((CARRY8(~uVar4,uVar15) && (pcVar12[~uVar4 + uVar15] == '.')))) goto LAB_180108248;
              goto LAB_180107f70;
            }
            lVar7 = uVar17 + uVar16;
            pbVar1 = (byte *)(pcVar3 + uVar17);
            uVar17 = uVar17 + 1;
          } while ((byte)(((byte)(pcVar12[lVar7] + 0xbfU) < 0x1a) << 5 | pcVar12[lVar7]) ==
                   (byte)(((byte)(*pbVar1 + 0xbf) < 0x1a) << 5 | *pbVar1));
        }
        if ((uVar4 == 1) && (*pcVar3 == '*')) goto LAB_180108248;
LAB_180107f70:
        lVar13 = lVar13 + 0x18;
      } while (lVar13 != lVar18);
    }
  }
  else {
    uStack_58 = local_41;
    local_68 = local_51;
    uVar8 = local_68;
    uStack_64 = uStack_4d;
    uVar9 = uStack_64;
    uStack_60 = uStack_49;
    uVar10 = uStack_60;
    uStack_5c = uStack_45;
    if (*(longlong *)(param_2 + 0x10) != 0) {
      pcVar12 = *(char **)(param_2 + 8);
      lVar18 = *(longlong *)(param_2 + 0x10) * 0x12;
      local_68._1_3_ = (undefined3)(local_51 >> 8);
      local_68 = uVar8;
      if ((local_51 & 1) == 0) {
        uStack_64._0_1_ = (undefined1)uStack_4d;
        iVar5 = CONCAT13((undefined1)uStack_64,local_68._1_3_);
        uStack_64 = uVar9;
        do {
          if (*pcVar12 == '\x02') {
            if (((char)local_51 == pcVar12[1]) && (iVar5 == *(int *)(pcVar12 + 2)))
            goto LAB_180108248;
          }
          else {
            cVar11 = FUN_180111f40(pcVar12,&local_68);
            if (cVar11 != '\0') goto LAB_180108248;
          }
          pcVar12 = pcVar12 + 0x12;
          lVar18 = lVar18 + -0x12;
        } while (lVar18 != 0);
      }
      else {
        uStack_60._1_3_ = (undefined3)((uint)uStack_49 >> 8);
        uVar6 = CONCAT43(uStack_45,uStack_60._1_3_);
        uStack_60._0_1_ = (undefined1)uStack_49;
        lVar13 = CONCAT17((undefined1)uStack_60,CONCAT43(uStack_4d,local_68._1_3_));
        uStack_60 = uVar10;
        do {
          if (*pcVar12 == '\x02') {
            if (((char)local_51 == pcVar12[1]) &&
               (*(longlong *)(pcVar12 + 10) == CONCAT17(local_41,uVar6) &&
                *(longlong *)(pcVar12 + 2) == lVar13)) goto LAB_180108248;
          }
          else {
            cVar11 = FUN_180111f40(pcVar12,&local_68);
            if (cVar11 != '\0') goto LAB_180108248;
          }
          pcVar12 = pcVar12 + 0x12;
          lVar18 = lVar18 + -0x12;
        } while (lVar18 != 0);
      }
    }
  }
  if (*param_3 == '\0') goto LAB_180108248;
  if (*param_3 == '\x01') {
    if (param_3[1] == '\0') goto LAB_18010825f;
    piVar14 = &DAT_18023b484;
  }
  else {
    piVar14 = *(int **)(*(longlong *)(param_3 + 8) + 8);
    lVar18 = *(longlong *)(*(longlong *)(param_3 + 8) + 0x10);
    if (lVar18 != 5) {
      if ((lVar18 != 4) || (*piVar14 != 0x70747468)) goto LAB_180108248;
LAB_18010825f:
      if (*(longlong *)(param_2 + 0x30) != -0x7ffffffffffffffe) {
        param_2 = param_2 + 0x30;
        goto LAB_180108273;
      }
      goto LAB_180108248;
    }
  }
  if (((char)piVar14[1] == 's' && *piVar14 == 0x70747468) &&
     (*(longlong *)(param_2 + 0xb8) != -0x7ffffffffffffffe)) {
    param_2 = param_2 + 0xb8;
LAB_180108273:
    FUN_180108790(param_1,param_2);
    return param_1;
  }
LAB_180108248:
  *param_1 = 0x8000000000000002;
  return param_1;
}


