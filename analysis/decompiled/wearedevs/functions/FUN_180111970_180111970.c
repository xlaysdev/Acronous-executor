/* FUN_180111970 @ 180111970 */

ulonglong FUN_180111970(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4,
                       ulonglong param_5)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  byte bVar14;
  bool bVar15;
  
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = param_3 - 0x1a;
  bVar15 = uVar10 != 0;
  if (param_3 < 0x1a) {
    uVar10 = 0;
  }
  if (param_3 >= 0x1a && bVar15) {
    uVar12 = 0;
    uVar7 = 0;
    do {
      if (param_3 < uVar12 + 0x1a) {
                    /* WARNING: Subroutine does not return */
        FUN_180201a30(uVar12,uVar12 + 0x1a,param_3,&PTR_s_C__Users_burne__cargo_registry_s_18023ee98
                     );
      }
      uVar11 = uVar7 + 0x20;
      if (param_5 < uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_180201a30(uVar7,uVar7 + 0x20,param_5,&PTR_s_C__Users_burne__cargo_registry_s_18023ee80);
      }
      uVar2 = *(ulonglong *)(param_2 + uVar12);
      uVar4 = (uVar2 & 0xff0000000000) >> 0x18;
      uVar5 = (uVar2 & 0xff00000000) >> 8;
      uVar3 = uVar4 | uVar5;
      uVar8 = uVar3 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
              (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
      *(undefined1 *)(param_4 + uVar7) = *(undefined1 *)(param_1 + 3 + ((uVar2 & 0xff) >> 2));
      uVar6 = (uint)(uVar8 >> 0x20);
      *(undefined1 *)(param_4 + 1 + uVar7) =
           *(undefined1 *)(param_1 + 3 + (ulonglong)(uVar6 >> 0x14 & 0x3f));
      *(undefined1 *)(param_4 + 2 + uVar7) =
           *(undefined1 *)(param_1 + 3 + (ulonglong)(uVar6 >> 0xe & 0x3f));
      *(undefined1 *)(param_4 + 3 + uVar7) =
           *(undefined1 *)(param_1 + 3 + (ulonglong)(uVar6 >> 8 & 0x3f));
      *(undefined1 *)(param_4 + 4 + uVar7) =
           *(undefined1 *)(param_1 + 3 + (ulonglong)(uVar6 >> 2 & 0x3f));
      *(undefined1 *)(param_4 + 5 + uVar7) =
           *(undefined1 *)(param_1 + 3 + (ulonglong)((uint)(uVar8 >> 0x1c) & 0x3f));
      *(undefined1 *)(param_4 + 6 + uVar7) =
           *(undefined1 *)
            (param_1 + 3 + (ulonglong)((uint)((uVar4 & 0xffc00000 | uVar5) >> 0x16) & 0x3f));
      uVar2 = *(ulonglong *)(param_2 + 6 + uVar12);
      uVar5 = (uVar2 & 0xff0000000000) >> 0x18;
      uVar8 = (uVar2 & 0xff00000000) >> 8;
      uVar4 = uVar5 | uVar8;
      uVar9 = uVar4 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
              (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
      *(undefined1 *)(param_4 + 7 + uVar7) =
           *(undefined1 *)(param_1 + 3 + (ulonglong)((uint)uVar3 >> 0x10 & 0x3f));
      *(undefined1 *)(param_4 + 8 + uVar7) = *(undefined1 *)(param_1 + 3 + ((uVar2 & 0xff) >> 2));
      uVar6 = (uint)(uVar9 >> 0x20);
      *(undefined1 *)(param_4 + 9 + uVar7) =
           *(undefined1 *)(param_1 + 3 + (ulonglong)(uVar6 >> 0x14 & 0x3f));
      *(undefined1 *)(param_4 + 10 + uVar7) =
           *(undefined1 *)(param_1 + 3 + (ulonglong)(uVar6 >> 0xe & 0x3f));
      *(undefined1 *)(param_4 + 0xb + uVar7) =
           *(undefined1 *)(param_1 + 3 + (ulonglong)(uVar6 >> 8 & 0x3f));
      *(undefined1 *)(param_4 + 0xc + uVar7) =
           *(undefined1 *)(param_1 + 3 + (ulonglong)(uVar6 >> 2 & 0x3f));
      *(undefined1 *)(param_4 + 0xd + uVar7) =
           *(undefined1 *)(param_1 + 3 + (ulonglong)((uint)(uVar9 >> 0x1c) & 0x3f));
      *(undefined1 *)(param_4 + 0xe + uVar7) =
           *(undefined1 *)
            (param_1 + 3 + (ulonglong)((uint)((uVar5 & 0xffc00000 | uVar8) >> 0x16) & 0x3f));
      *(undefined1 *)(param_4 + 0xf + uVar7) =
           *(undefined1 *)(param_1 + 3 + (ulonglong)((uint)uVar4 >> 0x10 & 0x3f));
      uVar2 = *(ulonglong *)(param_2 + 0xc + uVar12);
      uVar4 = (uVar2 & 0xff0000000000) >> 0x18;
      uVar5 = (uVar2 & 0xff00000000) >> 8;
      uVar3 = uVar4 | uVar5;
      uVar8 = uVar3 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
              (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
      *(undefined1 *)(param_4 + 0x10 + uVar7) = *(undefined1 *)(param_1 + 3 + ((uVar2 & 0xff) >> 2))
      ;
      uVar6 = (uint)(uVar8 >> 0x20);
      *(undefined1 *)(param_4 + 0x11 + uVar7) =
           *(undefined1 *)(param_1 + 3 + (ulonglong)(uVar6 >> 0x14 & 0x3f));
      *(undefined1 *)(param_4 + 0x12 + uVar7) =
           *(undefined1 *)(param_1 + 3 + (ulonglong)(uVar6 >> 0xe & 0x3f));
      *(undefined1 *)(param_4 + 0x13 + uVar7) =
           *(undefined1 *)(param_1 + 3 + (ulonglong)(uVar6 >> 8 & 0x3f));
      *(undefined1 *)(param_4 + 0x14 + uVar7) =
           *(undefined1 *)(param_1 + 3 + (ulonglong)(uVar6 >> 2 & 0x3f));
      *(undefined1 *)(param_4 + 0x15 + uVar7) =
           *(undefined1 *)(param_1 + 3 + (ulonglong)((uint)(uVar8 >> 0x1c) & 0x3f));
      *(undefined1 *)(param_4 + 0x16 + uVar7) =
           *(undefined1 *)
            (param_1 + 3 + (ulonglong)((uint)((uVar4 & 0xffc00000 | uVar5) >> 0x16) & 0x3f));
      *(undefined1 *)(param_4 + 0x17 + uVar7) =
           *(undefined1 *)(param_1 + 3 + (ulonglong)((uint)uVar3 >> 0x10 & 0x3f));
      uVar2 = *(ulonglong *)(param_2 + 0x12 + uVar12);
      uVar4 = (uVar2 & 0xff0000000000) >> 0x18;
      uVar5 = (uVar2 & 0xff00000000) >> 8;
      uVar3 = uVar4 | uVar5;
      uVar8 = uVar3 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
              (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
      *(undefined1 *)(param_4 + 0x18 + uVar7) = *(undefined1 *)(param_1 + 3 + ((uVar2 & 0xff) >> 2))
      ;
      uVar6 = (uint)(uVar8 >> 0x20);
      *(undefined1 *)(param_4 + 0x19 + uVar7) =
           *(undefined1 *)(param_1 + 3 + (ulonglong)(uVar6 >> 0x14 & 0x3f));
      *(undefined1 *)(param_4 + 0x1a + uVar7) =
           *(undefined1 *)(param_1 + 3 + (ulonglong)(uVar6 >> 0xe & 0x3f));
      *(undefined1 *)(param_4 + 0x1b + uVar7) =
           *(undefined1 *)(param_1 + 3 + (ulonglong)(uVar6 >> 8 & 0x3f));
      *(undefined1 *)(param_4 + 0x1c + uVar7) =
           *(undefined1 *)(param_1 + 3 + (ulonglong)(uVar6 >> 2 & 0x3f));
      *(undefined1 *)(param_4 + 0x1d + uVar7) =
           *(undefined1 *)(param_1 + 3 + (ulonglong)((uint)(uVar8 >> 0x1c) & 0x3f));
      *(undefined1 *)(param_4 + 0x1e + uVar7) =
           *(undefined1 *)
            (param_1 + 3 + (ulonglong)((uint)((uVar4 & 0xffc00000 | uVar5) >> 0x16) & 0x3f));
      *(undefined1 *)(param_4 + 0x1f + uVar7) =
           *(undefined1 *)(param_1 + 3 + (ulonglong)((uint)uVar3 >> 0x10 & 0x3f));
      uVar12 = uVar12 + 0x18;
      uVar7 = uVar11;
    } while (uVar12 <= uVar10);
  }
  uVar10 = (param_3 / 3) * 3;
  while (uVar12 < uVar10) {
    if (param_3 < uVar12 + 3) {
                    /* WARNING: Subroutine does not return */
      FUN_180201a30(uVar12,uVar12 + 3,param_3,&PTR_s_C__Users_burne__cargo_registry_s_18023ee68);
    }
    if (param_5 < uVar11 + 4) {
                    /* WARNING: Subroutine does not return */
      FUN_180201a30(uVar11,uVar11 + 4,param_5,&PTR_s_C__Users_burne__cargo_registry_s_18023ee50);
    }
    bVar14 = *(byte *)(param_2 + uVar12);
    *(undefined1 *)(param_4 + uVar11) = *(undefined1 *)(param_1 + 3 + (ulonglong)(bVar14 >> 2));
    bVar1 = *(byte *)(param_2 + 1 + uVar12);
    *(undefined1 *)(param_4 + 1 + uVar11) =
         *(undefined1 *)(param_1 + 3 + (ulonglong)((byte)(bVar1 >> 4 | bVar14 << 4) & 0x3f));
    bVar14 = *(byte *)(param_2 + 2 + uVar12);
    *(undefined1 *)(param_4 + 2 + uVar11) =
         *(undefined1 *)(param_1 + 3 + (ulonglong)((byte)(bVar14 >> 6 | bVar1 << 2) & 0x3f));
    *(undefined1 *)(param_4 + 3 + uVar11) =
         *(undefined1 *)(param_1 + 3 + (ulonglong)(bVar14 & 0x3f));
    uVar11 = uVar11 + 4;
    uVar12 = uVar12 + 3;
  }
  if (param_3 % 3 == 1) {
    if (param_5 <= uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(uVar11,param_5,&PTR_s_C__Users_burne__cargo_registry_s_18023edd8);
    }
    bVar14 = *(byte *)(param_2 + uVar10);
    *(undefined1 *)(param_4 + uVar11) = *(undefined1 *)(param_1 + 3 + (ulonglong)(bVar14 >> 2));
    uVar12 = uVar11 + 1;
    if (param_5 <= uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(uVar12,param_5,&PTR_s_C__Users_burne__cargo_registry_s_18023edf0);
    }
    bVar14 = (bVar14 & 3) << 4;
    lVar13 = 2;
  }
  else {
    if (param_3 % 3 != 2) {
      return uVar11;
    }
    if (param_5 <= uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(uVar11,param_5,&PTR_s_C__Users_burne__cargo_registry_s_18023ee08);
    }
    bVar14 = *(byte *)(param_2 + uVar10);
    *(undefined1 *)(param_4 + uVar11) = *(undefined1 *)(param_1 + 3 + (ulonglong)(bVar14 >> 2));
    if (param_5 <= uVar11 + 1) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(uVar11 + 1,param_5,&PTR_s_C__Users_burne__cargo_registry_s_18023ee20);
    }
    bVar1 = *(byte *)(param_2 + 1 + uVar10);
    *(undefined1 *)(param_4 + 1 + uVar11) =
         *(undefined1 *)(param_1 + 3 + (ulonglong)((byte)(bVar14 << 4 | bVar1 >> 4) & 0x3f));
    uVar12 = uVar11 + 2;
    if (param_5 <= uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(uVar12,param_5,&PTR_s_C__Users_burne__cargo_registry_s_18023ee38);
    }
    bVar14 = (bVar1 & 0xf) << 2;
    lVar13 = 3;
  }
  *(undefined1 *)(param_4 + uVar12) = *(undefined1 *)(param_1 + 3 + (ulonglong)bVar14);
  return uVar11 + lVar13;
}


