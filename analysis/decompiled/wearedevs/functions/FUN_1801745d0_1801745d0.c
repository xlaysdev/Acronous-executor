/* FUN_1801745d0 @ 1801745d0 */

longlong FUN_1801745d0(ulonglong param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  
  uVar3 = 0;
  uVar8 = param_2 - param_1;
  uVar2 = uVar8;
  if (param_2 < param_1) {
    uVar2 = 0;
  }
  lVar5 = uVar2 * 0x410;
  if (0x1f81f81f81f81f < uVar2) {
LAB_180174612:
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(uVar3,lVar5);
  }
  if (lVar5 == 0) {
    lVar1 = 8;
  }
  else {
    FUN_180027490();
    uVar3 = 8;
    lVar1 = thunk_FUN_1801d32d0(lVar5);
    if (lVar1 == 0) goto LAB_180174612;
    if (param_1 < param_2) {
      uVar7 = (ulonglong)((uint)uVar8 & 3);
      if (param_1 - param_2 < 0xfffffffffffffffd) {
        puVar9 = (undefined8 *)(lVar1 + 0x1038);
        uVar4 = 0;
        do {
          memset(puVar9 + -0x207,0,0x400);
          puVar9[-0x187] = param_1 + uVar4;
          puVar9[-0x186] = 0;
          memset(puVar9 + -0x185,0,0x400);
          puVar9[-0x105] = param_1 + uVar4 + 1;
          puVar9[-0x104] = 0;
          memset(puVar9 + -0x103,0,0x400);
          puVar9[-0x83] = param_1 + uVar4 + 2;
          puVar9[-0x82] = 0;
          memset(puVar9 + -0x81,0,0x400);
          puVar9[-1] = param_1 + uVar4 + 3;
          *puVar9 = 0;
          uVar4 = uVar4 + 4;
          puVar9 = puVar9 + 0x208;
        } while ((uVar8 & 0xfffffffffffffffc) != uVar4);
        param_1 = param_1 + uVar4;
      }
      else {
        uVar4 = 0;
      }
      if (uVar7 != 0) {
        puVar9 = (undefined8 *)(uVar4 * 0x410 + lVar1 + 0x408);
        lVar6 = 0;
        do {
          memset(puVar9 + -0x81,0,0x400);
          puVar9[-1] = param_1;
          *puVar9 = 0;
          lVar6 = lVar6 + -1;
          puVar9 = puVar9 + 0x82;
          param_1 = param_1 + 1;
        } while (-lVar6 != uVar7);
        uVar4 = uVar4 - lVar6;
      }
      if (uVar4 < uVar2) {
        lVar5 = thunk_FUN_1801d3370(lVar1,lVar5,8,uVar4 * 0x410);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_18020171e(8,uVar4 * 0x410);
        }
        return lVar5;
      }
    }
  }
  return lVar1;
}


