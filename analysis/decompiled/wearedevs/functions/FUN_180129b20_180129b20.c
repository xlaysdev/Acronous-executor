/* FUN_180129b20 @ 180129b20 */

undefined8 FUN_180129b20(int *param_1)

{
  short sVar1;
  undefined4 *puVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  char cVar9;
  uint uVar10;
  undefined4 *puVar11;
  longlong lVar12;
  short sVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  
  lVar12 = *(longlong *)(param_1 + 10);
  uVar16 = *(ulonglong *)(param_1 + 0x14);
  if (*param_1 == 1) {
    if ((ulonglong)(lVar12 * 5) < uVar16) {
      FUN_1801ab140(param_1);
      lVar12 = *(longlong *)(param_1 + 0x14);
      if (lVar12 != 0) {
        puVar6 = *(undefined4 **)(param_1 + 0x12);
        uVar16 = lVar12 * 4 - 4;
        puVar11 = puVar6;
        if (0x1b < uVar16) {
          uVar16 = (uVar16 >> 2) + 1;
          uVar17 = uVar16 & 0xfffffffffffffff8;
          puVar11 = puVar6 + uVar17;
          uVar18 = 0;
          do {
            puVar2 = puVar6 + uVar18;
            *puVar2 = 0xffff;
            puVar2[1] = 0xffff;
            puVar2[2] = 0xffff;
            puVar2[3] = 0xffff;
            puVar2 = puVar6 + uVar18 + 4;
            *puVar2 = 0xffff;
            puVar2[1] = 0xffff;
            puVar2[2] = 0xffff;
            puVar2[3] = 0xffff;
            uVar18 = uVar18 + 8;
          } while (uVar17 != uVar18);
          if (uVar16 == uVar17) goto LAB_180129bcf;
        }
        do {
          *puVar11 = 0xffff;
          puVar11 = puVar11 + 1;
        } while (puVar11 != puVar6 + lVar12);
      }
LAB_180129bcf:
      lVar12 = *(longlong *)(param_1 + 10);
      if (lVar12 == 0) {
        return 0;
      }
      lVar7 = *(longlong *)(param_1 + 8);
      uVar3 = *(ushort *)(param_1 + 0x16);
      lVar8 = *(longlong *)(param_1 + 0x12);
      uVar16 = *(ulonglong *)(param_1 + 0x14);
      lVar14 = lVar7;
      sVar13 = 0;
      do {
        lVar15 = lVar14 + 0x60;
        sVar1 = sVar13 + 1;
        uVar10 = FUN_180026950(param_1);
        uVar17 = (ulonglong)(uVar10 & uVar3);
        *(short *)(lVar14 + 0x58) = (short)uVar10;
        uVar18 = 0;
        if (uVar16 <= uVar17) {
          uVar17 = 0;
        }
        while( true ) {
          if (uVar16 == 0) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          if (*(short *)(lVar8 + uVar17 * 4) == -1) goto LAB_180129cb0;
          if (((uint)uVar3 & (int)uVar17 - (uint)(*(ushort *)(lVar8 + 2 + uVar17 * 4) & uVar3)) <
              uVar18) break;
          uVar18 = uVar18 + 1;
          uVar17 = uVar17 + 1;
          if (uVar16 <= uVar17) {
            uVar17 = 0;
          }
        }
        while( true ) {
          if (uVar16 <= uVar17) {
            uVar17 = 0;
          }
          if (uVar16 == 0) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          sVar5 = *(short *)(lVar8 + uVar17 * 4);
          if (sVar5 == -1) break;
          uVar4 = *(ushort *)(lVar8 + 2 + uVar17 * 4);
          *(short *)(lVar8 + uVar17 * 4) = sVar13;
          *(short *)(lVar8 + 2 + uVar17 * 4) = (short)uVar10;
          uVar17 = uVar17 + 1;
          sVar13 = sVar5;
          uVar10 = (uint)uVar4;
        }
LAB_180129cb0:
        *(short *)(lVar8 + uVar17 * 4) = sVar13;
        *(short *)(lVar8 + 2 + uVar17 * 4) = (short)uVar10;
        lVar14 = lVar15;
        sVar13 = sVar1;
        if (lVar15 == lVar12 * 0x60 + lVar7) {
          return 0;
        }
      } while( true );
    }
    param_1[0] = 0;
    param_1[1] = 0;
  }
  else {
    if (lVar12 != uVar16 - (uVar16 >> 2)) {
      return 0;
    }
    if (lVar12 == 0) {
      *(undefined2 *)(param_1 + 0x16) = 7;
      FUN_180027490();
      puVar11 = (undefined4 *)thunk_FUN_1801d32d0(0x20,2);
      if (puVar11 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_18020171e(2,0x20);
      }
      *puVar11 = 0xffff;
      puVar11[1] = 0xffff;
      puVar11[2] = 0xffff;
      puVar11[3] = 0xffff;
      puVar11[4] = 0xffff;
      puVar11[5] = 0xffff;
      puVar11[6] = 0xffff;
      puVar11[7] = 0xffff;
      if (uVar16 != 0) {
        thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x12),uVar16 << 2,2);
      }
      *(undefined4 **)(param_1 + 0x12) = puVar11;
      param_1[0x14] = 8;
      param_1[0x15] = 0;
      FUN_180027490();
      lVar12 = thunk_FUN_1801d32d0(0x240,8);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_18020171e(8,0x240);
      }
      if (*(longlong *)(param_1 + 6) != 0) {
        thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 8),*(longlong *)(param_1 + 6) * 0x60,8);
      }
      param_1[6] = 6;
      param_1[7] = 0;
      *(longlong *)(param_1 + 8) = lVar12;
      param_1[10] = 0;
      param_1[0xb] = 0;
      return 0;
    }
  }
  cVar9 = FUN_18012b7f0(param_1,uVar16 * 2);
  if (cVar9 == '\0') {
    return 0;
  }
  return 1;
}


