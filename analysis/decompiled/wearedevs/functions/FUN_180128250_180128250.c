/* FUN_180128250 @ 180128250 */

undefined8 * FUN_180128250(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  char *pcVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  char cVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  longlong lVar16;
  undefined1 uVar17;
  ulonglong uVar18;
  bool bVar19;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  char *local_58;
  undefined8 *local_50;
  longlong *local_48;
  uint local_40;
  undefined1 local_3a;
  undefined1 local_39;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_3a = 1;
  local_50 = param_3;
  cVar12 = FUN_180127fe0(param_2,0);
  if (cVar12 == '\0') {
    lVar16 = *param_2;
    uVar13 = *(ulonglong *)(lVar16 + 0x38);
    do {
      if (-1 < (longlong)uVar13) {
        uVar17 = 1;
        goto LAB_18012844b;
      }
      uVar18 = uVar13 & 0x7fffffffffffffff;
      if (uVar18 == 0x7fffffffffffffff) {
        local_39 = 1;
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("buffer space exhausted; sending this messages would overflow the state",0x46,
                      &PTR_s_C__Users_burne__cargo_registry_s_180242c08);
      }
      puVar1 = (ulonglong *)(lVar16 + 0x38);
      LOCK();
      uVar3 = *puVar1;
      bVar19 = uVar13 == uVar3;
      if (bVar19) {
        *puVar1 = uVar13 + 1 | 0x8000000000000000;
      }
      else {
        uVar13 = uVar3;
      }
      UNLOCK();
    } while (!bVar19);
    lVar16 = *param_2;
    if (*(ulonglong *)(lVar16 + 0x30) <= uVar18) {
      lVar16 = param_2[1];
      pcVar2 = (char *)(lVar16 + 0x10);
      LOCK();
      bVar19 = *(char *)(lVar16 + 0x10) == '\0';
      if (bVar19) {
        *(char *)(lVar16 + 0x10) = '\x01';
      }
      UNLOCK();
      if (!bVar19) {
        local_39 = 1;
        FUN_180200390(pcVar2);
      }
      puVar11 = PTR_DAT_1802fd600;
      if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
        local_40 = 0;
        cVar12 = *(char *)(lVar16 + 0x11);
      }
      else {
        local_39 = 1;
        local_40 = FUN_180200a50();
        local_40 = local_40 ^ 1;
        cVar12 = *(char *)(lVar16 + 0x11);
      }
      local_58 = pcVar2;
      if (cVar12 != '\0') {
        uVar13 = (ulonglong)uStack_80 >> 8;
        uStack_80 = (longlong *)CONCAT71((int7)uVar13,(char)local_40);
        local_88 = pcVar2;
                    /* WARNING: Subroutine does not return */
        FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_88,
                      &PTR_FUN_180242c70,&PTR_s_C__Users_burne__cargo_registry_s_180242c20);
      }
      local_48 = (longlong *)lVar16;
      if (*(longlong *)(lVar16 + 0x18) != 0) {
        (**(code **)(*(longlong *)(lVar16 + 0x18) + 0x18))(*(undefined8 *)(lVar16 + 0x20));
      }
      plVar6 = local_48;
      *(undefined8 *)((longlong)local_48 + 0x18) = 0;
      *(undefined1 *)((longlong)local_48 + 0x28) = 1;
      if (((char)local_40 == '\0') && ((*(ulonglong *)puVar11 & 0x7fffffffffffffff) != 0)) {
        local_39 = 1;
        cVar12 = FUN_180200a50();
        if (cVar12 == '\0') {
          *(undefined1 *)((longlong)plVar6 + 0x11) = 1;
        }
      }
      LOCK();
      cVar12 = *local_58;
      *local_58 = '\0';
      UNLOCK();
      if (cVar12 == '\x02') {
        local_39 = 1;
        WakeByAddressSingle();
      }
      plVar6 = (longlong *)param_2[1];
      LOCK();
      lVar16 = *plVar6;
      *plVar6 = *plVar6 + 1;
      UNLOCK();
      if (*plVar6 == 0 || SCARRY8(lVar16,1) != *plVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      lVar16 = *param_2;
      local_88 = (char *)0x0;
      uStack_80 = plVar6;
      FUN_180027490();
      puVar14 = (undefined8 *)thunk_FUN_1801d32d0(0x10,8);
      if (puVar14 == (undefined8 *)0x0) {
        local_48 = plVar6;
                    /* WARNING: Subroutine does not return */
        FUN_180201705(8,0x10);
      }
      *puVar14 = local_88;
      puVar14[1] = uStack_80;
      LOCK();
      plVar6 = (longlong *)(lVar16 + 0x20);
      plVar4 = (longlong *)*plVar6;
      *plVar6 = (longlong)puVar14;
      UNLOCK();
      *plVar4 = (longlong)puVar14;
      *(byte *)(param_2 + 2) = (byte)((ulonglong)*(undefined8 *)(lVar16 + 0x38) >> 0x3f);
      lVar16 = *param_2;
    }
    local_60 = 0;
    local_88 = (char *)0x1;
    uStack_80._0_4_ = *(undefined4 *)local_50;
    uStack_80._4_4_ = *(undefined4 *)((longlong)local_50 + 4);
    uStack_78 = *(undefined4 *)(local_50 + 1);
    uStack_74 = *(undefined4 *)((longlong)local_50 + 0xc);
    local_70 = *(undefined4 *)(local_50 + 2);
    uStack_6c = *(undefined4 *)((longlong)local_50 + 0x14);
    uStack_68 = *(undefined4 *)(local_50 + 3);
    uStack_64 = *(undefined4 *)((longlong)local_50 + 0x1c);
    FUN_180027490();
    puVar15 = (undefined4 *)thunk_FUN_1801d32d0(0x30,8);
    if (puVar15 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x30);
    }
    puVar15[8] = uStack_68;
    puVar15[9] = uStack_64;
    puVar15[10] = (undefined4)local_60;
    puVar15[0xb] = local_60._4_4_;
    puVar15[4] = uStack_78;
    puVar15[5] = uStack_74;
    puVar15[6] = local_70;
    puVar15[7] = uStack_6c;
    *puVar15 = (undefined4)local_88;
    puVar15[1] = local_88._4_4_;
    puVar15[2] = (undefined4)uStack_80;
    puVar15[3] = uStack_80._4_4_;
    LOCK();
    lVar5 = *(longlong *)(lVar16 + 0x10);
    *(longlong *)(lVar16 + 0x10) = (longlong)puVar15;
    UNLOCK();
    *(undefined4 **)(lVar5 + 0x28) = puVar15;
    local_39 = 0;
    uVar17 = 2;
    FUN_18017a7e0(lVar16 + 0x48);
  }
  else {
    uVar17 = 0;
LAB_18012844b:
    uVar8 = *local_50;
    uVar9 = local_50[1];
    uVar10 = local_50[3];
    param_1[2] = local_50[2];
    param_1[3] = uVar10;
    *param_1 = uVar8;
    param_1[1] = uVar9;
  }
  *(undefined1 *)(param_1 + 4) = uVar17;
  return param_1;
}


