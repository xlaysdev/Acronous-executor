/* FUN_1801f1800 @ 1801f1800 */

/* WARNING: Removing unreachable block (ram,0x0001801f1896) */

void FUN_1801f1800(undefined4 *param_1,longlong *param_2)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  ushort uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  char *pcVar16;
  char local_58;
  undefined4 uStack_57;
  uint uStack_53;
  undefined4 uStack_4f;
  undefined4 uStack_4b;
  undefined3 uStack_47;
  undefined1 local_44;
  
  pcVar2 = (char *)*param_2;
  lVar3 = param_2[1];
  if (lVar3 != 0) {
    cVar1 = *pcVar2;
    *param_2 = (longlong)(pcVar2 + 1);
    param_2[1] = lVar3 + -1;
    if ((cVar1 == '[') &&
       (FUN_1801f1640(&local_58,param_2), uVar7 = uStack_4b, uVar6 = uStack_53, uVar5 = uStack_57,
       local_58 == '\x01')) {
      pcVar16 = (char *)*param_2;
      lVar4 = param_2[1];
      if ((lVar4 == 0) || (lVar4 == 1 || *pcVar16 != '%')) {
code_r0x0001801f189a:
        uVar15 = 0;
        lVar12 = lVar4;
      }
      else {
        uVar10 = 0;
        lVar13 = 1;
        do {
          uVar15 = (uint)uVar10;
          uVar14 = (byte)pcVar16[lVar13] - 0x30;
          if (9 < uVar14) {
            if (lVar13 == 1) goto code_r0x0001801f189a;
            lVar12 = lVar4 - lVar13;
            goto LAB_1801f19aa;
          }
          uVar9 = (uint)(uVar10 * 10);
          if (((int)(uVar10 * 10 >> 0x20) != 0) || (uVar15 = uVar14 + uVar9, CARRY4(uVar14,uVar9)))
          goto code_r0x0001801f189a;
          lVar13 = lVar13 + 1;
          uVar10 = (ulonglong)uVar15;
        } while (lVar4 != lVar13);
        lVar12 = 0;
        lVar13 = lVar4;
LAB_1801f19aa:
        pcVar16 = pcVar16 + lVar13;
      }
      if (((lVar12 != 0) && (*pcVar16 == ']')) && (lVar12 + -1 != 0)) {
        cVar1 = pcVar16[1];
        *param_2 = (longlong)(pcVar16 + 2);
        param_2[1] = lVar12 + -2;
        if (cVar1 == ':') {
          local_58 = '\0';
          uStack_57 = 0;
          uStack_53 = uStack_53 & 0xff000000;
          uStack_4b = CONCAT13(10,(undefined3)uStack_4b);
          uStack_47 = 0;
          local_44 = 1;
          plVar11 = param_2;
          uVar8 = FUN_1801f0df0(&local_58);
          if (uVar8 != 1) {
            *param_2 = (longlong)(pcVar16 + 1);
            param_2[1] = lVar12 + -1;
            if ((uVar8 & 1) == 0) goto LAB_1801f1925;
          }
          *(ulonglong *)(param_1 + 1) = CONCAT44(uVar6,uVar5);
          *(ulonglong *)(param_1 + 3) = CONCAT44(uVar7,uStack_4f);
          param_1[5] = 0;
          param_1[6] = uVar15;
          *(short *)(param_1 + 7) = (short)plVar11;
          *param_1 = 1;
          return;
        }
      }
    }
  }
LAB_1801f1925:
  *param_1 = 0;
  *param_2 = (longlong)pcVar2;
  param_2[1] = lVar3;
  return;
}


