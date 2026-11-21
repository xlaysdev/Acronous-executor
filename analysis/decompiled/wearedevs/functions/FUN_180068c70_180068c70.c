/* FUN_180068c70 @ 180068c70 */

void FUN_180068c70(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  void *_Src;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  if ((char)param_1[9] != '\0') {
    lVar12 = param_2[4];
    lVar4 = *param_2;
    lVar5 = param_2[1];
    lVar6 = param_2[2];
    lVar7 = param_2[3];
    uVar10 = param_1[4];
    uVar11 = param_1[7];
    if (uVar11 == uVar10) {
      FUN_18007d1c0(param_1 + 4);
      uVar10 = param_1[4];
      uVar11 = param_1[7];
    }
    param_1[7] = uVar11 + 1;
    uVar9 = 0;
    if (uVar10 <= uVar11 + param_1[6]) {
      uVar9 = uVar10;
    }
    lVar3 = param_1[5];
    lVar8 = ((uVar11 + param_1[6]) - uVar9) * 0x50;
    puVar1 = (undefined8 *)(lVar3 + 0x40 + lVar8);
    *puVar1 = local_68;
    puVar1[1] = uStack_60;
    puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar8);
    *puVar1 = local_78;
    puVar1[1] = uStack_70;
    plVar2 = (longlong *)(lVar3 + 0x20 + lVar8);
    *plVar2 = lVar7;
    plVar2[1] = lVar12;
    plVar2 = (longlong *)(lVar3 + 0x10 + lVar8);
    *plVar2 = lVar5;
    plVar2[1] = lVar6;
    *(undefined8 *)(lVar3 + lVar8) = 1;
    ((undefined8 *)(lVar3 + lVar8))[1] = lVar4;
    return;
  }
  uVar10 = param_2[2];
  uVar11 = param_2[4];
  uVar9 = uVar10;
  if (uVar11 < uVar10) {
    uVar9 = uVar11;
  }
  FUN_180116200(param_1,uVar9);
  _Src = (void *)param_2[1];
  while( true ) {
    uVar9 = uVar10;
    if (uVar11 < uVar10) {
      uVar9 = uVar11;
    }
    if (uVar9 == 0) break;
    lVar12 = param_1[2];
    if ((ulonglong)(*param_1 - lVar12) < uVar9) {
      FUN_1801f6a80(param_1,lVar12,uVar9,1,1);
      lVar12 = param_1[2];
    }
    memcpy((void *)(param_1[1] + lVar12),_Src,uVar9);
    param_1[2] = lVar12 + uVar9;
    uVar10 = uVar10 - uVar9;
    param_2[2] = uVar10;
    param_2[1] = (longlong)((longlong)_Src + uVar9);
    uVar11 = uVar11 - uVar9;
    _Src = (void *)((longlong)_Src + uVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x000180068e1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2[3],_Src,uVar10);
  return;
}


