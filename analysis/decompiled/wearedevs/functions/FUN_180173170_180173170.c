/* FUN_180173170 @ 180173170 */

void FUN_180173170(longlong param_1,byte *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong *puVar4;
  int iVar5;
  undefined *puVar6;
  byte bVar7;
  char cVar8;
  ulonglong *puVar9;
  longlong lVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  bool bVar17;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  if (lVar1 == 0) {
LAB_18017319b:
    if (*(int *)param_2 != 1) {
      return;
    }
    puVar11 = *(ulonglong **)(param_2 + 8);
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    lVar10 = 1;
    puVar9 = puVar11;
    if (puVar11 == (ulonglong *)0x0) {
      return;
    }
  }
  else {
    lVar2 = *(longlong *)(param_2 + 0x20);
    if (lVar2 == 0x80) {
      param_2[0x10] = 0;
      param_2[0x11] = 0;
      param_2[0x12] = 0;
      param_2[0x13] = 0;
      param_2[0x14] = 0;
      param_2[0x15] = 0;
      param_2[0x16] = 0;
      param_2[0x17] = 0;
      goto LAB_18017319b;
    }
    lVar3 = *(longlong *)(param_2 + 0x18);
    iVar5 = (int)lVar3;
    puVar11 = *(ulonglong **)(lVar1 + (ulonglong)(iVar5 + (uint)lVar2 & 0xff) * 8);
    lVar13 = lVar2 + 1;
    *(longlong *)(param_2 + 0x20) = lVar13;
    bVar7 = *param_2;
    puVar4 = *(ulonglong **)(param_2 + 8);
    lVar10 = 1;
    puVar9 = puVar11;
    if (lVar13 != 0x80) {
      uVar12 = (ulonglong)((uint)lVar2 & 3);
      if (uVar12 != 3) {
        uVar15 = 1;
        puVar16 = puVar11;
        do {
          puVar9 = *(ulonglong **)(lVar1 + (ulonglong)(iVar5 + (int)lVar13 & 0xff) * 8);
          lVar13 = lVar13 + 1;
          puVar16[1] = (ulonglong)puVar9;
          uVar14 = uVar12 ^ uVar15;
          uVar15 = uVar15 + 1;
          puVar16 = puVar9;
        } while (uVar14 != 3);
      }
      if (2 < lVar2 - 0x7cU) {
        uVar12 = lVar3 + lVar13;
        lVar13 = lVar13 + -0x80;
        do {
          uVar15 = *(ulonglong *)(lVar1 + (uVar12 & 0xff) * 8);
          puVar9[1] = uVar15;
          iVar5 = (int)uVar12;
          lVar10 = *(longlong *)(lVar1 + (ulonglong)(iVar5 + 1U & 0xff) * 8);
          *(longlong *)(uVar15 + 8) = lVar10;
          lVar3 = *(longlong *)(lVar1 + (ulonglong)(iVar5 + 2U & 0xff) * 8);
          *(longlong *)(lVar10 + 8) = lVar3;
          puVar9 = *(ulonglong **)(lVar1 + (ulonglong)(iVar5 + 3U & 0xff) * 8);
          *(ulonglong **)(lVar3 + 8) = puVar9;
          uVar12 = uVar12 + 4;
          lVar13 = lVar13 + 4;
        } while (lVar13 != 0);
      }
      lVar10 = 0x80 - lVar2;
    }
    if ((bVar7 & puVar4 != (ulonglong *)0x0) == 1) {
      puVar9[1] = (ulonglong)puVar4;
      lVar10 = lVar10 + 1;
      puVar9 = puVar4;
    }
  }
  LOCK();
  bVar17 = *(char *)(param_1 + 0xf8) == '\0';
  if (bVar17) {
    *(char *)(param_1 + 0xf8) = '\x01';
  }
  UNLOCK();
  if (!bVar17) {
    FUN_180200390(param_1 + 0xf8);
  }
  puVar6 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    if (*(char *)(param_1 + 0x128) == '\0') {
      bVar7 = 0;
      lVar1 = *(longlong *)(param_1 + 0x120);
      goto joined_r0x0001801733e9;
    }
  }
  else {
    bVar7 = FUN_180200a50();
    if (*(char *)(param_1 + 0x128) == '\0') {
      bVar7 = bVar7 ^ 1;
      lVar1 = *(longlong *)(param_1 + 0x120);
joined_r0x0001801733e9:
      if (lVar1 == 0) {
        *(ulonglong **)(param_1 + 0x118) = puVar11;
      }
      else {
        *(ulonglong **)(lVar1 + 8) = puVar11;
      }
      *(ulonglong **)(param_1 + 0x120) = puVar9;
      *(longlong *)(param_1 + 0xe0) = lVar10 + *(longlong *)(param_1 + 0xe0);
      if (((bVar7 == 0) && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
         (cVar8 = FUN_180200a50(), cVar8 == '\0')) {
        *(undefined1 *)(param_1 + 0xf9) = 1;
      }
      LOCK();
      cVar8 = *(char *)(param_1 + 0xf8);
      *(char *)(param_1 + 0xf8) = '\0';
      UNLOCK();
      if (cVar8 == '\x02') {
        WakeByAddressSingle(param_1 + 0xf8);
        return;
      }
      return;
    }
    if (bVar7 == 0) goto LAB_180173314;
  }
  if (((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0) && (cVar8 = FUN_180200a50(), cVar8 == '\0')
     ) {
    *(undefined1 *)(param_1 + 0xf9) = 1;
  }
LAB_180173314:
  LOCK();
  cVar8 = *(char *)(param_1 + 0xf8);
  *(char *)(param_1 + 0xf8) = '\0';
  UNLOCK();
  if (cVar8 == '\x02') {
    WakeByAddressSingle(param_1 + 0xf8);
  }
  do {
    puVar9 = (ulonglong *)puVar11[1];
    LOCK();
    uVar12 = *puVar11;
    *puVar11 = *puVar11 - 0x40;
    UNLOCK();
    if (uVar12 < 0x40) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("assertion failed: prev.ref_count() >= 1",0x27,
                    &PTR_s_C__Users_burne__cargo_registry_s_180263618);
    }
    if ((uVar12 & 0xffffffffffffffc0) == 0x40) {
      (**(code **)(puVar11[2] + 0x10))(puVar11);
    }
    puVar11 = puVar9;
  } while (puVar9 != (ulonglong *)0x0);
  return;
}


