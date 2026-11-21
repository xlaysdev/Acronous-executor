/* FUN_180053fb0 @ 180053fb0 */

undefined8 * FUN_180053fb0(undefined8 *param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  if (param_2 == 0) {
    param_1[5] = 0;
    param_1[6] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[4] = 8;
    param_1[7] = 8;
    param_1[8] = 0;
    param_1[9] = 2;
    param_1[10] = 0;
    *(undefined2 *)(param_1 + 0xb) = 0;
  }
  else {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_2;
    auVar3._8_8_ = 2;
    auVar3._0_8_ = 0xaaaaaaaaaaaaaaab;
    uVar7 = SUB168(auVar2 * auVar3,8) >> 1;
    if (!CARRY8(param_2 / 3,param_2)) {
      uVar12 = uVar7 - 1;
      lVar10 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar12 = 0;
      if (1 < uVar7) {
        uVar12 = 0xffffffffffffffff >> (~(byte)lVar10 & 0x3f);
      }
      if ((uVar12 != 0xffffffffffffffff) && (uVar7 = uVar12 + 1, uVar7 < 0x8001)) {
        lVar10 = uVar7 * 4;
        FUN_180027490();
        puVar4 = (undefined4 *)thunk_FUN_1801d32d0(lVar10,2);
        if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_18020171e(2,lVar10);
        }
        puVar5 = puVar4;
        if (1 < uVar7) {
          lVar6 = 1;
          if (7 < uVar12) {
            uVar8 = uVar12 & 0xfffffffffffffff8;
            puVar5 = puVar4 + uVar8;
            lVar6 = uVar8 + 1;
            uVar11 = 0;
            do {
              puVar1 = puVar4 + uVar11;
              *puVar1 = 0xffff;
              puVar1[1] = 0xffff;
              puVar1[2] = 0xffff;
              puVar1[3] = 0xffff;
              puVar1 = puVar4 + uVar11 + 4;
              *puVar1 = 0xffff;
              puVar1[1] = 0xffff;
              puVar1[2] = 0xffff;
              puVar1[3] = 0xffff;
              uVar11 = uVar11 + 8;
            } while (uVar8 != uVar11);
          }
          lVar6 = (uVar12 - lVar6) + 1;
          do {
            *puVar5 = 0xffff;
            puVar5 = puVar5 + 1;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
        *puVar5 = 0xffff;
        uVar8 = uVar7 - (uVar7 >> 2);
        if (0x13b13b13b13b13b < uVar8) {
          uVar9 = 0;
LAB_180054137:
                    /* WARNING: Subroutine does not return */
          FUN_18020171e(uVar9,lVar10);
        }
        if (uVar7 == 0) {
          lVar6 = 8;
        }
        else {
          lVar10 = uVar8 * 0x68;
          FUN_180027490();
          uVar9 = 8;
          lVar6 = thunk_FUN_1801d32d0(lVar10,8);
          if (lVar6 == 0) goto LAB_180054137;
        }
        *param_1 = 0;
        param_1[3] = uVar8;
        param_1[4] = lVar6;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 8;
        param_1[8] = 0;
        param_1[9] = puVar4;
        param_1[10] = uVar7;
        *(short *)(param_1 + 0xb) = (short)uVar12;
        return param_1;
      }
    }
    *param_1 = 3;
  }
  return param_1;
}


