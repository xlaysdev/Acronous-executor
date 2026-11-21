/* FUN_1801305e0 @ 1801305e0 */

void FUN_1801305e0(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  int iStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined *local_80;
  longlong local_78;
  longlong *local_70 [2];
  undefined8 local_60;
  undefined8 local_58;
  int local_4c [3];
  
  local_4c[1] = -2;
  local_4c[2] = -1;
  local_4c[0] = param_2;
  if ((*(longlong *)PTR_DAT_1802fd448 == 0) &&
     (((uVar3 = (uint)DAT_1802fb9d0, uVar3 - 1 < 2 ||
       ((uVar3 != 0 && (uVar3 = FUN_1801faaf0(&PTR_DAT_1802fb9c0), (char)uVar3 != '\0')))) &&
      (cVar1 = FUN_1801601d0(PTR_DAT_1802fb9c0,uVar3), cVar1 != '\0')))) {
    local_90 = PTR_DAT_1802fb9c0 + 0x30;
    local_88 = local_4c;
    local_80 = &DAT_180245638;
    local_a8 = 1;
    uStack_a0 = (code *)&local_88;
    local_98 = 1;
    FUN_180160410(&local_78,PTR_DAT_1802fb9c0,&local_a8);
    if (local_78 != 2) {
      FUN_180161780(&local_78,&local_60);
    }
  }
  else {
    local_78 = 2;
    local_58 = 0;
  }
  iVar2 = *(int *)(param_1 + 4);
  if (!SCARRY4(local_4c[0],iVar2)) {
    *(int *)(param_1 + 4) = local_4c[0] + iVar2;
    iVar2 = local_4c[0] + iVar2;
  }
  if (0 < iVar2) {
    do {
      FUN_18014ff70(&local_a8,param_1 + 0x24,param_3);
      if (local_a8 == 0) {
        if ((int)local_78 == 2) {
          return;
        }
        FUN_180161750(&local_78,&local_60);
        lVar4 = local_78;
        if (local_78 == 2) {
          return;
        }
        FUN_1801617b0(&local_78,local_60);
        goto LAB_180130852;
      }
      local_b8 = (undefined4)local_a8;
      uStack_b4 = local_a8._4_4_;
      uStack_b0 = (undefined4)uStack_a0;
      iStack_ac = uStack_a0._4_4_;
      local_88 = (int *)uStack_a0;
      if (*(ulonglong *)(local_a8 + 0x10) <= ((ulonglong)uStack_a0 & 0xffffffff)) {
LAB_1801308a2:
        local_a8 = (longlong)&local_88 + 4;
        uStack_a0 = FUN_180152d10;
                    /* WARNING: Subroutine does not return */
        FUN_180201ee0(&DAT_180256fac,&local_a8,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
      }
      lVar4 = ((ulonglong)uStack_a0 & 0xffffffff) * 0x148;
      if ((*(int *)(*(longlong *)(local_a8 + 8) + lVar4) == 2) ||
         (lVar4 = *(longlong *)(local_a8 + 8) + lVar4, *(int *)(lVar4 + 300) != uStack_a0._4_4_))
      goto LAB_1801308a2;
      iVar2 = *(uint *)(lVar4 + 0x40) - 4;
      if (*(uint *)(lVar4 + 0x40) < 4) {
        iVar2 = 6;
      }
      if ((((iVar2 == 5) || (iVar2 == 3)) && (*(char *)(lVar4 + 0x44) == '\x01')) ||
         (*(longlong *)(lVar4 + 0x90) != 0)) {
        if (*(ulonglong *)(local_a8 + 0x10) <= ((ulonglong)uStack_a0 & 0xffffffff)) {
LAB_1801308ce:
          local_a8 = (longlong)&local_88 + 4;
          uStack_a0 = FUN_180152d10;
                    /* WARNING: Subroutine does not return */
          FUN_180201ee0(&DAT_180256fac,&local_a8,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
        }
        lVar4 = ((ulonglong)uStack_a0 & 0xffffffff) * 0x148;
        if ((*(int *)(*(longlong *)(local_a8 + 8) + lVar4) == 2) ||
           (lVar4 = *(longlong *)(local_a8 + 8) + lVar4, *(int *)(lVar4 + 300) != uStack_a0._4_4_))
        goto LAB_1801308ce;
        iVar2 = *(int *)(lVar4 + 0x78);
        FUN_18012f440(param_1,&local_b8);
        local_a8 = CONCAT44(uStack_b4,local_b8);
        uStack_a0 = (code *)CONCAT44(iStack_ac,uStack_b0);
        FUN_1801537a0(param_4,&local_a8,iVar2 != 1000000000);
      }
    } while (0 < *(int *)(param_1 + 4));
  }
  if (((int)local_78 != 2) && (FUN_180161750(&local_78,&local_60), lVar4 = local_78, local_78 != 2))
  {
    FUN_1801617b0(&local_78,local_60);
LAB_180130852:
    if (lVar4 != 0) {
      LOCK();
      *local_70[0] = *local_70[0] + -1;
      UNLOCK();
      if (*local_70[0] == 0) {
        FUN_18003cc40(local_70);
      }
    }
  }
  return;
}


