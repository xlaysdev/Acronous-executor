/* FUN_180154980 @ 180154980 */

longlong FUN_180154980(ulonglong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int local_50 [2];
  ulonglong local_48;
  undefined8 local_40;
  
  uVar1 = param_1[6];
  FUN_18015e690(param_1 + 3,param_2,uVar1,param_1[1],param_1[2]);
  uVar4 = param_1[2];
  if (uVar4 != *param_1) {
    uVar5 = uVar4;
    uVar4 = *param_1;
    goto LAB_1801549c6;
  }
  uVar2 = param_1[5] + param_1[6];
  uVar5 = 0x7ffffffffffffff;
  if (uVar2 < 0x7ffffffffffffff) {
    uVar5 = uVar2;
  }
  if ((uVar5 - uVar4 < 2) || (uVar2 < uVar4)) {
LAB_180154a3e:
    FUN_1801f69c0(local_50,uVar4,param_1[1],uVar4 + 1,8,0x10);
    uVar4 = uVar4 + 1;
    if (local_50[0] == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(local_48,local_40);
    }
  }
  else {
    FUN_1801f69c0(local_50,uVar4,param_1[1],uVar5,8,0x10);
    uVar4 = uVar5;
    if ((char)local_50[0] != '\0') {
      uVar4 = *param_1;
      uVar5 = param_1[2];
      if (uVar4 != uVar5) goto LAB_1801549c6;
      if (uVar4 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_18020171e(0);
      }
      goto LAB_180154a3e;
    }
  }
  param_1[1] = local_48;
  *param_1 = uVar4;
  uVar5 = param_1[2];
LAB_1801549c6:
  if (uVar5 == uVar4) {
    FUN_1801f8fa0(param_1);
  }
  uVar4 = param_1[1];
  lVar3 = uVar5 * 0x10;
  *(undefined8 *)(uVar4 + lVar3) = param_2;
  *(undefined4 *)(uVar4 + 8 + lVar3) = param_3;
  *(undefined4 *)(uVar4 + 0xc + lVar3) = param_4;
  uVar5 = uVar5 + 1;
  param_1[2] = uVar5;
  if (uVar5 <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_180201d02(uVar1,uVar5,&DAT_180258bb0);
  }
  return uVar1 * 0x10 + param_1[1];
}


