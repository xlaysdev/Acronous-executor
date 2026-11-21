/* FUN_18012b7f0 @ 18012b7f0 */

bool FUN_18012b7f0(longlong param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  short *psVar2;
  ushort uVar3;
  short *psVar4;
  ulonglong uVar5;
  short *psVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  short *psVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  short *psVar15;
  ulonglong uVar16;
  int local_78 [2];
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  ulonglong local_58;
  short *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (0x8000 < param_2) goto LAB_18012ba2a;
  psVar4 = *(short **)(param_1 + 0x48);
  uVar5 = *(ulonglong *)(param_1 + 0x50);
  local_60 = uVar5 * 4;
  if (uVar5 != 0) {
    uVar10 = 0;
    lVar11 = local_60;
    do {
      if ((psVar4[uVar10 * 2] != -1) &&
         (((int)uVar10 - (uint)(psVar4[uVar10 * 2 + 1] & *(ushort *)(param_1 + 0x58)) &
          (uint)*(ushort *)(param_1 + 0x58)) == 0)) goto joined_r0x00018012b93f;
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + -4;
    } while (lVar11 != 0);
  }
  uVar10 = 0;
joined_r0x00018012b93f:
  if (param_2 == 0) {
    puVar7 = (undefined4 *)0x2;
    uVar13 = 0;
  }
  else {
    FUN_180027490();
    puVar7 = (undefined4 *)thunk_FUN_1801d32d0(param_2 * 4,2);
    if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(2,param_2 * 4);
    }
    puVar9 = puVar7;
    if (param_2 != 1) {
      lVar11 = 1;
      if (8 < param_2) {
        uVar13 = param_2 - 1 & 0xfffffffffffffff8;
        puVar9 = puVar7 + uVar13;
        lVar11 = uVar13 + 1;
        uVar14 = 0;
        do {
          puVar1 = puVar7 + uVar14;
          *puVar1 = 0xffff;
          puVar1[1] = 0xffff;
          puVar1[2] = 0xffff;
          puVar1[3] = 0xffff;
          puVar1 = puVar7 + uVar14 + 4;
          *puVar1 = 0xffff;
          puVar1[1] = 0xffff;
          puVar1[2] = 0xffff;
          puVar1[3] = 0xffff;
          uVar14 = uVar14 + 8;
        } while (uVar13 != uVar14);
        if (param_2 - 1 == uVar13) goto LAB_18012b92f;
      }
      lVar11 = param_2 - lVar11;
      do {
        *puVar9 = 0xffff;
        puVar9 = puVar9 + 1;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
LAB_18012b92f:
    *puVar9 = 0xffff;
    uVar13 = param_2;
  }
  *(undefined4 **)(param_1 + 0x48) = puVar7;
  *(ulonglong *)(param_1 + 0x50) = uVar13;
  uVar8 = (int)param_2 - 1;
  *(short *)(param_1 + 0x58) = (short)uVar8;
  local_58 = uVar5;
  local_50 = psVar4;
  if (uVar5 < uVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_180201a30(uVar10,uVar5,uVar5,&PTR_s_C__Users_burne__cargo_registry_s_180242ec8);
  }
  psVar2 = psVar4 + uVar10 * 2;
  if (uVar10 != uVar5) {
    psVar6 = psVar2 + 2;
    psVar15 = psVar2;
    do {
      psVar12 = psVar6;
      if (*psVar15 != -1) {
        uVar3 = psVar15[1];
        uVar14 = (ulonglong)(uVar3 & uVar8);
        while( true ) {
          do {
            uVar16 = uVar14;
            uVar14 = 0;
          } while (uVar13 <= uVar16);
          if (*(short *)(puVar7 + uVar16) == -1) break;
          uVar14 = uVar16 + 1;
        }
        *(short *)(puVar7 + uVar16) = *psVar15;
        *(ushort *)((longlong)puVar7 + uVar16 * 4 + 2) = uVar3;
      }
      psVar6 = psVar12 + (ulonglong)(psVar12 != psVar4 + uVar5 * 2) * 2;
      psVar15 = psVar12;
    } while (psVar12 != psVar4 + uVar5 * 2);
  }
  if (uVar10 != 0) {
    psVar6 = psVar4 + 2;
    psVar15 = psVar4;
    do {
      psVar12 = psVar6;
      if (*psVar15 != -1) {
        uVar3 = psVar15[1];
        uVar5 = (ulonglong)(uVar3 & uVar8);
        while( true ) {
          do {
            uVar10 = uVar5;
            uVar5 = 0;
          } while (uVar13 <= uVar10);
          if (*(short *)(puVar7 + uVar10) == -1) break;
          uVar5 = uVar10 + 1;
        }
        *(short *)(puVar7 + uVar10) = *psVar15;
        *(ushort *)((longlong)puVar7 + uVar10 * 4 + 2) = uVar3;
      }
      psVar6 = psVar12 + (ulonglong)(psVar12 != psVar2) * 2;
      psVar15 = psVar12;
    } while (psVar12 != psVar2);
  }
  lVar11 = *(longlong *)(param_1 + 0x18);
  uVar5 = *(ulonglong *)(param_1 + 0x28);
  uVar13 = uVar13 - ((uVar13 >> 2) + uVar5);
  if (lVar11 - uVar5 < uVar13) {
    if (CARRY8(uVar13,uVar5)) {
      local_70 = 0;
LAB_18012bb2b:
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(local_70,lVar11);
    }
    FUN_1801f69c0(local_78,lVar11,*(undefined8 *)(param_1 + 0x20),uVar13 + uVar5,8,0x60);
    if (local_78[0] == 1) {
      lVar11 = local_68;
      goto LAB_18012bb2b;
    }
    *(undefined8 *)(param_1 + 0x20) = local_70;
    *(ulonglong *)(param_1 + 0x18) = uVar13 + uVar5;
  }
  if (local_58 != 0) {
    thunk_FUN_1801d3330(psVar4,local_60,2);
  }
LAB_18012ba2a:
  return 0x8000 < param_2;
}


