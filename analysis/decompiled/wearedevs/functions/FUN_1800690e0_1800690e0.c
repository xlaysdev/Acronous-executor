/* FUN_1800690e0 @ 1800690e0 */

void FUN_1800690e0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  void *_Src;
  ulonglong uVar17;
  
  if ((char)param_1[9] != '\0') {
    lVar16 = param_2[8];
    lVar6 = *param_2;
    lVar7 = param_2[1];
    lVar8 = param_2[2];
    lVar9 = param_2[3];
    lVar10 = param_2[4];
    lVar11 = param_2[5];
    lVar12 = param_2[6];
    lVar5 = param_2[7];
    uVar17 = param_1[4];
    uVar15 = param_1[7];
    if (uVar15 == uVar17) {
      FUN_18007d1c0(param_1 + 4);
      uVar17 = param_1[4];
      uVar15 = param_1[7];
    }
    param_1[7] = uVar15 + 1;
    uVar14 = 0;
    if (uVar17 <= uVar15 + param_1[6]) {
      uVar14 = uVar17;
    }
    lVar4 = param_1[5];
    lVar13 = ((uVar15 + param_1[6]) - uVar14) * 0x50;
    plVar1 = (longlong *)(lVar4 + 0x40 + lVar13);
    *plVar1 = lVar5;
    plVar1[1] = lVar16;
    plVar1 = (longlong *)(lVar4 + 0x30 + lVar13);
    *plVar1 = lVar11;
    plVar1[1] = lVar12;
    plVar1 = (longlong *)(lVar4 + 0x20 + lVar13);
    *plVar1 = lVar9;
    plVar1[1] = lVar10;
    plVar1 = (longlong *)(lVar4 + 0x10 + lVar13);
    *plVar1 = lVar7;
    plVar1[1] = lVar8;
    *(undefined8 *)(lVar4 + lVar13) = 2;
    ((undefined8 *)(lVar4 + lVar13))[1] = lVar6;
    return;
  }
  uVar17 = (ulonglong)
           (byte)(*(char *)((longlong)param_2 + 0x33) - *(char *)((longlong)param_2 + 0x32));
  uVar15 = uVar17 + param_2[2];
  if (CARRY8(uVar17,param_2[2])) {
    uVar15 = 0xffffffffffffffff;
  }
  lVar16 = uVar15 + param_2[8];
  if (CARRY8(uVar15,param_2[8])) {
    lVar16 = -1;
  }
  FUN_180116200(param_1,lVar16);
  do {
    bVar2 = *(byte *)((longlong)param_2 + 0x32);
    bVar3 = *(byte *)((longlong)param_2 + 0x33);
    uVar17 = param_2[2];
    if (bVar3 == bVar2 && uVar17 == 0) {
      _Src = (void *)param_2[7];
      uVar17 = param_2[8];
    }
    else if (bVar3 == bVar2) {
      _Src = (void *)param_2[1];
    }
    else {
      uVar15 = (ulonglong)bVar2;
      if ((bVar3 < bVar2) || (0x12 < bVar3)) {
                    /* WARNING: Subroutine does not return */
        FUN_180201a30(uVar15,(ulonglong)bVar3,0x12,&DAT_18020a840);
      }
      uVar17 = bVar3 - uVar15;
      _Src = (void *)((longlong)param_2 + uVar15 + 0x20);
    }
    if (uVar17 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000180069311. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x20))(param_2[3],param_2[1]);
      return;
    }
    lVar16 = param_1[2];
    if ((ulonglong)(*param_1 - lVar16) < uVar17) {
      FUN_1801f6a80(param_1,lVar16,uVar17,1,1);
      lVar16 = param_1[2];
    }
    memcpy((void *)(param_1[1] + lVar16),_Src,uVar17);
    param_1[2] = lVar16 + uVar17;
    FUN_1800672e0(param_2,uVar17);
  } while( true );
}


