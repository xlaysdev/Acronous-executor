/* FUN_1801a68c0 @ 1801a68c0 */

ulonglong FUN_1801a68c0(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ulonglong uVar4;
  byte *pbVar5;
  longlong *plVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  
  puVar7 = PTR_DAT_1802fd528;
  do {
    uVar4 = *(ulonglong *)(param_1 + 0x60);
    if (uVar4 < 4) goto LAB_1801a68ea;
    pbVar5 = *(byte **)(param_1 + 0x58);
    bVar1 = *pbVar5;
    uVar11 = (ulonglong)bVar1;
    if ((char)bVar1 < '\0') {
      bVar2 = pbVar5[1];
      uVar9 = (uint)bVar1;
      uVar8 = (uint)bVar2;
      if ((byte)(bVar1 + 0x3e) < 0x1e) {
        if (-0x41 < (char)bVar2) goto LAB_1801a68ea;
        *(byte **)(param_1 + 0x58) = pbVar5 + 2;
        *(ulonglong *)(param_1 + 0x60) = uVar4 - 2;
        uVar11 = (ulonglong)(uVar8 & 0x3f | (uVar9 & 0x1f) << 6);
      }
      else {
        bVar3 = pbVar5[2];
        if (bVar1 < 0xf0) {
          if ((byte)(bVar3 >> 6 | puVar7[uVar11 + 0x80] & puVar7[bVar2]) == 2) {
            *(byte **)(param_1 + 0x58) = pbVar5 + 3;
            *(ulonglong *)(param_1 + 0x60) = uVar4 - 3;
            uVar11 = (ulonglong)(bVar3 & 0x3f | (uVar8 & 0x3f) << 6 | (uVar9 & 0xf) << 0xc);
          }
          else {
LAB_1801a68ea:
            uVar8 = FUN_1801aa250((undefined8 *)(param_1 + 0x58));
            uVar11 = (ulonglong)uVar8;
            if (uVar8 == 0x110000) {
              return 0x110000;
            }
          }
        }
        else {
          bVar1 = pbVar5[3];
          if ((uint)(byte)(bVar3 >> 6 | puVar7[uVar11 + 0x80] & puVar7[bVar2]) +
              (bVar1 & 0xffffffc0) * 4 != 0x202) goto LAB_1801a68ea;
          *(byte **)(param_1 + 0x58) = pbVar5 + 4;
          *(ulonglong *)(param_1 + 0x60) = uVar4 - 4;
          uVar11 = (ulonglong)
                   (bVar1 & 0x3f | (bVar3 & 0x3f) << 6 | (uVar8 & 0x3f) << 0xc | (uVar9 & 7) << 0x12
                   );
        }
      }
    }
    else {
      *(byte **)(param_1 + 0x58) = pbVar5 + 1;
      *(ulonglong *)(param_1 + 0x60) = uVar4 - 1;
    }
    uVar8 = (uint)uVar11;
    if (uVar8 < *(uint *)(param_1 + 0xb8)) {
      return uVar11;
    }
    plVar6 = *(longlong **)(param_1 + 0x68);
    uVar9 = 0xffff;
    if (*(char *)((longlong)plVar6 + 0x34) != '\0') {
      uVar9 = 0xfff;
    }
    if (uVar9 < uVar8) {
      iVar10 = FUN_1801a8300(plVar6,uVar11);
    }
    else {
      iVar10 = *(int *)(plVar6[2] +
                       (ulonglong)((uVar8 & 0x3f) + (uint)*(ushort *)(*plVar6 + (uVar11 >> 6) * 2))
                       * 4);
    }
    if (iVar10 != -1) {
      return uVar11;
    }
    if (*(char *)(param_1 + 0xbc) != '\x01') {
      return uVar11;
    }
  } while( true );
}


