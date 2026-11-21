/* FUN_180052bb0 @ 180052bb0 */

ulonglong FUN_180052bb0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  size_t *psVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  ushort uVar5;
  ushort uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  void *_Buf2;
  size_t _Size;
  longlong lVar10;
  size_t sVar11;
  longlong lVar12;
  char cVar13;
  ushort uVar14;
  int iVar15;
  longlong lVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined7 uVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
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
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined6 uStack_ae;
  
  cVar13 = FUN_180053cd0();
  if (cVar13 == '\0') {
    uVar14 = FUN_180026950(param_1,param_2);
    uVar5 = *(ushort *)(param_1 + 0xb);
    uVar18 = (ulonglong)(uVar14 & uVar5);
    uVar19 = param_1[10];
    lVar7 = param_1[9];
    lVar21 = param_1[4];
    uVar8 = param_1[5];
    lVar9 = *param_2;
    _Buf2 = (void *)param_2[1];
    lVar12 = param_2[1];
    _Size = param_2[2];
    uVar24 = 0;
    do {
      if (uVar19 <= uVar18) {
        uVar18 = 0;
      }
      if (uVar19 == 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar23 = (ulonglong)*(ushort *)(lVar7 + uVar18 * 4);
      uVar20 = (undefined7)((ulonglong)lVar7 >> 8);
      if (uVar23 == 0xffff) {
        sVar11 = param_2[3];
        lVar7 = *param_3;
        lVar12 = param_3[1];
        lVar10 = param_3[2];
        lVar22 = param_3[3];
        if (uVar8 < 0x8000) {
          lVar1 = param_3[4];
          if (uVar8 == param_1[3]) {
            FUN_1801fa370(param_1 + 3);
            lVar21 = param_1[4];
          }
          lVar16 = uVar8 * 0x68;
          *(ulonglong *)(lVar21 + 0x60 + lVar16) = CONCAT62(uStack_ae,uVar14);
          psVar2 = (size_t *)(lVar21 + 0x50 + lVar16);
          *psVar2 = _Size;
          psVar2[1] = sVar11;
          plVar3 = (longlong *)(lVar21 + 0x40 + lVar16);
          *plVar3 = lVar9;
          plVar3[1] = (longlong)_Buf2;
          uStack_f8 = (undefined4)lVar7;
          uStack_f4 = (undefined4)((ulonglong)lVar7 >> 0x20);
          local_f0 = (undefined4)lVar12;
          uStack_ec = (undefined4)((ulonglong)lVar12 >> 0x20);
          uStack_e8 = (undefined4)lVar10;
          uStack_e4 = (undefined4)((ulonglong)lVar10 >> 0x20);
          local_e0 = (undefined4)lVar22;
          uStack_dc = (undefined4)((ulonglong)lVar22 >> 0x20);
          uStack_d8 = (undefined4)lVar1;
          uStack_d4 = (undefined4)((ulonglong)lVar1 >> 0x20);
          puVar4 = (undefined4 *)(lVar21 + 0x30 + lVar16);
          *puVar4 = local_e0;
          puVar4[1] = uStack_dc;
          puVar4[2] = uStack_d8;
          puVar4[3] = uStack_d4;
          puVar4 = (undefined4 *)(lVar21 + 0x20 + lVar16);
          *puVar4 = local_f0;
          puVar4[1] = uStack_ec;
          puVar4[2] = uStack_e8;
          puVar4[3] = uStack_e4;
          puVar4 = (undefined4 *)(lVar21 + 0x10 + lVar16);
          *puVar4 = local_100;
          puVar4[1] = uStack_fc;
          puVar4[2] = uStack_f8;
          puVar4[3] = uStack_f4;
          puVar4 = (undefined4 *)(lVar21 + lVar16);
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = uStack_108;
          puVar4[3] = uStack_104;
          param_1[5] = uVar8 + 1;
          if ((ulonglong)param_1[10] <= uVar18) {
                    /* WARNING: Subroutine does not return */
            FUN_180201d02(uVar18,param_1[10],&PTR_s_C__Users_burne__cargo_registry_s_180208ec0);
          }
          lVar7 = param_1[9];
          *(short *)(lVar7 + uVar18 * 4) = (short)uVar8;
          *(ushort *)(lVar7 + 2 + uVar18 * 4) = uVar14;
          uVar19 = 0;
        }
        else {
          (**(code **)(lVar7 + 0x20))();
          uVar19 = CONCAT71(uVar20,2);
          if (lVar9 != 0) {
            (**(code **)(lVar9 + 0x20))(sVar11,_Buf2,_Size);
          }
        }
        goto LAB_180052f31;
      }
      uVar6 = *(ushort *)(lVar7 + 2 + uVar18 * 4);
      if (((int)uVar18 - (uint)(uVar6 & uVar5) & (uint)uVar5) < uVar24) {
        uVar17 = FUN_180054210(param_1,param_2,param_3,uVar14,uVar18,*param_1 != 2 && 0x1ff < uVar24
                              );
        uVar19 = CONCAT71((int7)((ulonglong)uVar17 >> 8),(char)uVar17 * '\x02');
        goto LAB_180052f31;
      }
      if (uVar6 == uVar14) {
        if (uVar8 <= uVar23) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(uVar23,uVar8,&PTR_s_C__Users_burne__cargo_registry_s_180208ea8);
        }
        lVar22 = uVar23 * 0x68;
        lVar10 = *(longlong *)(lVar21 + 0x40 + lVar22);
        if ((lVar9 == 0) != (lVar10 != 0)) {
          lVar1 = lVar21 + lVar22;
          if (lVar10 == 0) {
            if (*(char *)(lVar1 + 0x48) == (char)lVar12) goto LAB_180052d6c;
          }
          else if (*(size_t *)(lVar1 + 0x50) == _Size) {
            iVar15 = memcmp(*(void **)(lVar1 + 0x48),_Buf2,_Size);
            if (iVar15 == 0) goto LAB_180052d6c;
          }
        }
      }
      uVar24 = uVar24 + 1;
      uVar18 = uVar18 + 1;
    } while( true );
  }
  (**(code **)(*param_3 + 0x20))(param_3[3],param_3[1],param_3[2]);
  uVar19 = CONCAT71((int7)((ulonglong)param_1 >> 8),2);
  if (*param_2 != 0) {
    (**(code **)(*param_2 + 0x20))(param_2[3],param_2[1],param_2[2]);
  }
LAB_180052f31:
  return uVar19 & 0xffffffff;
LAB_180052d6c:
  FUN_180051b80(uVar23,lVar21 + lVar22,param_1 + 6,param_3);
  uVar19 = CONCAT71(uVar20,1);
  if (lVar9 != 0) {
    (**(code **)(lVar9 + 0x20))(param_2[3],_Buf2,_Size);
  }
  goto LAB_180052f31;
}


