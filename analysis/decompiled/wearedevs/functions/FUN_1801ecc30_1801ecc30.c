/* FUN_1801ecc30 @ 1801ecc30 */

void FUN_1801ecc30(longlong *param_1,ushort *param_2,longlong param_3)

{
  ushort *puVar1;
  ushort uVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined1 uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong unaff_RSI;
  undefined1 uVar9;
  longlong lVar10;
  uint uVar11;
  bool bVar12;
  longlong local_70;
  longlong lStack_68;
  longlong local_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  uint local_4c [3];
  
  local_4c[1] = 0xfffffffe;
  local_4c[2] = 0xffffffff;
  if (param_3 == 0) {
    lStack_68 = 1;
  }
  else {
    FUN_180027490();
    lStack_68 = thunk_FUN_1801d32d0(param_3,1);
    if (lStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(1,param_3);
    }
  }
  local_60 = 0;
  uStack_58 = 1;
  puVar1 = param_2 + param_3;
  bVar12 = false;
  lVar10 = lStack_68;
  local_70 = param_3;
  do {
    while( true ) {
      if (bVar12) {
        uVar8 = unaff_RSI & 0xffffffff;
      }
      else {
        if (param_2 == puVar1) {
          param_1[2] = local_60;
          param_1[3] = CONCAT71(uStack_57,uStack_58);
          *param_1 = local_70;
          param_1[1] = lStack_68;
          return;
        }
        uVar8 = (ulonglong)*param_2;
        param_2 = param_2 + 1;
      }
      uVar11 = (uint)uVar8;
      uVar7 = uVar8 & 0xffff;
      uVar6 = (uint)uVar7;
      if ((uVar11 & 0xf800) == 0xd800) break;
      if (uVar6 < 0x80) {
        local_4c[0] = (uint)(byte)uVar8;
        uVar8 = 1;
      }
      else {
        uVar8 = (ulonglong)(uVar6 << 0x10);
LAB_1801ecd65:
        uVar5 = (undefined1)uVar7;
        uVar3 = (undefined1)(uVar8 >> 0x16);
        if (uVar8 < 0x8000000) {
          local_4c[0] = (uint)(CONCAT11(uVar5,uVar3) & 0x3fff | 0x80c0);
          uVar8 = 2;
        }
        else {
          uVar9 = (undefined1)(uVar8 >> 0x1c);
          if (uVar8 >> 0x20 == 0) {
            local_4c[0] = (uint)(CONCAT12(uVar5,CONCAT11(uVar3,uVar9)) & 0x3f3fff | 0x8080e0);
            uVar8 = 3;
          }
          else {
            local_4c[0] = CONCAT13(uVar5,CONCAT12(uVar3,CONCAT11(uVar9,(char)(uVar8 >> 0x22)))) &
                          0x3f3f3fff | 0x808080f0;
            uVar8 = 4;
          }
        }
      }
      if ((ulonglong)(local_70 - local_60) < uVar8) {
        FUN_180201860(&local_70,local_60,uVar8);
        lVar10 = lStack_68;
      }
      lVar4 = local_60;
      memcpy((void *)(lVar10 + local_60),local_4c,uVar8);
      local_60 = lVar4 + uVar8;
      bVar12 = false;
    }
    if (uVar6 < 0xdc00) {
      if (param_2 == puVar1) {
        bVar12 = false;
        param_2 = puVar1;
      }
      else {
        uVar2 = *param_2;
        param_2 = param_2 + 1;
        if (0xfbff < (uVar2 + 0x2000 & 0xffff)) {
          uVar8 = ((ulonglong)((uVar2 & 0x3ff) << 0x10) | (ulonglong)(uVar11 & 0x3ff) << 0x1a) +
                  0x100000000;
          uVar7 = uVar8 >> 0x10;
          goto LAB_1801ecd65;
        }
        bVar12 = true;
        unaff_RSI = (ulonglong)(uint)uVar2;
      }
    }
    else {
      bVar12 = false;
    }
    uStack_58 = 0;
    if ((ulonglong)(local_70 - local_60) < 3) {
      FUN_180201860(&local_70,local_60,3);
    }
    *(undefined1 *)(lStack_68 + local_60) = 0xed;
    *(byte *)(lStack_68 + 1 + local_60) = (byte)(uVar11 >> 6) & 0x3f | 0x80;
    *(byte *)(lStack_68 + 2 + local_60) = (byte)uVar8 & 0x3f | 0x80;
    local_60 = local_60 + 3;
    lVar10 = lStack_68;
  } while( true );
}


