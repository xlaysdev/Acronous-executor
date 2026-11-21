/* FUN_18009c810 @ 18009c810 */

void FUN_18009c810(ulonglong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined7 uStack_9f;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_78;
  ulonglong local_70;
  ulonglong uStack_68;
  ulonglong *local_58;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar4 = *(ulonglong *)(param_2 + 0x10);
  lVar5 = uVar4 * 0x48;
  if (0x1c71c71c71c71c7 < uVar4) {
    uVar11 = 0;
LAB_18009c855:
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(uVar11,lVar5);
  }
  puVar10 = *(undefined8 **)(param_2 + 8);
  local_58 = param_1;
  if (lVar5 == 0) {
    uVar8 = 8;
    uVar12 = 0;
  }
  else {
    FUN_180027490();
    uVar11 = 8;
    uVar8 = thunk_FUN_1801d32d0(lVar5);
    if (uVar8 == 0) goto LAB_18009c855;
    uVar12 = uVar4;
  }
  puVar1 = puVar10 + uVar4 * 9;
  local_50 = 0;
  uStack_68 = uVar8;
  uVar9 = uVar12;
  local_70 = uVar12;
  for (; (uVar9 != 0 && (uVar9 = uVar9 - 1, puVar10 != puVar1)); puVar10 = puVar10 + 9) {
    if (uVar12 <= local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(local_50,uVar12,&PTR_s_C__Users_burne__rustup_toolchain_18020f8a0);
    }
    (**(code **)puVar10[4])(&local_c0,puVar10 + 7,puVar10[5],puVar10[6]);
    local_a0 = *(undefined1 *)(puVar10 + 8);
    local_78 = CONCAT71(uStack_9f,local_a0);
    uVar11 = puVar10[1];
    uVar6 = puVar10[2];
    uVar7 = puVar10[3];
    puVar2 = (undefined8 *)(uVar8 + local_50 * 0x48);
    *puVar2 = *puVar10;
    puVar2[1] = uVar11;
    puVar2 = (undefined8 *)(uVar8 + 0x10 + local_50 * 0x48);
    *puVar2 = uVar6;
    puVar2[1] = uVar7;
    local_98 = (undefined4)local_c0;
    uStack_94 = (undefined4)((ulonglong)local_c0 >> 0x20);
    uStack_90 = (undefined4)uStack_b8;
    uStack_8c = (undefined4)((ulonglong)uStack_b8 >> 0x20);
    puVar3 = (undefined4 *)(uVar8 + 0x20 + local_50 * 0x48);
    *puVar3 = local_98;
    puVar3[1] = uStack_94;
    puVar3[2] = uStack_90;
    puVar3[3] = uStack_8c;
    puVar2 = (undefined8 *)(uVar8 + 0x30 + local_50 * 0x48);
    *puVar2 = local_b0;
    puVar2[1] = uStack_a8;
    *(undefined8 *)(uVar8 + 0x40 + local_50 * 0x48) = local_78;
    local_50 = local_50 + 1;
  }
  local_58[2] = uVar4;
  *local_58 = local_70;
  local_58[1] = uStack_68;
  return;
}


