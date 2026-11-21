/* FUN_180130a10 @ 180130a10 */

undefined8 FUN_180130a10(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined *local_a0;
  int *local_98;
  int **ppiStack_90;
  longlong local_80;
  longlong *local_78 [2];
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_54;
  int local_50;
  int local_4c [3];
  
  local_4c[1] = -2;
  local_4c[2] = -1;
  uVar2 = FUN_180131b80();
  if ((uVar2 & 1) == 0) {
    local_4c[0] = param_2;
    if ((*(longlong *)PTR_DAT_1802fd448 == 0) &&
       (((uVar5 = (uint)DAT_1802fb9d0, uVar5 - 1 < 2 ||
         ((uVar5 != 0 && (uVar5 = FUN_1801faaf0(&PTR_DAT_1802fb9c0), (char)uVar5 != '\0')))) &&
        (cVar1 = FUN_1801601d0(PTR_DAT_1802fb9c0,uVar5), cVar1 != '\0')))) {
      local_a0 = PTR_DAT_1802fb9c0 + 0x30;
      local_98 = local_4c;
      ppiStack_90 = (int **)&DAT_180245638;
      local_b8 = (int *)0x1;
      uStack_b0 = (code *)&local_98;
      local_a8 = 1;
      FUN_180160410(&local_80,PTR_DAT_1802fb9c0,&local_b8);
      if (local_80 != 2) {
        FUN_180161780(&local_80,&local_68);
      }
    }
    else {
      local_80 = 2;
      local_60 = 0;
    }
    iVar4 = *(int *)(param_1 + 4);
    if (!SCARRY4(local_4c[0],iVar4)) {
      *(int *)(param_1 + 4) = local_4c[0] + iVar4;
      iVar4 = local_4c[0] + iVar4;
    }
    if (0 < iVar4) {
      do {
        FUN_180150760(&local_b8,param_1 + 0x24,param_3);
        if (local_b8 == (int *)0x0) {
          if (((int)local_80 == 2) ||
             (FUN_180161750(&local_80,&local_68), lVar6 = local_80, local_80 == 2))
          goto LAB_180130caa;
          FUN_1801617b0(&local_80,local_68);
          goto LAB_180130c92;
        }
        local_98 = local_b8;
        ppiStack_90 = (int **)uStack_b0;
        local_54 = (undefined4)uStack_b0;
        local_50 = uStack_b0._4_4_;
        if (*(ulonglong *)(local_b8 + 4) <= ((ulonglong)uStack_b0 & 0xffffffff)) {
LAB_180130ce3:
          local_b8 = &local_50;
          uStack_b0 = FUN_180152d10;
                    /* WARNING: Subroutine does not return */
          FUN_180201ee0(&DAT_180256fac,&local_b8,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
        }
        lVar6 = ((ulonglong)uStack_b0 & 0xffffffff) * 0x148;
        if ((*(int *)(*(longlong *)(local_b8 + 2) + lVar6) == 2) ||
           (lVar6 = *(longlong *)(local_b8 + 2) + lVar6, *(int *)(lVar6 + 300) != uStack_b0._4_4_))
        goto LAB_180130ce3;
        iVar4 = *(uint *)(lVar6 + 0x40) - 4;
        if (*(uint *)(lVar6 + 0x40) < 4) {
          iVar4 = 6;
        }
        if ((((iVar4 == 5) || (iVar4 == 3)) && (*(char *)(lVar6 + 0x44) == '\x01')) ||
           (*(longlong *)(lVar6 + 0x90) != 0)) {
          if (*(ulonglong *)(local_b8 + 4) <= ((ulonglong)uStack_b0 & 0xffffffff)) {
LAB_180130d0f:
            local_b8 = &local_50;
            uStack_b0 = FUN_180152d10;
                    /* WARNING: Subroutine does not return */
            FUN_180201ee0(&DAT_180256fac,&local_b8,&PTR_s_C__Users_burne__cargo_registry_s_180257040
                         );
          }
          lVar6 = ((ulonglong)uStack_b0 & 0xffffffff) * 0x148;
          if ((*(int *)(*(longlong *)(local_b8 + 2) + lVar6) == 2) ||
             (lVar6 = *(longlong *)(local_b8 + 2) + lVar6, *(int *)(lVar6 + 300) != uStack_b0._4_4_)
             ) goto LAB_180130d0f;
          iVar4 = *(int *)(lVar6 + 0x78);
          FUN_18012f440(param_1,&local_98);
          local_b8 = local_98;
          uStack_b0 = (code *)ppiStack_90;
          FUN_1801537a0(param_4,&local_b8,iVar4 != 1000000000);
        }
      } while (0 < *(int *)(param_1 + 4));
    }
    if (((int)local_80 != 2) &&
       (FUN_180161750(&local_80,&local_68), lVar6 = local_80, local_80 != 2)) {
      FUN_1801617b0(&local_80,local_68);
LAB_180130c92:
      if (lVar6 != 0) {
        LOCK();
        *local_78[0] = *local_78[0] + -1;
        UNLOCK();
        if (*local_78[0] == 0) {
          FUN_18003cc40(local_78);
        }
      }
    }
LAB_180130caa:
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


