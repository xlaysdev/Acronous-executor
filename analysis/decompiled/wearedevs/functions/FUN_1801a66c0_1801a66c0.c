/* FUN_1801a66c0 @ 1801a66c0 */

uint FUN_1801a66c0(longlong param_1,ulonglong param_2,ulonglong param_3,char param_4,
                  longlong param_5,ulonglong param_6)

{
  ulonglong *puVar1;
  longlong *plVar2;
  uint3 uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint local_54;
  
  lVar7 = 1;
  if (param_3 + param_2 <= param_6 && !CARRY8(param_3,param_2)) {
    lVar12 = param_2 * 3;
    local_54 = (uint)CONCAT12(*(undefined1 *)(param_5 + 2 + lVar12),
                              *(undefined2 *)(param_5 + lVar12));
    if (local_54 != 0x110000) {
      lVar7 = param_5 + lVar12 + 3;
      lVar12 = param_3 * 3 + -3;
      goto joined_r0x0001801a6727;
    }
  }
  lVar12 = 0;
  local_54 = 0xfffd;
joined_r0x0001801a6727:
  if (param_4 == '\0') {
    if (lVar12 != 0) {
      puVar1 = (ulonglong *)(param_1 + 0x48);
      lVar9 = 0;
      do {
        uVar3 = CONCAT12(*(undefined1 *)(lVar7 + 2 + lVar9),*(undefined2 *)(lVar7 + lVar9));
        uVar8 = (uint)uVar3;
        if (uVar8 == 0x110000) {
          return local_54;
        }
        plVar2 = *(longlong **)(param_1 + 0x68);
        uVar4 = 0xfff;
        if (*(char *)((longlong)plVar2 + 0x34) == '\0') {
          uVar4 = 0xffff;
        }
        if (uVar4 < uVar8) {
          uVar4 = FUN_1801a8300(plVar2,uVar8);
          if ((uVar4 & 0x3ffffe00) == 0xd800) goto LAB_1801a67ec;
LAB_1801a683d:
          uVar4 = 0;
          uVar11 = *puVar1;
          uVar5 = uVar11;
          if (0x11 < uVar11) goto LAB_1801a6849;
LAB_1801a67f9:
          uVar11 = 0x11;
          lVar6 = param_1 + 4;
          puVar10 = puVar1;
        }
        else {
          uVar4 = *(uint *)(plVar2[2] +
                           (ulonglong)
                           ((uVar8 & 0x3f) +
                           (uint)*(ushort *)(*plVar2 + (ulonglong)(uVar3 >> 6) * 2)) * 4);
          if ((uVar4 & 0x3ffffe00) != 0xd800) goto LAB_1801a683d;
LAB_1801a67ec:
          uVar4 = uVar4 << 0x18;
          uVar11 = *puVar1;
          uVar5 = uVar11;
          if (uVar11 < 0x12) goto LAB_1801a67f9;
LAB_1801a6849:
          uVar5 = *(ulonglong *)(param_1 + 8);
          lVar6 = *(longlong *)(param_1 + 0x10);
          puVar10 = (ulonglong *)(param_1 + 8);
        }
        if (uVar5 == uVar11) {
          FUN_1801fc070(param_1);
          uVar5 = *(ulonglong *)(param_1 + 8);
          lVar6 = *(longlong *)(param_1 + 0x10);
          puVar10 = (ulonglong *)(param_1 + 8);
        }
        *(uint *)(lVar6 + uVar5 * 4) = uVar4 | uVar8;
        *puVar10 = *puVar10 + 1;
        lVar9 = lVar9 + 3;
      } while (lVar12 != lVar9);
    }
  }
  else {
    FUN_1801a4ac0(param_1,lVar7,lVar12 + lVar7);
  }
  return local_54;
}


