/* FUN_1801e6ccd @ 1801e6ccd */

undefined8 FUN_1801e6ccd(undefined8 *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar5 = param_1[1];
  uVar6 = 1;
  pbVar3 = (byte *)FUN_1801eab8d(*param_1,uVar5,"0",1);
  if (uVar5 < 0x11) {
    if (uVar5 != 0) {
      pbVar4 = pbVar3 + uVar5;
      uVar5 = 0;
      do {
        bVar2 = *pbVar3;
        uVar8 = (uint)bVar2;
        if ((char)bVar2 < '\0') {
          uVar7 = bVar2 & 0x1f;
          pbVar1 = pbVar3 + 1;
          if (bVar2 < 0xe0) {
            pbVar3 = pbVar3 + 2;
            uVar8 = uVar7 << 6 | *pbVar1 & 0x3f;
          }
          else {
            uVar8 = pbVar3[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
            if (bVar2 < 0xf0) {
              pbVar3 = pbVar3 + 3;
              uVar8 = uVar8 | uVar7 << 0xc;
            }
            else {
              pbVar1 = pbVar3 + 3;
              pbVar3 = pbVar3 + 4;
              uVar8 = *pbVar1 & 0x3f | uVar8 << 6 | (bVar2 & 7) << 0x12;
            }
          }
        }
        else {
          pbVar3 = pbVar3 + 1;
        }
        uVar7 = uVar8 - 0x30;
        if (0x39 < uVar8) {
          uVar7 = (uVar8 - 0x41 & 0xffffffdf) + 10;
        }
        if (0xf < uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_180201ba0(&PTR_s__rust_deps_rustc_demangle_0_1_26_180292188,uVar5);
        }
        uVar5 = (ulonglong)uVar7 | uVar5 << 4;
      } while (pbVar3 != pbVar4);
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}


