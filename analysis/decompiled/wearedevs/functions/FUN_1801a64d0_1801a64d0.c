/* FUN_1801a64d0 @ 1801a64d0 */

ushort FUN_1801a64d0(longlong param_1,ulonglong param_2,ulonglong param_3,char param_4,
                    longlong param_5,ulonglong param_6)

{
  ulonglong *puVar1;
  ushort uVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ushort uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  
  if (param_6 < param_3 + param_2 || CARRY8(param_3,param_2)) {
    uVar8 = 0xfffd;
    lVar10 = 1;
    if (param_4 == '\0') {
      return 0xfffd;
    }
    lVar6 = 1;
  }
  else {
    lVar10 = param_5 + param_2 * 2;
    uVar8 = *(ushort *)(param_5 + param_2 * 2);
    if ((uVar8 ^ 0xffefd800) < 0xffef0800) {
      uVar8 = 0xfffd;
    }
    if (param_4 == '\0') {
      puVar1 = (ulonglong *)(param_1 + 0x48);
      lVar6 = param_3 * 2 + -2;
      lVar13 = 1;
      do {
        uVar2 = *(ushort *)(lVar10 + lVar13 * 2);
        uVar9 = (uint)uVar2;
        if ((uVar2 ^ 0xffefd800) < 0xffef0800) {
          uVar9 = 0xfffd;
        }
        plVar3 = *(longlong **)(param_1 + 0x68);
        if ((*(char *)((longlong)plVar3 + 0x34) == '\x01') && (0xfff < uVar9)) {
          uVar4 = FUN_1801a8300(plVar3,uVar9);
          if ((uVar4 & 0x3ffffe00) == 0xd800) goto LAB_1801a65e4;
LAB_1801a663d:
          uVar4 = 0;
          uVar12 = *puVar1;
          uVar5 = uVar12;
          if (0x11 < uVar12) goto LAB_1801a6649;
LAB_1801a65f1:
          uVar12 = 0x11;
          lVar7 = param_1 + 4;
          puVar11 = puVar1;
        }
        else {
          uVar4 = *(uint *)(plVar3[2] +
                           (ulonglong)
                           ((uVar9 & 0x3f) +
                           (uint)*(ushort *)(*plVar3 + (ulonglong)(uVar9 >> 6) * 2)) * 4);
          if ((uVar4 & 0x3ffffe00) != 0xd800) goto LAB_1801a663d;
LAB_1801a65e4:
          uVar4 = uVar4 << 0x18;
          uVar12 = *puVar1;
          uVar5 = uVar12;
          if (uVar12 < 0x12) goto LAB_1801a65f1;
LAB_1801a6649:
          uVar5 = *(ulonglong *)(param_1 + 8);
          lVar7 = *(longlong *)(param_1 + 0x10);
          puVar11 = (ulonglong *)(param_1 + 8);
        }
        if (uVar5 == uVar12) {
          FUN_1801fc070(param_1);
          uVar5 = *(ulonglong *)(param_1 + 8);
          lVar7 = *(longlong *)(param_1 + 0x10);
          puVar11 = (ulonglong *)(param_1 + 8);
        }
        *(uint *)(lVar7 + uVar5 * 4) = uVar4 | uVar9;
        *puVar11 = *puVar11 + 1;
        lVar13 = lVar13 + 1;
        lVar6 = lVar6 + -2;
        if (lVar6 == 0) {
          return uVar8;
        }
      } while( true );
    }
    lVar6 = param_5 + param_2 * 2 + 2;
    lVar10 = lVar10 + param_3 * 2;
  }
  FUN_1801a4760(param_1,lVar6,lVar10);
  return uVar8;
}


