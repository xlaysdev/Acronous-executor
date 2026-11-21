/* FUN_1800530f0 @ 1800530f0 */

void FUN_1800530f0(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  size_t *psVar4;
  longlong *plVar5;
  undefined1 uVar6;
  ushort uVar7;
  ushort uVar8;
  longlong lVar9;
  longlong lVar10;
  size_t sVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  longlong lVar17;
  char cVar18;
  ushort uVar19;
  int iVar20;
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  void *_Buf2;
  ulonglong uVar24;
  size_t _Size;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined6 uStack_be;
  ulonglong local_88;
  
  cVar18 = FUN_180053cd0(param_2);
  if (cVar18 == '\0') {
    uVar19 = FUN_180026950(param_2,param_3);
    uVar7 = *(ushort *)(param_2 + 0xb);
    uVar28 = (ulonglong)(uVar19 & uVar7);
    uVar22 = param_2[10];
    lVar23 = param_2[9];
    lVar25 = param_2[4];
    local_88 = param_2[5];
    lVar9 = *param_3;
    _Buf2 = (void *)param_3[1];
    lVar17 = param_3[1];
    _Size = param_3[2];
    uVar24 = 0;
    do {
      if (uVar22 <= uVar28) {
        uVar28 = 0;
      }
      if (uVar22 == 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar27 = (ulonglong)*(ushort *)(lVar23 + uVar28 * 4);
      if (uVar27 == 0xffff) {
        sVar11 = param_3[3];
        lVar23 = *param_4;
        lVar17 = param_4[1];
        lVar10 = param_4[2];
        lVar26 = param_4[3];
        if (0x7fff < local_88) {
          (**(code **)(lVar23 + 0x20))();
          if (lVar9 != 0) {
            (**(code **)(lVar9 + 0x20))(sVar11,_Buf2,_Size);
          }
          *(undefined1 *)(param_1 + 4) = 3;
          return;
        }
        lVar1 = param_4[4];
        if (local_88 == param_2[3]) {
          FUN_1801fa370(param_2 + 3);
          lVar25 = param_2[4];
        }
        lVar21 = local_88 * 0x68;
        *(ulonglong *)(lVar25 + 0x60 + lVar21) = CONCAT62(uStack_be,uVar19);
        psVar4 = (size_t *)(lVar25 + 0x50 + lVar21);
        *psVar4 = _Size;
        psVar4[1] = sVar11;
        plVar5 = (longlong *)(lVar25 + 0x40 + lVar21);
        *plVar5 = lVar9;
        plVar5[1] = (longlong)_Buf2;
        uStack_108 = (undefined4)lVar23;
        uStack_104 = (undefined4)((ulonglong)lVar23 >> 0x20);
        local_100 = (undefined4)lVar17;
        uStack_fc = (undefined4)((ulonglong)lVar17 >> 0x20);
        uStack_f8 = (undefined4)lVar10;
        uStack_f4 = (undefined4)((ulonglong)lVar10 >> 0x20);
        local_f0 = (undefined4)lVar26;
        uStack_ec = (undefined4)((ulonglong)lVar26 >> 0x20);
        uStack_e8 = (undefined4)lVar1;
        uStack_e4 = (undefined4)((ulonglong)lVar1 >> 0x20);
        puVar3 = (undefined4 *)(lVar25 + 0x30 + lVar21);
        *puVar3 = local_f0;
        puVar3[1] = uStack_ec;
        puVar3[2] = uStack_e8;
        puVar3[3] = uStack_e4;
        puVar3 = (undefined4 *)(lVar25 + 0x20 + lVar21);
        *puVar3 = local_100;
        puVar3[1] = uStack_fc;
        puVar3[2] = uStack_f8;
        puVar3[3] = uStack_f4;
        puVar3 = (undefined4 *)(lVar25 + 0x10 + lVar21);
        *puVar3 = local_110;
        puVar3[1] = uStack_10c;
        puVar3[2] = uStack_108;
        puVar3[3] = uStack_104;
        *(undefined8 *)(lVar25 + lVar21) = 0;
        ((undefined8 *)(lVar25 + lVar21))[1] = uStack_118;
        param_2[5] = local_88 + 1;
        if ((ulonglong)param_2[10] <= uVar28) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(uVar28,param_2[10],&PTR_s_C__Users_burne__cargo_registry_s_180208ef0);
        }
        lVar23 = param_2[9];
        *(short *)(lVar23 + uVar28 * 4) = (short)local_88;
        *(ushort *)(lVar23 + 2 + uVar28 * 4) = uVar19;
LAB_18005350c:
        *(undefined1 *)(param_1 + 4) = 2;
        return;
      }
      uVar8 = *(ushort *)(lVar23 + 2 + uVar28 * 4);
      if (((int)uVar28 - (uint)(uVar8 & uVar7) & (uint)uVar7) < uVar24) {
        uVar22 = FUN_180054210(param_2,param_3,param_4,uVar19,uVar28,*param_2 != 2 && 0x1ff < uVar24
                              );
        if ((uVar22 & 1) != 0) {
          *(undefined1 *)(param_1 + 4) = 3;
          return;
        }
        goto LAB_18005350c;
      }
      if (uVar8 == uVar19) {
        if (local_88 <= uVar27) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(uVar27,local_88,&PTR_s_C__Users_burne__cargo_registry_s_180208ed8);
        }
        lVar26 = uVar27 * 0x68;
        lVar10 = *(longlong *)(lVar25 + 0x40 + lVar26);
        if ((lVar9 == 0) != (lVar10 != 0)) {
          lVar1 = lVar25 + lVar26;
          if (lVar10 == 0) {
            if (*(char *)(lVar1 + 0x48) == (char)lVar17) goto LAB_1800532e0;
          }
          else if (*(size_t *)(lVar1 + 0x50) == _Size) {
            iVar20 = memcmp(*(void **)(lVar1 + 0x48),_Buf2,_Size);
            if (iVar20 == 0) goto LAB_1800532e0;
          }
        }
      }
      uVar24 = uVar24 + 1;
      uVar28 = uVar28 + 1;
    } while( true );
  }
  *(undefined1 *)(param_1 + 4) = 3;
  (**(code **)(*param_4 + 0x20))(param_4[3],param_4[1],param_4[2]);
  if (*param_3 == 0) {
    return;
  }
  lVar23 = param_3[3];
  UNRECOVERED_JUMPTABLE = *(code **)(*param_3 + 0x20);
  _Buf2 = (void *)param_3[1];
  _Size = param_3[2];
