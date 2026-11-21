/* FUN_18010cf50 @ 18010cf50 */

longlong * FUN_18010cf50(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined **ppuVar12;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    FUN_180027490();
    puVar11 = (undefined8 *)thunk_FUN_1801d32d0(0x40,4);
    if (puVar11 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(4,0x40);
    }
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[4];
    uVar8 = param_3[5];
    uVar9 = param_3[7];
    puVar11[6] = param_3[6];
    puVar11[7] = uVar9;
    puVar11[4] = uVar7;
    puVar11[5] = uVar8;
    puVar11[2] = uVar5;
    puVar11[3] = uVar6;
    *puVar11 = uVar3;
    puVar11[1] = uVar4;
    ppuVar12 = (undefined **)&DAT_18023e0d8;
  }
  else {
    lVar2 = param_2[1];
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[4];
    uVar8 = param_3[5];
    uVar9 = param_3[6];
    uVar10 = param_3[7];
    FUN_180027490();
    puVar11 = (undefined8 *)thunk_FUN_1801d32d0(0x50,8);
    if (puVar11 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x50);
    }
    puVar11[8] = lVar1;
    puVar11[9] = lVar2;
    puVar11[6] = uVar9;
    puVar11[7] = uVar10;
    puVar11[4] = uVar7;
    puVar11[5] = uVar8;
    puVar11[2] = uVar5;
    puVar11[3] = uVar6;
    *puVar11 = uVar3;
    puVar11[1] = uVar4;
    ppuVar12 = &PTR_FUN_18023e0b0;
  }
  *param_2 = (longlong)puVar11;
  param_2[1] = (longlong)ppuVar12;
  lVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar1;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return param_1;
}


