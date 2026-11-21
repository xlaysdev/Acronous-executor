/* FUN_18009c9e0 @ 18009c9e0 */

void FUN_18009c9e0(ulonglong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined7 uStack_7f;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong *local_60;
  ulonglong local_58;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar7 = *(ulonglong *)(param_2 + 0x10);
  lVar6 = uVar7 * 0x58;
  if (0x1745d1745d1745d < uVar7) {
    uVar8 = 0;
LAB_18009ca1d:
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(uVar8,lVar6);
  }
  lVar10 = *(longlong *)(param_2 + 8);
  local_60 = param_1;
  local_58 = uVar7;
  if (lVar6 == 0) {
    uVar4 = 8;
    uVar7 = 0;
  }
  else {
    FUN_180027490();
    uVar8 = 8;
    uVar4 = thunk_FUN_1801d32d0(lVar6,8);
    if (uVar4 == 0) goto LAB_18009ca1d;
  }
  lVar6 = lVar6 + lVar10;
  local_50 = 0;
  uStack_70 = uVar4;
  uVar9 = uVar7;
  local_78 = uVar7;
  for (; (uVar9 != 0 && (uVar9 = uVar9 - 1, lVar10 != lVar6)); lVar10 = lVar10 + 0x58) {
    if (uVar7 <= local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(local_50,uVar7,&PTR_s_C__Users_burne__rustup_toolchain_18020f8a0);
    }
    FUN_1801ed500(&local_d0,lVar10);
    local_80 = *(undefined1 *)(lVar10 + 0x50);
    local_90 = *(undefined8 *)(lVar10 + 0x40);
    uStack_88 = *(undefined8 *)(lVar10 + 0x48);
    local_a8 = *(undefined4 *)(lVar10 + 0x28);
    local_94 = *(undefined4 *)(lVar10 + 0x3c);
    uVar8 = *(undefined8 *)(lVar10 + 0x18);
    uStack_b0 = *(undefined8 *)(lVar10 + 0x20);
    uVar3 = *(undefined8 *)(lVar10 + 0x28);
    lVar5 = local_50 * 0x58;
    local_50 = local_50 + 1;
    local_a4 = (undefined4)*(undefined8 *)(lVar10 + 0x2c);
    uStack_a0 = (undefined4)((ulonglong)*(undefined8 *)(lVar10 + 0x2c) >> 0x20);
    uStack_9c = (undefined4)*(undefined8 *)(lVar10 + 0x34);
    uStack_98 = (undefined4)((ulonglong)*(undefined8 *)(lVar10 + 0x34) >> 0x20);
    *(undefined8 *)(uVar4 + lVar5) = local_d0;
    ((undefined8 *)(uVar4 + lVar5))[1] = uStack_c8;
    *(ulonglong *)(uVar4 + 0x50 + lVar5) = CONCAT71(uStack_7f,local_80);
    puVar1 = (undefined8 *)(uVar4 + 0x40 + lVar5);
    *puVar1 = local_90;
    puVar1[1] = uStack_88;
    puVar1 = (undefined8 *)(uVar4 + 0x30 + lVar5);
    *puVar1 = CONCAT44(uStack_9c,uStack_a0);
    puVar1[1] = CONCAT44(local_94,uStack_98);
    puVar1 = (undefined8 *)(uVar4 + 0x20 + lVar5);
    *puVar1 = uStack_b0;
    puVar1[1] = uVar3;
    local_b8._0_4_ = (undefined4)uVar8;
    local_b8._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
    puVar2 = (undefined4 *)(uVar4 + 0x10 + lVar5);
    *puVar2 = uStack_c0;
    puVar2[1] = uStack_bc;
    puVar2[2] = (undefined4)local_b8;
    puVar2[3] = local_b8._4_4_;
    local_b8 = uVar8;
  }
  local_60[2] = local_58;
  *local_60 = local_78;
  local_60[1] = uStack_70;
  return;
}


