/* FUN_180068eb0 @ 180068eb0 */

void FUN_180068eb0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  void *pvVar11;
  longlong lVar12;
  longlong lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if ((char)param_1[9] == '\0') {
    uVar9 = param_2[2];
    FUN_180116200(param_1,uVar9);
    _Src = (void *)param_2[1];
    pvVar11 = _Src;
    if (uVar9 != 0) {
      lVar12 = param_1[2];
      if ((ulonglong)(*param_1 - lVar12) < uVar9) {
        FUN_1801f6a80(param_1,lVar12,uVar9,1,1);
        lVar12 = param_1[2];
      }
      pvVar11 = (void *)((longlong)_Src + uVar9);
      memcpy((void *)(param_1[1] + lVar12),_Src,uVar9);
      param_1[2] = lVar12 + uVar9;
      param_2[2] = 0;
      param_2[1] = (longlong)pvVar11;
    }
                    /* WARNING: Could not recover jumptable at 0x000180069041. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x20))(param_2[3],pvVar11,0);
    return;
  }
  lVar12 = *param_2;
  lVar4 = param_2[1];
  lVar5 = param_2[2];
  lVar6 = param_2[3];
  uVar9 = param_1[4];
  uVar7 = param_1[7];
  if (uVar7 == uVar9) {
    FUN_18007d1c0(param_1 + 4);
    uVar9 = param_1[4];
    uVar7 = param_1[7];
  }
  param_1[7] = uVar7 + 1;
  uVar10 = 0;
  if (uVar9 <= uVar7 + param_1[6]) {
    uVar10 = uVar9;
  }
  lVar3 = param_1[5];
  lVar8 = ((uVar7 + param_1[6]) - uVar10) * 0x50;
  puVar1 = (undefined8 *)(lVar3 + 0x40 + lVar8);
  *puVar1 = local_60;
  puVar1[1] = uStack_58;
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar8);
  *puVar1 = local_70;
  puVar1[1] = uStack_68;
  plVar2 = (longlong *)(lVar3 + 0x20 + lVar8);
  *plVar2 = lVar6;
  plVar2[1] = lStack_78;
  plVar2 = (longlong *)(lVar3 + 0x10 + lVar8);
  *plVar2 = lVar4;
  plVar2[1] = lVar5;
  *(undefined8 *)(lVar3 + lVar8) = 0;
  ((undefined8 *)(lVar3 + lVar8))[1] = lVar12;
  return;
}


