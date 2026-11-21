/* FUN_1801a3a30 @ 1801a3a30 */

undefined1 FUN_1801a3a30(longlong *param_1,uint param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  iVar5 = (int)param_1[3];
  if (*(uint *)(param_1 + 4) <= param_2) {
    uVar7 = iVar5 - 2;
    goto joined_r0x0001801a3a7d;
  }
  if ((char)param_1[6] == '\0') {
    iVar6 = 0x3fc;
  }
  else {
    iVar6 = 0x40;
    if (*(uint *)(param_1 + 4) < 0x1001) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("assertion failed: code_point < self.header.high_start && self.header.high_start > SMALL_LIMITC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\icu_collections-2.3.0\\src\\codepointtrie\\cptrie.rs"
                    ,0x5d,&DAT_180281fb0);
    }
  }
  uVar8 = (ulonglong)((param_2 >> 0xe) + iVar6);
  uVar3 = param_1[1];
  if (uVar8 < uVar3) {
    lVar4 = *param_1;
    uVar8 = (ulonglong)((param_2 >> 9 & 0x1f) + (uint)*(ushort *)(lVar4 + uVar8 * 2));
    if (uVar8 < uVar3) {
      uVar2 = *(ushort *)(lVar4 + uVar8 * 2);
      uVar7 = param_2 >> 4;
      if ((short)uVar2 < 0) {
        uVar9 = (uVar2 & 0x7fff) + ((uVar7 & 0x1f) >> 3 | uVar7 & 0x18);
        if (uVar9 < uVar3) {
          uVar8 = (ulonglong)((uVar7 & 7) + uVar9 + 1);
          if (uVar8 < uVar3) {
            uVar7 = (uint)*(ushort *)(lVar4 + uVar8 * 2) |
                    (uint)*(ushort *)(lVar4 + (ulonglong)uVar9 * 2) <<
                    (char)(uVar7 & 7) * '\x02' + 2 & 0x30000;
            goto LAB_1801a3b23;
          }
        }
      }
      else {
        uVar8 = (ulonglong)((uVar7 & 0x1f) + (uint)uVar2);
        if (uVar8 < uVar3) {
          uVar7 = (uint)*(ushort *)(lVar4 + uVar8 * 2);
LAB_1801a3b23:
          uVar7 = (param_2 & 0xf) + uVar7;
          goto joined_r0x0001801a3a7d;
        }
      }
    }
  }
  uVar7 = iVar5 - 1;
joined_r0x0001801a3a7d:
  if ((ulonglong)uVar7 < (ulonglong)param_1[3]) {
    uVar1 = *(undefined1 *)(param_1[2] + (ulonglong)uVar7);
  }
  else {
    uVar1 = *(undefined1 *)((longlong)param_1 + 0x34);
  }
  return uVar1;
}


