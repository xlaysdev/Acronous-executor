/* FUN_18017c4b0 @ 18017c4b0 */

void FUN_18017c4b0(longlong param_1,ulonglong *param_2,uint param_3)

{
  undefined *puVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  ulonglong unaff_RDI;
  int iVar9;
  bool bVar10;
  ulonglong local_80;
  int local_78;
  ulonglong *local_70;
  code *local_68;
  byte local_60;
  ulonglong *local_58;
  uint local_50;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  puVar8 = (ulonglong *)(param_1 + 0x14);
  LOCK();
  bVar10 = *(char *)(param_1 + 0x14) == '\0';
  if (bVar10) {
    *(char *)(param_1 + 0x14) = '\x01';
  }
  UNLOCK();
  if (!bVar10) {
    unaff_RDI = (ulonglong)param_3;
    FUN_180200390(puVar8);
  }
  puVar1 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_50 = 0;
  }
  else {
    unaff_RDI = (ulonglong)param_3;
    local_50 = FUN_180200a50();
    local_50 = local_50 ^ 1;
  }
  uVar3 = 0;
  LOCK();
  uVar4 = *(ulonglong *)(param_1 + 8);
  if (uVar4 == 0) {
    *(ulonglong *)(param_1 + 8) = 1;
  }
  else {
    uVar3 = uVar4;
  }
  UNLOCK();
  local_58 = puVar8;
  if (uVar4 == 0) {
    if (param_3 == 1000000000) {
      puVar8 = param_2;
      iVar9 = 1000000000;
    }
    else {
      local_49 = 1;
      puVar8 = param_2;
      local_70 = (ulonglong *)FUN_1801df8c0();
      local_68 = (code *)CONCAT44(local_68._4_4_,(int)puVar8);
      local_49 = 1;
      unaff_RDI = FUN_1801df650(&local_70,param_2,param_3);
      local_49 = 1;
      puVar8 = param_2;
      uVar5 = FUN_1801df8c0();
      local_49 = 1;
      uVar4 = FUN_1801e5a10(uVar5);
      iVar9 = (int)param_2;
      if (iVar9 == 1000000000) {
        unaff_RDI = uVar4;
        iVar9 = (int)puVar8;
      }
    }
    do {
      uVar7 = SUB84(puVar8,0);
      if (iVar9 == 1000000000) {
        puVar8 = local_58;
        FUN_1801dc490(param_1 + 0x10);
        if (*(char *)(param_1 + 0x15) != '\0') {
          local_70 = local_58;
          local_68 = (code *)CONCAT71(local_68._1_7_,(char)local_50);
                    /* WARNING: Subroutine does not return */
          FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_70,
                        &PTR_FUN_1802641f0,&PTR_s_C__Users_burne__cargo_registry_s_180264558);
        }
      }
      else {
        local_49 = 1;
        local_80 = unaff_RDI;
        local_78 = iVar9;
        uVar5 = FUN_1801df8c0();
        local_49 = 1;
        lVar6 = FUN_1801df680(&local_80,uVar5,uVar7);
        if ((lVar6 == 0) && ((int)uVar5 == 0)) {
LAB_18017c642:
          LOCK();
          uVar4 = *(ulonglong *)(param_1 + 8);
          *(ulonglong *)(param_1 + 8) = 0;
          UNLOCK();
          switch(uVar4) {
          case 0:
          case 2:
            local_68 = FUN_1801ee720;
            local_49 = 1;
            local_80 = uVar4;
            local_70 = &local_80;
                    /* WARNING: Subroutine does not return */
            FUN_180201ee0(&DAT_180264588,&local_70,&PTR_s_C__Users_burne__cargo_registry_s_1802645b8
                         );
          case 1:
          case 3:
            goto switchD_18017c660_caseD_1;
          default:
            local_68 = FUN_1801ee720;
            local_49 = 1;
            local_80 = uVar4;
            local_70 = &local_80;
                    /* WARNING: Subroutine does not return */
            FUN_180201ee0(&DAT_1802645d0,&local_70,&PTR_s_C__Users_burne__cargo_registry_s_1802645f8
                         );
          }
        }
        puVar8 = local_58;
        local_60 = FUN_1801dc3b0(param_1 + 0x10,local_58,lVar6);
        if (*(char *)(param_1 + 0x15) != '\0') {
          local_60 = local_60 ^ 1;
          local_70 = local_58;
          local_68 = (code *)CONCAT71(local_68._1_7_,(char)local_50);
                    /* WARNING: Subroutine does not return */
          FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_70,
                        &PTR_FUN_180264240,&PTR_s_C__Users_burne__cargo_registry_s_180264570);
        }
        if (local_60 == 0) goto LAB_18017c642;
      }
      LOCK();
      bVar10 = *(longlong *)(param_1 + 8) == 3;
      if (bVar10) {
        *(longlong *)(param_1 + 8) = 0;
      }
      UNLOCK();
    } while (!bVar10);
  }
  else {
    if (uVar3 != 3) {
      local_70 = &local_80;
      local_68 = FUN_1801ee720;
      local_49 = 1;
      local_80 = uVar3;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_180264518,&local_70,&PTR_s_C__Users_burne__cargo_registry_s_180264610);
    }
    LOCK();
    *(undefined8 *)(param_1 + 8) = 0;
    UNLOCK();
  }
switchD_18017c660_caseD_1:
  if ((((char)local_50 == '\0') && ((*(ulonglong *)puVar1 & 0x7fffffffffffffff) != 0)) &&
     (cVar2 = FUN_180200a50(), cVar2 == '\0')) {
    *(undefined1 *)(param_1 + 0x15) = 1;
  }
  LOCK();
  uVar4 = *local_58;
  *(char *)local_58 = '\0';
  UNLOCK();
  if ((char)uVar4 == '\x02') {
    WakeByAddressSingle();
  }
  return;
}


