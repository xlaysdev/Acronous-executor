/* FUN_1801a3920 @ 1801a3920 */

undefined1 FUN_1801a3920(longlong *param_1,uint param_2)

{
  ushort uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  uint uVar9;
  
  iVar4 = (int)param_1[3];
  if (*(uint *)(param_1 + 4) <= param_2) {
    uVar6 = iVar4 - 2;
    goto LAB_1801a3a0e;
  }
  if ((char)param_1[6] == '\0') {
    iVar5 = 0x3fc;
  }
  else {
    iVar5 = 0x40;
    if (*(uint *)(param_1 + 4) < 0x1001) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("assertion failed: code_point < self.header.high_start && self.header.high_start > SMALL_LIMITC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\icu_collections-2.3.0\\src\\codepointtrie\\cptrie.rs"
                    ,0x5d,&DAT_180281fb0);
    }
  }
  uVar7 = (ulonglong)((param_2 >> 0xe) + iVar5);
  uVar2 = param_1[1];
  if (uVar7 < uVar2) {
    lVar3 = *param_1;
    uVar7 = (ulonglong)((param_2 >> 9 & 0x1f) + (uint)*(ushort *)(lVar3 + uVar7 * 2));
    if (uVar7 < uVar2) {
      uVar1 = *(ushort *)(lVar3 + uVar7 * 2);
      uVar6 = param_2 >> 4;
      if ((short)uVar1 < 0) {
        uVar9 = (uVar1 & 0x7fff) + ((uVar6 & 0x1f) >> 3 | uVar6 & 0x18);
        if (uVar9 < uVar2) {
          uVar7 = (ulonglong)((uVar6 & 7) + uVar9 + 1);
          if (uVar7 < uVar2) {
            uVar6 = (uint)*(ushort *)(lVar3 + uVar7 * 2) |
                    (uint)*(ushort *)(lVar3 + (ulonglong)uVar9 * 2) <<
                    (char)(uVar6 & 7) * '\x02' + 2 & 0x30000;
            goto LAB_1801a3a03;
          }
        }
      }
      else {
        uVar7 = (ulonglong)((uVar6 & 0x1f) + (uint)uVar1);
        if (uVar7 < uVar2) {
          uVar6 = (uint)*(ushort *)(lVar3 + uVar7 * 2);
LAB_1801a3a03:
          uVar6 = (param_2 & 0xf) + uVar6;
          goto LAB_1801a3a0e;
        }
      }
    }
  }
  uVar6 = iVar4 - 1;
LAB_1801a3a0e:
  puVar8 = (undefined1 *)((longlong)param_1 + 0x34);
  if ((ulonglong)uVar6 < (ulonglong)param_1[3]) {
    puVar8 = (undefined1 *)(param_1[2] + (ulonglong)uVar6);
  }
  return *puVar8;
}


