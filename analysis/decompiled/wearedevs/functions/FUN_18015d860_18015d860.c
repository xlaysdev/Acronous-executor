/* FUN_18015d860 @ 18015d860 */

undefined8 FUN_18015d860(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  undefined7 uVar14;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar15;
  char local_f8;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulonglong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  ulonglong local_80;
  ulonglong local_78;
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  ulonglong local_58;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_80 = *(ulonglong *)(param_1 + 0x50);
  local_58 = ~*(ulonglong *)(param_1 + 0x40);
  local_78 = *(ulonglong *)(param_1 + 0x18);
  local_70 = *(longlong *)(param_1 + 0x28);
  lVar3 = *(longlong *)(param_1 + 0x20);
  uVar4 = *(ulonglong *)(param_1 + 0x38);
  lVar5 = *(longlong *)(param_1 + 8);
  uVar6 = *(ulonglong *)(param_1 + 0x10);
  local_50 = *(ulonglong *)(param_1 + 0x48);
  uVar9 = 0;
  uVar14 = 0;
  local_68 = param_3;
  local_60 = param_2;
  do {
    if (local_50 <= local_80) {
      return CONCAT71(uVar14,uVar9);
    }
    lVar7 = *(longlong *)(param_1 + 0x30);
    if (lVar7 == 0) {
LAB_18015daaf:
                    /* WARNING: Subroutine does not return */
      FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_18025bd90);
    }
    *(longlong *)(param_1 + 0x30) = lVar7 + -1;
    uVar11 = (local_70 + lVar7) - 1;
    uVar13 = 0;
    if (local_78 <= uVar11) {
      uVar13 = local_78;
    }
    lVar12 = (uVar11 - uVar13) * 0x60;
    lVar8 = *(longlong *)(lVar3 + lVar12);
    if (lVar8 == 2) goto LAB_18015daaf;
    lVar12 = lVar12 + lVar3;
    uVar13 = *(ulonglong *)(lVar12 + 0x58);
    local_b0 = *(undefined8 *)(lVar12 + 0x48);
    uStack_a8 = *(undefined8 *)(lVar12 + 0x50);
    uVar11 = *(ulonglong *)(lVar12 + 8);
    uStack_e8 = *(undefined4 *)(lVar12 + 0x10);
    uStack_e4 = *(undefined4 *)(lVar12 + 0x14);
    local_e0 = *(undefined4 *)(lVar12 + 0x18);
    uStack_dc = *(undefined4 *)(lVar12 + 0x1c);
    uStack_d8 = *(undefined4 *)(lVar12 + 0x20);
    uStack_d4 = *(undefined4 *)(lVar12 + 0x24);
    local_d0 = *(undefined4 *)(lVar12 + 0x28);
    uStack_cc = *(undefined4 *)(lVar12 + 0x2c);
    uStack_c8 = *(undefined4 *)(lVar12 + 0x30);
    uStack_c4 = *(undefined4 *)(lVar12 + 0x34);
    local_c0 = *(undefined4 *)(lVar12 + 0x38);
    uStack_bc = *(undefined4 *)(lVar12 + 0x3c);
    uStack_b8 = *(undefined4 *)(lVar12 + 0x40);
    uStack_b4 = *(undefined4 *)(lVar12 + 0x44);
    local_a0 = uVar13;
    lVar12 = FUN_180147900(&uStack_e8);
    local_50 = local_50 - lVar12;
    *(ulonglong *)(param_1 + 0x48) = local_50;
    uVar13 = uVar13 & uVar4;
    while( true ) {
      do {
        uVar15 = uVar13;
        uVar13 = 0;
      } while (uVar6 <= uVar15);
      if ((*(byte *)(lVar5 + uVar15 * 0x18) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_18025bda8);
      }
      puVar1 = (undefined8 *)(lVar5 + uVar15 * 0x18);
      if (puVar1[1] == lVar7 + local_58) break;
      uVar13 = uVar15 + 1;
    }
    local_f8 = (char)lVar8;
    if (local_f8 == '\0') {
      uVar11 = local_58;
      if (((byte)local_60 & lVar7 + local_58 == local_68) != 0) goto LAB_18015d8d4;
      *puVar1 = 0;
      while( true ) {
        uVar13 = uVar15 + 1;
        if (uVar6 <= uVar13) {
          uVar13 = 0;
        }
        if ((*(int *)(lVar5 + uVar13 * 0x18) != 1) ||
           (puVar1 = (undefined8 *)(lVar5 + uVar13 * 0x18),
           (uVar13 - (puVar1[2] & uVar4) & uVar4) == 0)) break;
        local_88 = puVar1[2];
        local_98 = *(undefined4 *)puVar1;
        uStack_94 = *(undefined4 *)((longlong)puVar1 + 4);
        uStack_90 = *(undefined4 *)(puVar1 + 1);
        uStack_8c = *(undefined4 *)((longlong)puVar1 + 0xc);
        *puVar1 = 0;
        if (uVar6 <= uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(local_98,uVar6,&PTR_s_C__Users_burne__cargo_registry_s_18025bd60);
        }
        *(undefined8 *)(lVar5 + 0x10 + uVar15 * 0x18) = local_88;
        puVar2 = (undefined4 *)(lVar5 + uVar15 * 0x18);
        *puVar2 = local_98;
        puVar2[1] = uStack_94;
        puVar2[2] = uStack_90;
        puVar2[3] = uStack_8c;
        uVar15 = uVar13;
      }
    }
    else {
LAB_18015d8d4:
      *puVar1 = 1;
      puVar1[1] = uVar11;
    }
    uVar10 = FUN_18015dc20(&uStack_e8);
    uVar14 = (undefined7)((ulonglong)uVar10 >> 8);
    uVar9 = 1;
  } while( true );
}


