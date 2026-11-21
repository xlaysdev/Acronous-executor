/* FUN_1800ecf70 @ 1800ecf70 */

void FUN_1800ecf70(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong unaff_RBP;
  ulonglong uVar9;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  
  uVar8 = *(ulonglong *)(param_1 + 0x58);
  if (uVar8 != 0) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    lVar3 = param_2[2];
    uVar4 = param_2[3];
    uVar5 = param_2[4];
    uVar9 = 0;
    do {
      if (*(ulonglong *)(param_1 + 0x38) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180216588);
      }
      uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 8 + uVar9 * 0x10);
      uStack_60 = CONCAT44((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
      local_68 = param_1;
      lVar6 = FUN_180152e90(&local_68);
      unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),*(int *)(lVar6 + 0x78) != 1000000000);
      uVar7 = FUN_180152f00(&local_68);
      FUN_180155270(uVar2,uVar4,uVar7);
      FUN_180061b50(lVar3 + 8,uVar5,&local_68);
      FUN_18012fe10(lVar3 + 8,&local_68,uVar1);
      local_58 = local_68;
      uStack_50 = uStack_60;
      FUN_1801537a0(uVar1,&local_58,unaff_RBP & 0xffffffff);
      uVar9 = (uVar9 + 1) - (ulonglong)(*(ulonglong *)(param_1 + 0x58) < uVar8);
      uVar8 = uVar8 - (*(ulonglong *)(param_1 + 0x58) < uVar8);
    } while (uVar9 < uVar8);
  }
  return;
}


