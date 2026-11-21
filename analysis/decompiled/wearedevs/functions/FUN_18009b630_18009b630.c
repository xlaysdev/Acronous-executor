/* FUN_18009b630 @ 18009b630 */

void FUN_18009b630(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char cVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 == 0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar4 = *(longlong *)(param_1 + 8);
  lVar16 = 0;
  lVar17 = 0;
  while( true ) {
    lVar15 = lVar4 + lVar17 * 0x48;
    cVar14 = FUN_18009b8a0(param_2,lVar15);
    lVar17 = lVar17 + 1;
    if (cVar14 == '\0') break;
    if (lVar17 == lVar3) goto LAB_18009b6a0;
  }
  FUN_18003c220(lVar15 + 0x18);
  FUN_180097000(lVar15);
  lVar16 = 1;
  while (lVar17 != lVar3) {
    puVar1 = (undefined4 *)(lVar4 + lVar17 * 0x48);
    cVar14 = FUN_18009b8a0(param_2,puVar1);
    if (cVar14 == '\0') {
      lVar17 = lVar17 + 1;
      lVar16 = lVar16 + 1;
      FUN_18003c220(puVar1 + 6);
      FUN_180097000(puVar1);
    }
    else {
      lVar15 = lVar17 - lVar16;
      *(undefined8 *)(lVar4 + 0x40 + lVar15 * 0x48) = *(undefined8 *)(puVar1 + 0x10);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      uVar9 = *(undefined8 *)(puVar1 + 4);
      uVar10 = *(undefined8 *)(puVar1 + 6);
      uVar11 = *(undefined8 *)(puVar1 + 8);
      uVar12 = *(undefined8 *)(puVar1 + 10);
      uVar13 = *(undefined8 *)(puVar1 + 0xe);
      puVar2 = (undefined8 *)(lVar4 + 0x30 + lVar15 * 0x48);
      *puVar2 = *(undefined8 *)(puVar1 + 0xc);
      puVar2[1] = uVar13;
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15 * 0x48);
      *puVar2 = uVar11;
      puVar2[1] = uVar12;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15 * 0x48);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      puVar1 = (undefined4 *)(lVar4 + lVar15 * 0x48);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      lVar17 = lVar17 + 1;
    }
  }
LAB_18009b6a0:
  *(longlong *)(param_1 + 0x10) = lVar3 - lVar16;
  return;
}


