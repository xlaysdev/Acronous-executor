/* FUN_180191cf0 @ 180191cf0 */

void FUN_180191cf0(undefined8 param_1,code *UNRECOVERED_JUMPTABLE,uint param_3,byte *param_4,
                  byte *param_5)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if (param_3 == 0x25) {
    do {
      uVar4 = 0x110000;
      if (param_4 == param_5) break;
      bVar2 = *param_4;
      uVar5 = (uint)bVar2;
      if ((char)bVar2 < '\0') {
        pbVar1 = param_4 + 1;
        if (bVar2 < 0xe0) {
          param_4 = param_4 + 2;
          uVar5 = (uVar5 & 0x1f) << 6 | *pbVar1 & 0x3f;
        }
        else {
          uVar3 = param_4[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
          if (bVar2 < 0xf0) {
            param_4 = param_4 + 3;
            uVar5 = uVar3 | (uVar5 & 0x1f) << 0xc;
          }
          else {
            pbVar1 = param_4 + 3;
            param_4 = param_4 + 4;
            uVar5 = *pbVar1 & 0x3f | uVar3 << 6 | (uVar5 & 7) << 0x12;
            if (uVar5 == 0x110000) break;
          }
        }
        if (uVar5 < 0xe) goto LAB_180191dca;
LAB_180191d20:
        uVar4 = uVar5;
      }
      else {
        param_4 = param_4 + 1;
        if (0xd < uVar5) goto LAB_180191d20;
LAB_180191dca:
        uVar4 = 0x110000;
        if ((0x2600U >> (uVar5 & 0x1f) & 1) == 0) goto LAB_180191d20;
      }
    } while (uVar4 == 0x110000);
    do {
      if (param_4 == param_5) goto LAB_180191f72;
      bVar2 = *param_4;
      uVar5 = (uint)bVar2;
      if ((char)bVar2 < '\0') {
        pbVar1 = param_4 + 1;
        if (bVar2 < 0xe0) {
          param_4 = param_4 + 2;
          uVar5 = (uVar5 & 0x1f) << 6 | *pbVar1 & 0x3f;
          goto joined_r0x000180191ee1;
        }
        uVar3 = param_4[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
        if (0xef < bVar2) {
          uVar5 = param_4[3] & 0x3f | uVar3 << 6 | (uVar5 & 7) << 0x12;
          if (uVar5 != 0x110000) {
            param_4 = param_4 + 4;
            goto joined_r0x000180191ee1;
          }
          goto LAB_180191f72;
        }
        param_4 = param_4 + 3;
        uVar5 = uVar3 | (uVar5 & 0x1f) << 0xc;
        if (uVar5 < 0xe) goto LAB_180191f20;
LAB_180191e50:
        uVar3 = uVar5;
      }
      else {
        param_4 = param_4 + 1;
joined_r0x000180191ee1:
        if (0xd < uVar5) goto LAB_180191e50;
LAB_180191f20:
        uVar3 = 0x110000;
        if ((0x2600U >> (uVar5 & 0x1f) & 1) == 0) goto LAB_180191e50;
      }
    } while (uVar3 == 0x110000);
    if (((uVar4 == 0x110000) || ((9 < uVar4 - 0x30 && (5 < (uVar4 & 0xffffffdf) - 0x41)))) ||
       ((9 < uVar3 - 0x30 && (5 < (uVar3 & 0xffffffdf) - 0x41)))) {
LAB_180191f72:
                    /* WARNING: Could not recover jumptable at 0x000180191f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  else if (9 < param_3 - 0x30 && 0x19 < (param_3 & 0x1fffdf) - 0x41) {
    switch(param_3) {
    case 0x21:
    case 0x24:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x3a:
    case 0x3b:
    case 0x3d:
    case 0x3f:
    case 0x40:
    case 0x5f:
    case 0x7e:
      break;
    default:
      auVar9._0_4_ = -(uint)((int)(param_3 - 0xa0000 ^ 0x80000000) < -0x7fff0002);
      auVar9._4_4_ = -(uint)((int)(param_3 - 0xb0000 ^ 0x80000000) < -0x7fff0002);
      auVar9._8_4_ = -(uint)((int)(param_3 - 0xc0000 ^ 0x80000000) < -0x7fff0002);
      auVar9._12_4_ = -(uint)((int)(param_3 - 0xd0000 ^ 0x80000000) < -0x7fff0002);
      auVar7._0_4_ = -(uint)((int)(param_3 - 0x60000 ^ 0x80000000) < -0x7fff0002);
      auVar7._4_4_ = -(uint)((int)(param_3 - 0x70000 ^ 0x80000000) < -0x7fff0002);
      auVar7._8_4_ = -(uint)((int)(param_3 - 0x80000 ^ 0x80000000) < -0x7fff0002);
      auVar7._12_4_ = -(uint)((int)(param_3 - 0x90000 ^ 0x80000000) < -0x7fff0002);
      auVar7 = packssdw(auVar7,auVar9);
      auVar8._0_4_ = -(uint)((int)(param_3 - 0x20000 ^ 0x80000000) < -0x7fff0002);
      auVar8._4_4_ = -(uint)((int)(param_3 - 0x30000 ^ 0x80000000) < -0x7fff0002);
      auVar8._8_4_ = -(uint)((int)(param_3 - 0x40000 ^ 0x80000000) < -0x7fff0002);
      auVar8._12_4_ = -(uint)((int)(param_3 - 0x50000 ^ 0x80000000) < -0x7fff0002);
      auVar6._0_4_ = -(uint)((int)(param_3 - 0xa0 ^ 0x80000000) < -0x7fff28a0);
      auVar6._4_4_ = -(uint)((int)(param_3 - 0xe000 ^ 0x80000000) < -0x7fffe230);
      auVar6._8_4_ = -(uint)((int)(param_3 - 0xfdf0 ^ 0x80000000) < -0x7ffffdf2);
      auVar6._12_4_ = -(uint)((int)(param_3 - 0x10000 ^ 0x80000000) < -0x7fff0002);
      auVar6 = packssdw(auVar6,auVar8);
      auVar6 = packsswb(auVar6,auVar7);
      if (((0xfffd < param_3 - 0xf0000 && 0xeffd < param_3 - 0xe1000) && 0xfffd < param_3 - 0x100000
          ) && ((((((((((((((((SUB161(auVar6 >> 7,0) & 1) == 0 && (SUB161(auVar6 >> 0xf,0) & 1) == 0
                             ) && (SUB161(auVar6 >> 0x17,0) & 1) == 0) &&
                           (SUB161(auVar6 >> 0x1f,0) & 1) == 0) &&
                          (SUB161(auVar6 >> 0x27,0) & 1) == 0) &&
                         (SUB161(auVar6 >> 0x2f,0) & 1) == 0) && (SUB161(auVar6 >> 0x37,0) & 1) == 0
                        ) && (SUB161(auVar6 >> 0x3f,0) & 1) == 0) &&
                      (SUB161(auVar6 >> 0x47,0) & 1) == 0) && (SUB161(auVar6 >> 0x4f,0) & 1) == 0)
                    && (SUB161(auVar6 >> 0x57,0) & 1) == 0) && (SUB161(auVar6 >> 0x5f,0) & 1) == 0)
                  && (SUB161(auVar6 >> 0x67,0) & 1) == 0) && (SUB161(auVar6 >> 0x6f,0) & 1) == 0) &&
                (SUB161(auVar6 >> 0x77,0) & 1) == 0) && -1 < auVar6[0xf])) goto LAB_180191f72;
    }
  }
  return;
}


