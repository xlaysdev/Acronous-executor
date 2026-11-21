/* FUN_1800ecde0 @ 1800ecde0 */

void FUN_1800ecde0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  uVar10 = *(ulonglong *)(param_1 + 0x58);
  if (uVar10 != 0) {
    puVar4 = (uint *)*param_2;
    local_70 = param_2[1];
    local_78 = param_2[2];
    local_80 = param_2[3];
    lVar5 = param_2[4];
    local_88 = param_2[5];
    local_90 = param_2[6];
    uVar9 = 0;
    do {
      if (*(ulonglong *)(param_1 + 0x38) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180216588);
      }
      uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 8 + uVar9 * 0x10);
      uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0xc + uVar9 * 0x10);
      local_68 = param_1;
      local_60 = uVar2;
      local_5c = uVar1;
      lVar7 = FUN_180152e90(&local_68);
      if (*puVar4 < *(uint *)(lVar7 + 300)) {
        lVar7 = FUN_180152e90(&local_68);
        cVar6 = FUN_18014a2e0(local_70,*(undefined4 *)(lVar7 + 300));
        if (cVar6 != '\0') {
          local_a0 = param_1;
          uStack_98 = uVar2;
          uStack_94 = uVar1;
          lVar7 = FUN_180152e90(&local_a0);
          iVar3 = *(int *)(lVar7 + 0x78);
          uVar8 = FUN_180152f00(&local_a0);
          FUN_180155270(local_80,local_88,uVar8);
          FUN_180061b50(lVar5 + 8,local_90,&local_a0);
          uVar8 = local_78;
          FUN_18012fe10(lVar5 + 8,&local_a0,local_78);
          local_58 = (undefined4)local_a0;
          uStack_54 = local_a0._4_4_;
          uStack_50 = uStack_98;
          uStack_4c = uStack_94;
          FUN_1801537a0(uVar8,&local_58,CONCAT31((int3)((uint)uVar1 >> 8),iVar3 != 1000000000));
        }
      }
      uVar9 = (uVar9 + 1) - (ulonglong)(*(ulonglong *)(param_1 + 0x58) < uVar10);
      uVar10 = uVar10 - (*(ulonglong *)(param_1 + 0x58) < uVar10);
    } while (uVar9 < uVar10);
  }
  return;
}


