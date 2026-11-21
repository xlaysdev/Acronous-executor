/* FUN_1801f3790 @ 1801f3790 */

undefined8 FUN_1801f3790(undefined8 param_1,longlong param_2,byte *param_3,longlong param_4)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  byte unaff_BL;
  byte *pbVar9;
  byte unaff_R12B;
  uint uVar10;
  undefined8 local_94;
  undefined2 uStack_8c;
  byte bStack_88;
  byte bStack_87;
  undefined2 uStack_86;
  undefined4 local_84;
  longlong local_70;
  undefined8 local_68;
  undefined2 local_5c;
  undefined2 uStack_5a;
  undefined4 uStack_58;
  undefined2 uStack_54;
  byte bStack_50;
  byte bStack_4f;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined2 local_4a;
  undefined1 uStack_48;
  char cStack_47;
  char cStack_46;
  char cStack_45;
  char cStack_44;
  char cStack_43;
  undefined2 local_42;
  
  local_70 = param_2;
  local_68 = param_1;
  pbVar9 = param_3 + param_4;
  local_84 = 0;
  bVar5 = false;
  do {
    if ((bVar5) && (unaff_BL < unaff_R12B)) {
      bStack_88 = unaff_BL + 1;
      if (0x80 < unaff_R12B) goto LAB_1801f37f0;
LAB_1801f3b0b:
      uVar8 = (ulonglong)*(byte *)((longlong)&local_94 + (ulonglong)unaff_BL);
    }
    else {
      if (param_3 == pbVar9) {
        return 0;
      }
      bVar2 = *param_3;
      uVar10 = (uint)bVar2;
      if ((char)bVar2 < '\0') {
        uVar7 = bVar2 & 0x1f;
        pbVar1 = param_3 + 1;
        if (bVar2 < 0xe0) {
          param_3 = param_3 + 2;
          uVar10 = uVar7 << 6 | *pbVar1 & 0x3f;
        }
        else {
          uVar10 = param_3[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
          if (bVar2 < 0xf0) {
            param_3 = param_3 + 3;
            uVar10 = uVar10 | uVar7 << 0xc;
          }
          else {
            uVar10 = param_3[3] & 0x3f | uVar10 << 6 | (bVar2 & 7) << 0x12;
            if (uVar10 == 0x110000) {
              return 0;
            }
            param_3 = param_3 + 4;
          }
        }
      }
      else {
        param_3 = param_3 + 1;
      }
      FUN_1801f2cc0(&local_5c,uVar10,0x10001);
      local_94 = CONCAT44(uStack_58,CONCAT22(uStack_5a,local_5c));
      uStack_8c = uStack_54;
      bStack_87 = bStack_4f;
      while (uStack_8c = uStack_54, bStack_87 = bStack_4f, bStack_4f <= bStack_50) {
        if (param_3 == pbVar9) {
          return 0;
        }
        bVar2 = *param_3;
        uVar10 = (uint)bVar2;
        if ((char)bVar2 < '\0') {
          pbVar1 = param_3 + 1;
          if (bVar2 < 0xe0) {
            param_3 = param_3 + 2;
            uVar10 = (uVar10 & 0x1f) << 6 | *pbVar1 & 0x3f;
          }
          else {
            uVar7 = param_3[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
            if (bVar2 < 0xf0) {
              param_3 = param_3 + 3;
              uVar10 = uVar7 | (uVar10 & 0x1f) << 0xc;
            }
            else {
              uVar10 = param_3[3] & 0x3f | uVar7 << 6 | (uVar10 & 7) << 0x12;
              if (uVar10 == 0x110000) {
                return 0;
              }
              param_3 = param_3 + 4;
            }
          }
        }
        else {
          param_3 = param_3 + 1;
        }
        bStack_88 = bStack_50;
        if (uVar10 < 0x28) {
                    /* WARNING: Could not recover jumptable at 0x0001801f39ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar6 = (*(code *)(&DAT_180294aac + *(int *)(&DAT_180294aac + (ulonglong)uVar10 * 4)))();
          return uVar6;
        }
        if (uVar10 == 0x5c) {
          local_5c = 0x5c5c;
          uStack_5a = 0;
          uStack_58 = 0;
          uStack_54 = 0;
          bStack_87 = 2;
          bStack_50 = 0;
        }
        else if (((uVar10 < 0x300) || (cVar4 = FUN_1801f3180(uVar10), cVar4 == '\0')) &&
                (cVar4 = FUN_1801f3290(uVar10), cVar4 != '\0')) {
          local_5c = (undefined2)uVar10;
          uStack_5a = (undefined2)(uVar10 >> 0x10);
          bStack_87 = 0x81;
          bStack_50 = 0x80;
        }
        else {
          uVar7 = 0x1f;
          if ((uVar10 | 1) != 0) {
            for (; (uVar10 | 1) >> uVar7 == 0; uVar7 = uVar7 - 1) {
            }
          }
          uVar7 = (uVar7 ^ 0x1c) >> 2;
          bStack_50 = (char)uVar7 - 2;
          uStack_48 = 0;
          local_4a = 0;
          cStack_47 = "0123456789abcdef"[uVar10 >> 0x14];
          cStack_46 = "0123456789abcdef"[uVar10 >> 0x10 & 0xf];
          cStack_45 = "0123456789abcdef"[uVar10 >> 0xc & 0xf];
          cStack_44 = "0123456789abcdef"[uVar10 >> 8 & 0xf];
          cStack_43 = "0123456789abcdef"[uVar10 >> 4 & 0xf];
          local_42 = CONCAT11(0x7d,"0123456789abcdef"[uVar10 & 0xf]);
          *(undefined2 *)((longlong)&uStack_4c + (ulonglong)uVar7) = 0x755c;
          *(undefined1 *)((longlong)&local_4a + (ulonglong)uVar7) = 0x7b;
          uStack_54 = local_42;
          uVar3 = CONCAT13(cStack_47,CONCAT12(uStack_48,local_4a));
          local_5c = local_4a;
          uStack_5a = (undefined2)((uint)uVar3 >> 0x10);
          uStack_58 = (undefined4)
                      (CONCAT17(cStack_43,
                                CONCAT16(cStack_44,CONCAT15(cStack_45,CONCAT14(cStack_46,uVar3))))
                      >> 0x20);
          bStack_87 = 10;
        }
        local_94 = CONCAT44(uStack_58,CONCAT22(uStack_5a,local_5c));
        uStack_8c = uStack_54;
        uStack_86 = uStack_4e;
        bStack_4f = bStack_87;
      }
      bStack_88 = bStack_50 + 1;
      unaff_BL = bStack_50;
      unaff_R12B = bStack_4f;
      if (bStack_4f < 0x81) goto LAB_1801f3b0b;
LAB_1801f37f0:
      uVar8 = local_94 & 0xffffffff;
    }
    unaff_BL = bStack_88;
    cVar4 = (**(code **)(local_70 + 0x20))(local_68,uVar8);
    bVar5 = true;
    if (cVar4 != '\0') {
      return 1;
    }
  } while( true );
}