LAB_180053182:
                    /* WARNING: Could not recover jumptable at 0x000180053195. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(lVar23,_Buf2,_Size);
  return;
LAB_1800532e0:
  lVar1 = *param_4;
  uVar12 = *(undefined4 *)((longlong)param_4 + 4);
  lVar21 = param_4[1];
  uVar13 = *(undefined4 *)((longlong)param_4 + 0xc);
  lVar23 = param_4[2];
  lVar17 = param_4[3];
  lVar10 = param_4[4];
  if (*(char *)(lVar25 + lVar26) != '\0') {
    FUN_180054460(param_2,*(undefined8 *)(lVar25 + lVar26 + 8));
    local_88 = param_2[5];
  }
  if (local_88 <= uVar27) {
                    /* WARNING: Subroutine does not return */
    FUN_180201d02(uVar27,local_88,&PTR_s_C__Users_burne__cargo_registry_s_180208f80);
  }
  lVar25 = param_2[4];
  puVar2 = (undefined8 *)(lVar25 + 0x18 + lVar26);
  uVar14 = *puVar2;
  uVar15 = puVar2[1];
  puVar2 = (undefined8 *)(lVar25 + 0x28 + lVar26);
  uVar16 = puVar2[1];
  param_1[2] = *puVar2;
  param_1[3] = uVar16;
  *param_1 = uVar14;
  param_1[1] = uVar15;
  uVar6 = *(undefined1 *)(lVar25 + 0x38 + lVar26);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(lVar25 + 0x3c + lVar26);
  *(undefined4 *)((longlong)param_1 + 0x21) = *(undefined4 *)(lVar25 + 0x39 + lVar26);
  puVar3 = (undefined4 *)(lVar25 + 0x18 + lVar26);
  *puVar3 = (int)lVar1;
  puVar3[1] = uVar12;
  puVar3[2] = (int)lVar21;
  puVar3[3] = uVar13;
  *(longlong *)(lVar25 + 0x28 + lVar26) = lVar23;
  *(longlong *)(lVar25 + 0x30 + lVar26) = lVar17;
  *(longlong *)(lVar25 + 0x38 + lVar26) = lVar10;
  *(undefined1 *)(param_1 + 4) = uVar6;
  if (lVar9 == 0) {
    return;
  }
  lVar23 = param_3[3];
  UNRECOVERED_JUMPTABLE = *(code **)(lVar9 + 0x20);
  goto LAB_180053182;
}


