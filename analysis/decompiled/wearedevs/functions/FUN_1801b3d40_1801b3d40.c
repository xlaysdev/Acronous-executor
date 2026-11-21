/* FUN_1801b3d40 @ 1801b3d40 */

undefined8 * FUN_1801b3d40(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined **ppuVar5;
  longlong *plVar6;
  
  lVar1 = *param_2;
  lVar2 = param_2[2];
  if (lVar2 == lVar1) {
    if (lVar2 == 0) {
      param_1[1] = 1;
      param_1[2] = 0;
      param_1[3] = 0;
      ppuVar5 = &PTR_LAB_180285b00;
    }
    else {
      uVar3 = param_2[1];
      if ((uVar3 & 1) == 0) {
        param_1[1] = uVar3;
        param_1[2] = lVar2;
        param_1[3] = uVar3 | 1;
        ppuVar5 = &PTR_FUN_180285c40;
      }
      else {
        param_1[1] = uVar3;
        param_1[2] = lVar2;
        param_1[3] = uVar3;
        ppuVar5 = &PTR_FUN_180285c18;
      }
    }
  }
  else {
    FUN_180027490();
    plVar6 = (longlong *)thunk_FUN_1801d32d0(0x18,8);
    if (plVar6 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x18);
    }
    lVar4 = param_2[1];
    *plVar6 = lVar4;
    plVar6[1] = lVar1;
    plVar6[2] = 1;
    param_1[1] = lVar4;
    param_1[2] = lVar2;
    param_1[3] = plVar6;
    ppuVar5 = &PTR_FUN_180285b78;
  }
  *param_1 = ppuVar5;
  return param_1;
}


