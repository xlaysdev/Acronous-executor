/* FUN_1800f84b0 @ 1800f84b0 */

/* WARNING: Type propagation algorithm not settling */

undefined * FUN_1800f84b0(byte *param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  byte *pbVar7;
  char cVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  bool bVar12;
  byte abStack_2c [2];
  undefined8 local_2a;
  undefined8 uStack_22;
  undefined2 local_1a;
  
  local_2a = 0;
  uStack_22 = 0;
  local_1a = 0;
  if (param_2 == 0) {
    return (undefined *)0x0;
  }
  pbVar1 = param_1 + param_2;
  param_2 = -param_2;
  pbVar7 = param_1 + 1;
LAB_1800f84f0:
  abStack_2c[1] = *param_1;
  switch(abStack_2c[1]) {
  case 9:
  case 10:
  case 0xc:
  case 0xd:
  case 0x20:
    goto switchD_1800f8508_caseD_9;
  default:
    if ((byte)(abStack_2c[1] + 0xbf) < 0x1a) {
      abStack_2c[1] = abStack_2c[1] | 0x20;
    }
    else if (9 < (byte)(abStack_2c[1] - 0x30) && 0x19 < (byte)(abStack_2c[1] + 0x9f)) {
      return (undefined *)0x0;
    }
    break;
  case 0x2d:
  case 0x2e:
  case 0x3a:
  case 0x5f:
    break;
  }
  if (pbVar7 == pbVar1) {
    uVar6 = 1;
    uVar3 = local_2a;
    goto joined_r0x0001800f8609;
  }
  uVar6 = 1;
  goto LAB_1800f8580;
switchD_1800f8508_caseD_9:
  param_1 = param_1 + 1;
  param_2 = param_2 + 1;
  bVar12 = pbVar7 == pbVar1;
  pbVar7 = pbVar7 + (pbVar7 != pbVar1);
  if (bVar12) {
    return (undefined *)0x0;
  }
  goto LAB_1800f84f0;
LAB_1800f8580:
  do {
    uVar10 = uVar6;
    bVar5 = *pbVar7;
    switch(bVar5) {
    case 9:
    case 10:
    case 0xc:
    case 0xd:
    case 0x20:
      pbVar7 = param_1 + uVar10 + 1;
      uVar6 = uVar10;
      uVar3 = local_2a;
      goto joined_r0x0001800f8609;
    default:
      if (0x19 < (byte)(bVar5 + 0xbf)) {
        if ((0x19 < (byte)(bVar5 + 0x9f)) && ((byte)(bVar5 - 0x3a) < 0xf6)) {
          return (undefined *)0x0;
        }
        goto switchD_1800f8597_caseD_2d;
      }
      if (uVar10 == 0x13) {
        return (undefined *)0x0;
      }
      if (0x12 < uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(uVar10,0x13,&PTR_s_C__Users_burne__cargo_registry_s_180219ab8);
      }
      bVar5 = bVar5 | 0x20;
      break;
    case 0x2d:
    case 0x2e:
    case 0x3a:
    case 0x5f:
switchD_1800f8597_caseD_2d:
      if (uVar10 == 0x13) {
        return (undefined *)0x0;
      }
      if (0x12 < uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(uVar10,0x13,&PTR_s_C__Users_burne__cargo_registry_s_180219aa0);
      }
    }
    abStack_2c[uVar10 + 1] = bVar5;
    pbVar7 = param_1 + uVar10 + 1;
    uVar6 = uVar10 + 1;
  } while (param_2 + 1 + uVar10 != 0);
  pbVar7 = param_1 + uVar6 + (param_2 + 1 + uVar10 != 0);
  uVar3 = local_2a;
joined_r0x0001800f8609:
  local_2a = uVar3;
  if (pbVar7 != pbVar1) {
    do {
      if (0x20 < (ulonglong)*pbVar7) {
        return (undefined *)0x0;
      }
      if ((0x100003600U >> ((ulonglong)*pbVar7 & 0x3f) & 1) == 0) {
        return (undefined *)0x0;
      }
      pbVar7 = pbVar7 + 1;
    } while (pbVar7 != pbVar1);
    if (0x13 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_180201a30(0,uVar6,0x13,&PTR_s_C__Users_burne__cargo_registry_s_180219a88);
    }
  }
  if (uVar6 == 9) {
    local_2a._7_1_ = (byte)((ulonglong)uVar3 >> 0x38);
    bVar5 = 0x68;
    if (local_2a._7_1_ == 0x68) {
      local_2a._6_1_ = (byte)((ulonglong)uVar3 >> 0x30);
      bVar5 = 0x73;
      local_2a._7_1_ = local_2a._6_1_;
      if (local_2a._6_1_ == 0x73) {
        local_2a._5_1_ = (byte)((ulonglong)uVar3 >> 0x28);
        bVar5 = 0x6f;
        local_2a._7_1_ = local_2a._5_1_;
        if (local_2a._5_1_ == 0x6f) {
          local_2a._4_1_ = (byte)((ulonglong)uVar3 >> 0x20);
          bVar5 = 0x74;
          local_2a._7_1_ = local_2a._4_1_;
          if (local_2a._4_1_ == 0x74) {
            local_2a._3_1_ = (byte)((ulonglong)uVar3 >> 0x18);
            bVar5 = 0x6e;
            local_2a._7_1_ = local_2a._3_1_;
            if (local_2a._3_1_ == 0x6e) {
              local_2a._2_1_ = (byte)((ulonglong)uVar3 >> 0x10);
              bVar5 = 0x69;
              local_2a._7_1_ = local_2a._2_1_;
              if (local_2a._2_1_ == 0x69) {
                local_2a._1_1_ = (byte)((ulonglong)uVar3 >> 8);
                bVar5 = 99;
                local_2a._7_1_ = local_2a._1_1_;
                if (local_2a._1_1_ == 99) {
                  local_2a._0_1_ = (byte)uVar3;
                  bVar5 = 0x61;
                  local_2a._7_1_ = (byte)local_2a;
                  if ((byte)local_2a == 0x61) {
                    bVar5 = 0x6d;
                    lVar9 = 0x72;
                    local_2a._7_1_ = abStack_2c[1];
                    if (abStack_2c[1] == 0x6d) goto LAB_1800f86ef;
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar9 = 0x72;
    if (bVar5 <= local_2a._7_1_) goto LAB_1800f86ef;
  }
  else {
    lVar9 = 0x72;
    if (8 < uVar6) goto LAB_1800f86ef;
  }
  lVar9 = 0;
LAB_1800f86ef:
  lVar4 = lVar9 + 0x39;
  uVar10 = (ulonglong)(uint)((int)lVar4 << 4);
  bVar12 = *(ulonglong *)(&DAT_180217ea8 + uVar10) < uVar6;
  if (*(ulonglong *)(&DAT_180217ea8 + uVar10) == uVar6) {
    uVar11 = uVar6;
    do {
      if (uVar11 == 0) goto LAB_1800f873b;
      pbVar1 = abStack_2c + uVar11;
      bVar5 = *(byte *)(*(longlong *)
                         ((longlong)&PTR_s_l1l2l3l4l5l6l9866mackoigbkbig5ut_180217ea0 + uVar10) + -1
                       + uVar11);
      bVar12 = bVar5 < *pbVar1;
      uVar11 = uVar11 - 1;
    } while (bVar5 == *pbVar1);
  }
  if (!bVar12) {
    lVar4 = lVar9;
  }
LAB_1800f873b:
  lVar9 = lVar4 + 0x1c;
  uVar10 = (ulonglong)(uint)((int)lVar9 << 4);
  bVar12 = *(ulonglong *)(&DAT_180217ea8 + uVar10) < uVar6;
  if (*(ulonglong *)(&DAT_180217ea8 + uVar10) == uVar6) {
    uVar11 = uVar6;
    do {
      if (uVar11 == 0) goto LAB_1800f877b;
      pbVar1 = abStack_2c + uVar11;
      bVar5 = *(byte *)(*(longlong *)
                         ((longlong)&PTR_s_l1l2l3l4l5l6l9866mackoigbkbig5ut_180217ea0 + uVar10) + -1
                       + uVar11);
      bVar12 = bVar5 < *pbVar1;
      uVar11 = uVar11 - 1;
    } while (bVar5 == *pbVar1);
  }
  if (!bVar12) {
    lVar9 = lVar4;
  }
LAB_1800f877b:
  lVar4 = lVar9 + 0xe;
  uVar10 = (ulonglong)(uint)((int)lVar4 << 4);
  bVar12 = *(ulonglong *)(&DAT_180217ea8 + uVar10) < uVar6;
  if (*(ulonglong *)(&DAT_180217ea8 + uVar10) == uVar6) {
    uVar11 = uVar6;
    do {
      if (uVar11 == 0) goto LAB_1800f87bb;
      pbVar1 = abStack_2c + uVar11;
      bVar5 = *(byte *)(*(longlong *)
                         ((longlong)&PTR_s_l1l2l3l4l5l6l9866mackoigbkbig5ut_180217ea0 + uVar10) + -1
                       + uVar11);
      bVar12 = bVar5 < *pbVar1;
      uVar11 = uVar11 - 1;
    } while (bVar5 == *pbVar1);
  }
  if (!bVar12) {
    lVar4 = lVar9;
  }
LAB_1800f87bb:
  lVar9 = lVar4 + 7;
  uVar10 = (ulonglong)(uint)((int)lVar9 << 4);
  bVar12 = *(ulonglong *)(&DAT_180217ea8 + uVar10) < uVar6;
  if (*(ulonglong *)(&DAT_180217ea8 + uVar10) == uVar6) {
    uVar11 = uVar6;
    do {
      if (uVar11 == 0) goto LAB_1800f87fb;
      pbVar1 = abStack_2c + uVar11;
      bVar5 = *(byte *)(*(longlong *)
                         ((longlong)&PTR_s_l1l2l3l4l5l6l9866mackoigbkbig5ut_180217ea0 + uVar10) + -1
                       + uVar11);
      bVar12 = bVar5 < *pbVar1;
      uVar11 = uVar11 - 1;
    } while (bVar5 == *pbVar1);
  }
  if (!bVar12) {
    lVar9 = lVar4;
  }
LAB_1800f87fb:
  lVar4 = lVar9 + 4;
  uVar10 = (ulonglong)(uint)((int)lVar4 << 4);
  bVar12 = *(ulonglong *)(&DAT_180217ea8 + uVar10) < uVar6;
  if (*(ulonglong *)(&DAT_180217ea8 + uVar10) == uVar6) {
    uVar11 = uVar6;
    do {
      if (uVar11 == 0) goto LAB_1800f883b;
      pbVar1 = abStack_2c + uVar11;
      bVar5 = *(byte *)(*(longlong *)
                         ((longlong)&PTR_s_l1l2l3l4l5l6l9866mackoigbkbig5ut_180217ea0 + uVar10) + -1
                       + uVar11);
      bVar12 = bVar5 < *pbVar1;
      uVar11 = uVar11 - 1;
    } while (bVar5 == *pbVar1);
  }
  if (!bVar12) {
    lVar4 = lVar9;
  }
LAB_1800f883b:
  lVar9 = lVar4 + 2;
  uVar10 = (ulonglong)(uint)((int)lVar9 << 4);
  bVar12 = *(ulonglong *)(&DAT_180217ea8 + uVar10) < uVar6;
  if (*(ulonglong *)(&DAT_180217ea8 + uVar10) == uVar6) {
    uVar11 = uVar6;
    do {
      if (uVar11 == 0) goto LAB_1800f887b;
      pbVar1 = abStack_2c + uVar11;
      bVar5 = *(byte *)(*(longlong *)
                         ((longlong)&PTR_s_l1l2l3l4l5l6l9866mackoigbkbig5ut_180217ea0 + uVar10) + -1
                       + uVar11);
      bVar12 = bVar5 < *pbVar1;
      uVar11 = uVar11 - 1;
    } while (bVar5 == *pbVar1);
  }
  if (!bVar12) {
    lVar9 = lVar4;
  }
LAB_1800f887b:
  lVar4 = lVar9 + 1;
  uVar10 = (ulonglong)(uint)((int)lVar4 << 4);
  bVar12 = *(ulonglong *)(&DAT_180217ea8 + uVar10) < uVar6;
  if (*(ulonglong *)(&DAT_180217ea8 + uVar10) == uVar6) {
    uVar11 = uVar6;
    do {
      if (uVar11 == 0) goto LAB_1800f88bb;
      pbVar1 = abStack_2c + uVar11;
      bVar5 = *(byte *)(*(longlong *)
                         ((longlong)&PTR_s_l1l2l3l4l5l6l9866mackoigbkbig5ut_180217ea0 + uVar10) + -1
                       + uVar11);
      bVar12 = bVar5 < *pbVar1;
      uVar11 = uVar11 - 1;
    } while (bVar5 == *pbVar1);
  }
  if (!bVar12) {
    lVar4 = lVar9;
  }
LAB_1800f88bb:
  uVar11 = (ulonglong)((uint)lVar4 << 4);
  uVar10 = *(ulonglong *)(&DAT_180217ea8 + uVar11);
  cVar8 = (uVar6 < uVar10) - (uVar10 < uVar6);
  if (uVar10 == uVar6) {
    do {
      if (uVar6 == 0) goto LAB_1800f891b;
      bVar5 = abStack_2c[uVar6];
      bVar2 = *(byte *)(*(longlong *)
                         ((longlong)&PTR_s_l1l2l3l4l5l6l9866mackoigbkbig5ut_180217ea0 + uVar11) + -1
                       + uVar6);
      uVar6 = uVar6 - 1;
    } while (bVar2 == bVar5);
    cVar8 = (bVar5 < bVar2) - (bVar2 < bVar5);
  }
  if (cVar8 != '\0') {
    return (undefined *)0x0;
  }
LAB_1800f891b:
  if (0xe3 < (uint)lVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_180201d02(0xe4,0xe4,&PTR_s_C__Users_burne__cargo_registry_s_180219a70);
  }
  return (&PTR_DAT_1802191c0)[lVar4];
}


