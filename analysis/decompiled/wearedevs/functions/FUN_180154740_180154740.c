/* FUN_180154740 @ 180154740 */

ulonglong *
FUN_180154740(ulonglong *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5)

{
  byte bVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 local_8c;
  int local_88 [2];
  ulonglong local_80;
  undefined8 local_78;
  longlong *local_70;
  longlong local_68;
  undefined1 local_60;
  undefined4 *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_50 = param_2[1];
  local_48 = param_2[2];
  local_58 = &local_8c;
  local_8c = param_4;
  FUN_18015e7c0(&local_70,param_2 + 3,param_3,&local_58,local_50,local_48);
  uVar2 = local_8c;
  uVar3 = param_2[2];
  if (local_70 == (longlong *)0x0) {
    uVar6 = *(ulonglong *)(local_68 + -8);
    if (uVar3 <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(uVar6,uVar3,&DAT_180258b98);
    }
    uVar2 = *(undefined4 *)(param_2[1] + 0xc + uVar6 * 0x10);
    *(undefined4 *)(param_2[1] + 0xc + uVar6 * 0x10) = param_5;
    *param_1 = uVar6;
    *(undefined4 *)(param_1 + 1) = 1;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
    return param_1;
  }
  lVar5 = *local_70;
  bVar1 = *(byte *)(lVar5 + local_68);
  uVar6 = local_70[1];
  *(undefined1 *)(lVar5 + local_68) = local_60;
  *(undefined1 *)(lVar5 + 0x10 + (local_68 - 0x10U & uVar6)) = local_60;
  local_70[2] = local_70[2] - (ulonglong)(bVar1 & 1);
  local_70[3] = local_70[3] + 1;
  *(ulonglong *)(lVar5 + -8 + local_68 * -8) = uVar3;
  uVar6 = param_2[2];
  if (uVar6 != *param_2) {
    uVar7 = uVar6;
    uVar6 = *param_2;
    goto LAB_18015481d;
  }
  uVar4 = param_2[5] + param_2[6];
  uVar7 = 0x7ffffffffffffff;
  if (uVar4 < 0x7ffffffffffffff) {
    uVar7 = uVar4;
  }
  if ((uVar7 - uVar6 < 2) || (uVar4 < uVar6)) {
LAB_1801548ca:
    FUN_1801f69c0(local_88,uVar6,param_2[1],uVar6 + 1,8,0x10);
    uVar6 = uVar6 + 1;
    if (local_88[0] == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(local_80,local_78);
    }
  }
  else {
    FUN_1801f69c0(local_88,uVar6,param_2[1],uVar7,8,0x10);
    uVar6 = uVar7;
    if ((char)local_88[0] != '\0') {
      uVar6 = *param_2;
      uVar7 = param_2[2];
      if (uVar6 != uVar7) goto LAB_18015481d;
      if (uVar6 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_18020171e(0);
      }
      goto LAB_1801548ca;
    }
  }
  param_2[1] = local_80;
  *param_2 = uVar6;
  uVar7 = param_2[2];
LAB_18015481d:
  if (uVar7 == uVar6) {
    FUN_1801f8fa0(param_2);
  }
  uVar6 = param_2[1];
  lVar5 = uVar7 * 0x10;
  *(undefined8 *)(uVar6 + lVar5) = param_3;
  *(undefined4 *)(uVar6 + 8 + lVar5) = uVar2;
  *(undefined4 *)(uVar6 + 0xc + lVar5) = param_5;
  param_2[2] = uVar7 + 1;
  *param_1 = uVar3;
  *(undefined4 *)(param_1 + 1) = 0;
  return param_1;
}


