/* FUN_1800b8d10 @ 1800b8d10 */

longlong * FUN_1800b8d10(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    FUN_180027490();
    puVar6 = (undefined8 *)thunk_FUN_1801d32d0(0x18,8);
    if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x18);
    }
    puVar6[2] = param_3[2];
    uVar3 = param_3[1];
    *puVar6 = *param_3;
    puVar6[1] = uVar3;
    ppuVar7 = &PTR_FUN_180212490;
  }
  else {
    lVar2 = param_2[1];
    uVar4 = *param_3;
    uVar5 = param_3[1];
    uVar3 = param_3[2];
    FUN_180027490();
    puVar6 = (undefined8 *)thunk_FUN_1801d32d0(0x28,8);
    if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x28);
    }
    puVar6[4] = lVar2;
    puVar6[2] = uVar3;
    puVar6[3] = lVar1;
    *puVar6 = uVar4;
    puVar6[1] = uVar5;
    ppuVar7 = &PTR_FUN_180212468;
  }
  *param_2 = (longlong)puVar6;
  param_2[1] = (longlong)ppuVar7;
  lVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar1;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return param_1;
}


