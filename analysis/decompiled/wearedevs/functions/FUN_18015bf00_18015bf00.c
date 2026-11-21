/* FUN_18015bf00 @ 18015bf00 */

void FUN_18015bf00(ulonglong *param_1,longlong param_2,ulonglong *param_3,undefined8 param_4,
                  ulonglong param_5,ulonglong param_6,ulonglong param_7,byte param_8)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  char cVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined8 uStack_b0;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  if ((char)param_3[8] == '\x01') {
    if (param_8 == 2) {
      param_1[9] = param_3[8];
      uVar21 = *param_3;
      uVar27 = param_3[1];
      uVar25 = param_3[2];
      uVar12 = param_3[3];
      uVar13 = param_3[4];
      uVar14 = param_3[5];
      uVar15 = param_3[7];
      param_1[7] = param_3[6];
      param_1[8] = uVar15;
      param_1[5] = uVar13;
      param_1[6] = uVar14;
      param_1[3] = uVar25;
      param_1[4] = uVar12;
      param_1[1] = uVar21;
      param_1[2] = uVar27;
      uVar21 = 4;
    }
    else {
      param_1[1] = param_7;
      uVar21 = param_3[1];
      uVar27 = param_3[2];
      uVar25 = param_3[3];
      uVar12 = param_3[4];
      uVar13 = param_3[5];
      uVar14 = param_3[6];
      uVar15 = param_3[7];
      param_1[2] = *param_3;
      param_1[3] = uVar21;
      param_1[4] = uVar27;
      param_1[5] = uVar25;
      param_1[6] = uVar12;
      param_1[7] = uVar13;
      param_1[8] = uVar14;
      param_1[9] = uVar15;
      param_1[10] = param_3[8];
      uVar21 = (ulonglong)(param_8 ^ 1);
    }
  }
  else {
    lVar22 = FUN_180147900(param_3);
    *(longlong *)(param_2 + 0x48) = *(longlong *)(param_2 + 0x48) + lVar22;
    cVar20 = FUN_18015d860(param_2,0);
    if (cVar20 == '\x01' && param_5 != 0) {
      uVar21 = *(ulonglong *)(param_2 + 0x38);
      uVar27 = param_5;
      do {
        uVar27 = uVar27 - 1;
        uVar25 = param_6 - 1 & uVar21;
        if (*(ulonglong *)(param_2 + 0x10) <= uVar25) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(uVar25,*(ulonglong *)(param_2 + 0x10),
                        &PTR_s_C__Users_burne__cargo_registry_s_18025bce8);
        }
      } while (((*(char *)(*(longlong *)(param_2 + 8) + uVar25 * 0x18) == '\0') ||
               ((uVar25 - (*(ulonglong *)(*(longlong *)(param_2 + 8) + uVar25 * 0x18 + 0x10) &
                          uVar21) & uVar21) < uVar27)) &&
              (param_5 = param_5 - 1, param_6 = uVar25, uVar27 != 0));
    }
    uVar21 = param_3[8];
    uVar14 = *param_3;
    uVar4 = *(undefined4 *)((longlong)param_3 + 4);
    uVar15 = param_3[1];
    uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
    uVar16 = param_3[2];
    uVar6 = *(undefined4 *)((longlong)param_3 + 0x14);
    uVar17 = param_3[3];
    uVar7 = *(undefined4 *)((longlong)param_3 + 0x1c);
    uVar18 = param_3[4];
    uVar8 = *(undefined4 *)((longlong)param_3 + 0x24);
    uVar19 = param_3[5];
    uVar9 = *(undefined4 *)((longlong)param_3 + 0x2c);
    uVar12 = param_3[6];
    uVar13 = param_3[7];
    *(longlong *)(param_2 + 0x40) = *(longlong *)(param_2 + 0x40) + 1;
    uVar27 = *(ulonglong *)(param_2 + 0x18);
    uVar25 = *(ulonglong *)(param_2 + 0x30);
    if (uVar25 == uVar27) {
      FUN_18015ddc0(param_2 + 0x18,(int)uVar16,param_5);
      uVar27 = *(ulonglong *)(param_2 + 0x18);
      uVar25 = *(ulonglong *)(param_2 + 0x30);
    }
    uVar26 = *(longlong *)(param_2 + 0x28) - 1;
    uVar23 = uVar27 + uVar26;
    if (!CARRY8(uVar27,uVar26)) {
      uVar23 = uVar26;
    }
    lVar22 = *(longlong *)(param_2 + 0x20);
    *(ulonglong *)(param_2 + 0x28) = uVar23;
    *(ulonglong *)(param_2 + 0x30) = uVar25 + 1;
    lVar24 = uVar23 * 0x60;
    *(undefined8 *)(lVar22 + lVar24) = 0;
    ((undefined8 *)(lVar22 + lVar24))[1] = uStack_b0;
    puVar1 = (undefined4 *)(lVar22 + 0x10 + lVar24);
    *puVar1 = (int)uVar14;
    puVar1[1] = uVar4;
    puVar1[2] = (int)uVar15;
    puVar1[3] = uVar5;
    puVar1 = (undefined4 *)(lVar22 + 0x20 + lVar24);
    *puVar1 = (int)uVar16;
    puVar1[1] = uVar6;
    puVar1[2] = (int)uVar17;
    puVar1[3] = uVar7;
    puVar1 = (undefined4 *)(lVar22 + 0x30 + lVar24);
    *puVar1 = (int)uVar18;
    puVar1[1] = uVar8;
    puVar1[2] = (int)uVar19;
    puVar1[3] = uVar9;
    puVar2 = (ulonglong *)(lVar22 + 0x40 + lVar24);
    *puVar2 = uVar12;
    puVar2[1] = uVar13;
    local_68 = (undefined4)uVar21;
    uStack_64 = (undefined4)(uVar21 >> 0x20);
    uStack_60 = (undefined4)param_4;
    uStack_5c = (undefined4)((ulonglong)param_4 >> 0x20);
    puVar1 = (undefined4 *)(lVar22 + 0x50 + lVar24);
    *puVar1 = local_68;
    puVar1[1] = uStack_64;
    puVar1[2] = uStack_60;
    puVar1[3] = uStack_5c;
    if (*(ulonglong *)(param_2 + 0x10) <= param_6) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(param_6,*(ulonglong *)(param_2 + 0x10),
                    &PTR_s_C__Users_burne__cargo_registry_s_18025bd00);
    }
    lVar22 = *(longlong *)(param_2 + 0x40);
    lVar24 = *(longlong *)(param_2 + 8);
    bVar3 = *(byte *)(lVar24 + param_6 * 0x18);
    puVar1 = (undefined4 *)(lVar24 + 8 + param_6 * 0x18);
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    *(undefined8 *)(lVar24 + param_6 * 0x18) = 1;
    *(longlong *)(lVar24 + 8 + param_6 * 0x18) = -lVar22;
    *(undefined8 *)(lVar24 + 0x10 + param_6 * 0x18) = param_4;
    while ((bVar3 & 1) != 0) {
      param_6 = param_6 + 1;
      if (*(ulonglong *)(param_2 + 0x10) <= param_6) {
        do {
        } while (*(longlong *)(param_2 + 0x10) == 0);
        param_6 = 0;
      }
      lVar22 = *(longlong *)(param_2 + 8);
      bVar3 = *(byte *)(lVar22 + param_6 * 0x18);
      *(undefined8 *)(lVar22 + param_6 * 0x18) = 1;
      puVar1 = (undefined4 *)(lVar22 + 8 + param_6 * 0x18);
      uVar8 = *puVar1;
      uVar9 = puVar1[1];
      uVar10 = puVar1[2];
      uVar11 = puVar1[3];
      puVar1 = (undefined4 *)(lVar22 + 8 + param_6 * 0x18);
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
      uVar4 = uVar8;
      uVar5 = uVar9;
      uVar6 = uVar10;
      uVar7 = uVar11;
    }
    if (param_8 == 2) {
      uVar21 = 2;
      param_7 = 0;
    }
    else {
      param_1[2] = 0;
      uVar21 = 3;
    }
    param_1[1] = param_7;
  }
  *param_1 = uVar21;
  return;
}


