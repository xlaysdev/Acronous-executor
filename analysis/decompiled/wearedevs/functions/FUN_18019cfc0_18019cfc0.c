/* FUN_18019cfc0 @ 18019cfc0 */

ulonglong FUN_18019cfc0(longlong *param_1,ulonglong param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_1[2] == 0) {
    uVar4 = *(ulonglong *)param_1[3];
    if (param_2 <= uVar4) goto LAB_18019d035;
    uVar4 = uVar4 + 1;
    lVar1 = *param_1;
    puVar2 = (ulonglong *)param_1[1];
  }
  else {
    uVar4 = param_2;
    if (((int)param_1[2] == 1) && (uVar4 = *(ulonglong *)param_1[3], param_2 < uVar4)) {
LAB_18019d035:
                    /* WARNING: Subroutine does not return */
      FUN_180201a30(0,uVar4,param_2,param_3);
    }
    lVar1 = *param_1;
    puVar2 = (ulonglong *)param_1[1];
  }
  if (lVar1 == 0) {
    uVar3 = *puVar2;
    if (uVar3 <= uVar4) {
      return uVar3;
    }
  }
  else {
    if ((int)lVar1 != 1) {
      return 0;
    }
    uVar3 = *puVar2;
    if (uVar3 < uVar4) {
      return uVar3 + 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_180201a30(uVar3,uVar4,param_2,param_3);
}


