/* FUN_1800ed090 @ 1800ed090 */

void FUN_1800ed090(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong unaff_RBP;
  ulonglong uVar8;
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
    uVar7 = 0;
    do {
      if (*(ulonglong *)(param_1 + 0x38) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180216588);
      }
      uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 8 + uVar7 * 0x10);
      uStack_60 = CONCAT44((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
      local_68 = param_1;
      lVar5 = FUN_180152e90(&local_68);
      unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),*(int *)(lVar5 + 0x78) != 1000000000);
      uVar6 = FUN_180152f00(&local_68);
      FUN_18015a1c0(uVar2,uVar6);
      FUN_180061b50(lVar3 + 8,uVar4,&local_68);
      FUN_18012fe10(lVar3 + 8,&local_68,uVar1);
      local_58 = local_68;
      uStack_50 = uStack_60;
      FUN_1801537a0(uVar1,&local_58,unaff_RBP & 0xffffffff);
      uVar7 = (uVar7 + 1) - (ulonglong)(*(ulonglong *)(param_1 + 0x58) < uVar8);
      uVar8 = uVar8 - (*(ulonglong *)(param_1 + 0x58) < uVar8);
    } while (uVar7 < uVar8);
  }
  return;
}


