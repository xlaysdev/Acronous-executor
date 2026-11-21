/* FUN_18016a840 @ 18016a840 */

void FUN_18016a840(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined4 uVar13;
  
  lVar1 = *param_2;
  *param_2 = 3;
  if (lVar1 == 3) {
                    /* WARNING: Subroutine does not return */
    FUN_180201b60("driver missing",0xe,&PTR_s_C__Users_burne__cargo_registry_s_1802610e0);
  }
  lVar10 = param_2[1];
  lVar5 = param_2[2];
  lVar6 = param_2[3];
  lVar7 = param_2[4];
  lVar8 = param_2[5];
  lVar11 = param_2[6];
  lVar9 = param_2[6];
  lVar2 = param_2[7];
  *(longlong *)(param_3 + 0x10) = param_2[0xc];
  *(longlong *)(param_3 + 0x20) = param_2[0xd];
  *(longlong *)(param_3 + 0x28) = param_2[0xe];
  uVar13 = 0;
  plVar12 = (longlong *)FUN_18016aae0();
  if ((int)*plVar12 != 3) {
    lVar3 = plVar12[1];
    if (SBORROW8(0,lVar3)) {
      plVar4 = (longlong *)plVar12[2];
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        FUN_180163980(plVar12 + 2);
      }
    }
    else {
      if (plVar12[5] != 0) {
        thunk_FUN_1801d3330(plVar12[4],plVar12[5] << 5,8,(int)lVar11,uVar13);
      }
      if (lVar3 != 0) {
        thunk_FUN_1801d3330(plVar12[2],lVar3 << 4,8);
      }
      plVar4 = (longlong *)plVar12[6];
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        FUN_180187950(plVar12 + 6);
      }
    }
  }
  plVar12[6] = lVar9;
  plVar12[7] = lVar2;
  plVar12[4] = lVar7;
  plVar12[5] = lVar8;
  plVar12[2] = lVar5;
  plVar12[3] = lVar6;
  *plVar12 = lVar1;
  plVar12[1] = lVar10;
  return;
}


