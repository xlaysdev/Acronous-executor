/* FUN_180127810 @ 180127810 */

ulonglong FUN_180127810(longlong *param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  char *pcVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  char cVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined8 unaff_RDI;
  ulonglong uVar19;
  ulonglong uVar20;
  bool bVar21;
  undefined8 local_78;
  undefined8 uStack_70;
  char *local_68;
  undefined8 *local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined1 local_42;
  undefined1 local_41;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  uVar19 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if ((char)param_1[2] != '\x02') {
    local_42 = 1;
    local_60 = param_2;
    cVar13 = FUN_180127fe0(param_1,0);
    if (cVar13 == '\0') {
      lVar18 = *param_1;
      uVar15 = *(ulonglong *)(lVar18 + 0x38);
      do {
        if (-1 < (longlong)uVar15) goto LAB_180127855;
        uVar20 = uVar15 & 0x7fffffffffffffff;
        if (uVar20 == 0x7fffffffffffffff) {
          local_41 = 1;
                    /* WARNING: Subroutine does not return */
          FUN_180201ec0("buffer space exhausted; sending this messages would overflow the state",
                        0x46,&PTR_s_C__Users_burne__cargo_registry_s_180242c08);
        }
        puVar1 = (ulonglong *)(lVar18 + 0x38);
        LOCK();
        uVar3 = *puVar1;
        bVar21 = uVar15 == uVar3;
        if (bVar21) {
          *puVar1 = uVar15 + 1 | 0x8000000000000000;
        }
        else {
          uVar15 = uVar3;
        }
        UNLOCK();
      } while (!bVar21);
      lVar18 = *param_1;
      if (*(ulonglong *)(lVar18 + 0x30) <= uVar20) {
        lVar18 = param_1[1];
        pcVar2 = (char *)(lVar18 + 0x10);
        LOCK();
        bVar21 = *(char *)(lVar18 + 0x10) == '\0';
        if (bVar21) {
          *(char *)(lVar18 + 0x10) = '\x01';
        }
        UNLOCK();
        if (!bVar21) {
          local_41 = 1;
          FUN_180200390(pcVar2);
        }
        puVar12 = PTR_DAT_1802fd600;
        if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
          local_50 = local_50 & 0xffffffff00000000;
          cVar13 = *(char *)(lVar18 + 0x11);
        }
        else {
          local_41 = 1;
          uVar14 = FUN_180200a50();
          local_50 = CONCAT44(local_50._4_4_,uVar14) ^ 1;
          cVar13 = *(char *)(lVar18 + 0x11);
        }
        local_68 = pcVar2;
        if (cVar13 != '\0') {
          uVar19 = (ulonglong)uStack_70 >> 8;
          uStack_70 = (longlong *)CONCAT71((int7)uVar19,(char)local_50);
          local_78 = pcVar2;
                    /* WARNING: Subroutine does not return */
          FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_78,
                        &PTR_FUN_180242c70,&PTR_s_C__Users_burne__cargo_registry_s_180242c20);
        }
        local_58 = (longlong *)lVar18;
        if (*(longlong *)(lVar18 + 0x18) != 0) {
          (**(code **)(*(longlong *)(lVar18 + 0x18) + 0x18))(*(undefined8 *)(lVar18 + 0x20));
        }
        plVar6 = local_58;
        *(undefined8 *)((longlong)local_58 + 0x18) = 0;
        *(undefined1 *)((longlong)local_58 + 0x28) = 1;
        if (((char)local_50 == '\0') && ((*(ulonglong *)puVar12 & 0x7fffffffffffffff) != 0)) {
          local_41 = 1;
          cVar13 = FUN_180200a50();
          if (cVar13 == '\0') {
            *(undefined1 *)((longlong)plVar6 + 0x11) = 1;
          }
        }
        LOCK();
        cVar13 = *local_68;
        *local_68 = '\0';
        UNLOCK();
        if (cVar13 == '\x02') {
          local_41 = 1;
          WakeByAddressSingle();
        }
        plVar6 = (longlong *)param_1[1];
        LOCK();
        lVar18 = *plVar6;
        *plVar6 = *plVar6 + 1;
        UNLOCK();
        if (*plVar6 == 0 || SCARRY8(lVar18,1) != *plVar6 < 0) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)invalidInstructionException();
          (*pcVar9)();
        }
        lVar18 = *param_1;
        local_78 = (char *)0x0;
        uStack_70 = plVar6;
        FUN_180027490();
        puVar16 = (undefined4 *)thunk_FUN_1801d32d0(0x10,8);
        if (puVar16 == (undefined4 *)0x0) {
          local_58 = plVar6;
                    /* WARNING: Subroutine does not return */
          FUN_180201705(8,0x10);
        }
        *puVar16 = (undefined4)local_78;
        puVar16[1] = local_78._4_4_;
        puVar16[2] = (undefined4)uStack_70;
        puVar16[3] = uStack_70._4_4_;
        LOCK();
        plVar6 = (longlong *)(lVar18 + 0x20);
        plVar4 = (longlong *)*plVar6;
        *plVar6 = (longlong)puVar16;
        UNLOCK();
        *plVar4 = (longlong)puVar16;
        *(byte *)(param_1 + 2) = (byte)((ulonglong)*(undefined8 *)(lVar18 + 0x38) >> 0x3f);
        lVar18 = *param_1;
      }
      uVar7 = *local_60;
      uVar8 = local_60[1];
      uVar10 = local_60[1];
      uVar11 = local_60[2];
      FUN_180027490();
      puVar17 = (undefined8 *)thunk_FUN_1801d32d0(0x20,8);
      if (puVar17 == (undefined8 *)0x0) {
        local_58 = (longlong *)uVar7;
        local_50 = uVar8;
                    /* WARNING: Subroutine does not return */
        FUN_180201705(8,0x20);
      }
      *puVar17 = 0;
      puVar17[1] = uVar7;
      puVar17[2] = uVar10;
      puVar17[3] = uVar11;
      LOCK();
      puVar5 = *(undefined8 **)(lVar18 + 0x10);
      *(undefined8 **)(lVar18 + 0x10) = puVar17;
      UNLOCK();
      *puVar5 = puVar17;
      local_41 = 0;
      uVar19 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
      FUN_18017a7e0(lVar18 + 0x48);
      goto LAB_180127870;
    }
    uVar19 = 0;
LAB_180127855:
    param_2 = local_60;
  }
  if (param_2[1] != 0) {
    thunk_FUN_1801d3330(*param_2,param_2[1],1);
  }
LAB_180127870:
  return uVar19 & 0xffffffff;
}


