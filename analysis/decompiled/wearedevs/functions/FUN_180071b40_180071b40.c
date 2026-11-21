/* FUN_180071b40 @ 180071b40 */

void FUN_180071b40(undefined8 *param_1,longlong *param_2,char *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  char *pcVar9;
  char cVar10;
  char cVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  longlong lVar16;
  bool bVar17;
  char **local_c0;
  code *local_b8;
  undefined *local_b0;
  char ***local_a8;
  undefined **local_a0;
  undefined *local_98;
  char *local_90;
  undefined4 *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  
  puVar8 = PTR_PTR_1802fb570;
  local_38 = 0xfffffffffffffffe;
  puVar14 = param_1;
  local_90 = param_3;
  local_50 = param_4;
  if (*(ulonglong *)PTR_DAT_1802fd448 < 2) {
    bVar2 = PTR_PTR_1802fb570[0x10];
    uVar12 = (uint)bVar2;
    puVar14 = (undefined8 *)(ulonglong)(bVar2 - 1);
    if ((bVar2 - 1 < 2) ||
       ((bVar2 != 0 &&
        (puVar14 = (undefined8 *)PTR_PTR_1802fb570, uVar12 = FUN_1801faaf0(PTR_PTR_1802fb570),
        (char)uVar12 != '\0')))) {
      puVar14 = *(undefined8 **)puVar8;
      cVar10 = FUN_1801601d0(puVar14,uVar12);
      if (cVar10 != '\0') {
        puVar14 = *(undefined8 **)puVar8;
        puStack_68 = puVar14 + 6;
        local_c0 = &local_90;
        local_b8 = FUN_180041870;
        local_b0 = &DAT_18020ca10;
        local_a8 = &local_c0;
        local_a0 = &local_b0;
        local_98 = &DAT_18020c968;
        local_80 = (undefined *)0x1;
        uStack_78 = &local_a0;
        local_70 = 1;
        FUN_180160ae0(puVar14,&local_80);
      }
    }
  }
  pcVar9 = local_90;
  bVar17 = *(char *)(local_50 + 2) == '\x02';
  uVar13 = (ulonglong)bVar17;
  lVar16 = *param_2;
  puVar15 = (undefined4 *)CONCAT71((int7)((ulonglong)puVar14 >> 8),lVar16 == 0 || bVar17);
  if (lVar16 == 0 || bVar17) {
    lVar16 = 0;
LAB_180071c5b:
    cVar11 = (char)uVar13;
    cVar10 = *local_90;
    local_48 = lVar16;
    if (cVar10 != '\0') {
      if (cVar10 == '\x01') {
        cVar11 = local_90[1];
      }
      else {
        puVar14 = *(undefined8 **)(local_90 + 8);
        FUN_180027490();
        local_88 = (undefined4 *)thunk_FUN_1801d32d0(0x20,8);
        if (local_88 == (undefined4 *)0x0) {
          local_40 = lVar16;
                    /* WARNING: Subroutine does not return */
          FUN_180201705(8,0x20);
        }
        cVar11 = (**(code **)*puVar14)(&local_80,puVar14 + 3,puVar14[1],puVar14[2]);
        *(undefined8 *)(local_88 + 4) = local_70;
        *(undefined8 **)(local_88 + 6) = puStack_68;
        *local_88 = (undefined4)local_80;
        local_88[1] = local_80._4_4_;
        local_88[2] = (undefined4)uStack_78;
        local_88[3] = uStack_78._4_4_;
        puVar15 = local_88;
      }
    }
    local_80._0_2_ = CONCAT11(cVar11,cVar10);
    uStack_78 = (undefined ***)puVar15;
    (*(code *)**(undefined8 **)(pcVar9 + 0x10))
              (&local_70,pcVar9 + 0x28,*(undefined8 *)(pcVar9 + 0x18),*(undefined8 *)(pcVar9 + 0x20)
              );
    param_1[0xc] = local_50[6];
    uVar3 = *local_50;
    uVar4 = local_50[1];
    uVar5 = local_50[2];
    uVar6 = local_50[3];
    uVar7 = local_50[5];
    param_1[10] = local_50[4];
    param_1[0xb] = uVar7;
    param_1[8] = uVar5;
    param_1[9] = uVar6;
    param_1[6] = uVar3;
    param_1[7] = uVar4;
    *(undefined1 *)(param_1 + 0xe) = 1;
    *param_1 = local_80;
    param_1[1] = uStack_78;
    param_1[2] = local_70;
    param_1[3] = puStack_68;
    param_1[4] = local_60;
    param_1[5] = uStack_58;
    param_1[0xd] = local_48;
    return;
  }
  do {
    uVar13 = *(ulonglong *)(lVar16 + 8);
    while (uVar13 != 0xffffffffffffffff) {
      if ((longlong)uVar13 < 0) {
        local_80 = &DAT_1802071f8;
        uStack_78 = (undefined ***)&LAB_1800a5660;
        local_40 = 0;
                    /* WARNING: Subroutine does not return */
        FUN_180201ee0(&DAT_180207208,&local_80,&PTR_s_C__Users_burne__rustup_toolchain_180207280);
      }
      puVar15 = (undefined4 *)(uVar13 + 1);
      LOCK();
      uVar1 = *(ulonglong *)(lVar16 + 8);
      bVar17 = uVar13 == uVar1;
      if (bVar17) {
        *(ulonglong *)(lVar16 + 8) = (ulonglong)puVar15;
      }
      else {
        uVar13 = uVar1;
      }
      UNLOCK();
      if (bVar17) goto LAB_180071c5b;
    }
  } while( true );
}


