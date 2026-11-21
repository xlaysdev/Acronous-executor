/* FUN_180126d10 @ 180126d10 */

void FUN_180126d10(ulonglong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  ulonglong uStack_68;
  ulonglong *local_58;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar3 = *(ulonglong *)(param_2 + 0x10);
  uVar9 = uVar3 * 0x40;
  if (0x7ffffffffffffff8 < uVar9 || uVar3 >> 0x3a != 0) {
    uVar12 = 0;
LAB_180126d62:
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(uVar12,uVar9);
  }
  puVar11 = *(undefined8 **)(param_2 + 8);
  local_58 = param_1;
  if (uVar9 == 0) {
    uVar7 = 8;
    uVar9 = 0;
  }
  else {
    FUN_180027490();
    uVar12 = 8;
    uVar7 = thunk_FUN_1801d32d0(uVar9,8);
    if (uVar7 == 0) goto LAB_180126d62;
    uVar9 = uVar3;
  }
  puVar10 = puVar11 + uVar3 * 8;
  local_50 = 0;
  uStack_68 = uVar7;
  uVar13 = uVar9;
  local_70 = uVar9;
  for (; (uVar13 != 0 && (uVar13 = uVar13 - 1, puVar11 != puVar10)); puVar11 = puVar11 + 8) {
    if (uVar9 <= local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(local_50,uVar9,&PTR_s_C__Users_burne__rustup_toolchain_180242790);
    }
    (**(code **)puVar11[4])(&local_98,puVar11 + 7,puVar11[5],puVar11[6]);
    uVar12 = *puVar11;
    uVar4 = puVar11[1];
    uVar5 = puVar11[2];
    uVar6 = puVar11[3];
    lVar8 = local_50 * 0x40;
    puVar1 = (undefined8 *)(uVar7 + 0x30 + lVar8);
    *puVar1 = local_88;
    puVar1[1] = uStack_80;
    puVar1 = (undefined8 *)(uVar7 + 0x20 + lVar8);
    *puVar1 = local_98;
    puVar1[1] = uStack_90;
    *(undefined8 *)(uVar7 + lVar8) = uVar12;
    ((undefined8 *)(uVar7 + lVar8))[1] = uVar4;
    local_a8 = (undefined4)uVar5;
    uStack_a4 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uStack_a0 = (undefined4)uVar6;
    uStack_9c = (undefined4)((ulonglong)uVar6 >> 0x20);
    puVar2 = (undefined4 *)(uVar7 + 0x10 + lVar8);
    *puVar2 = local_a8;
    puVar2[1] = uStack_a4;
    puVar2[2] = uStack_a0;
    puVar2[3] = uStack_9c;
    local_50 = local_50 + 1;
  }
  local_58[2] = uVar3;
  *local_58 = local_70;
  local_58[1] = uStack_68;
  return;
}


