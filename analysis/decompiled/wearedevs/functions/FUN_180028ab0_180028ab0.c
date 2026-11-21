/* FUN_180028ab0 @ 180028ab0 */

longlong * FUN_180028ab0(longlong *param_1,undefined8 *param_2,undefined1 *param_3,char *param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  
  uVar1 = *param_3;
  lVar3 = (*(code *)*param_2)(0);
  iVar5 = (int)param_2;
  if (lVar3 == 0) {
LAB_180028b9c:
                    /* WARNING: Subroutine does not return */
    FUN_1802008b0(&PTR_s_C__Users_burne__rustup_toolchain_180205658);
  }
  if (*(char *)(lVar3 + 0x46) == '\x02') {
    *(undefined1 *)(lVar3 + 0x46) = uVar1;
    lVar4 = 0x2e8;
    if (*param_4 != '\0') {
      lVar4 = 0x228;
    }
    uVar2 = FUN_18016f900(lVar4 + *(longlong *)(param_4 + 8));
    if ((*(byte *)(lVar3 + 0x38) & 1) == 0) {
      iVar6 = iVar5;
      local_60 = FUN_180171ea0();
    }
    else {
      local_60 = *(int *)(lVar3 + 0x3c);
      iVar6 = *(int *)(lVar3 + 0x40);
    }
    iVar7 = 1;
    if (local_60 != 0 || iVar6 != 0) {
      iVar7 = iVar6;
    }
    *(undefined4 *)(lVar3 + 0x38) = 1;
    *(undefined4 *)(lVar3 + 0x3c) = uVar2;
    *(int *)(lVar3 + 0x40) = iVar5;
    FUN_18016c710(&local_78,lVar3,param_4);
    local_58 = local_70;
    uStack_54 = uStack_6c;
    uStack_50 = uStack_68;
    uStack_4c = uStack_64;
    local_48 = CONCAT44(iVar7,local_60);
    iStack_5c = iVar7;
    if (local_78 == 4) goto LAB_180028b9c;
  }
  else {
    local_78 = 3;
  }
  *param_1 = local_78;
  param_1[1] = CONCAT44(uStack_54,local_58);
  param_1[2] = CONCAT44(uStack_4c,uStack_50);
  param_1[3] = local_48;
  return param_1;
}


