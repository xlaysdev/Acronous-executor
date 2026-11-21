/* FUN_180064e30 @ 180064e30 */

void FUN_180064e30(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong local_90;
  int *local_88;
  int **ppiStack_80;
  longlong local_78;
  longlong *local_70 [2];
  undefined8 local_60;
  undefined8 local_58;
  int local_4c [3];
  
  puVar2 = PTR_PTR_1802fbbf0;
  local_4c[1] = -2;
  local_4c[2] = -1;
  local_b0 = param_4;
  local_4c[0] = param_2;
  if (*(longlong *)PTR_DAT_1802fd448 == 0) {
    bVar1 = PTR_PTR_1802fbbf0[0x10];
    uVar5 = (uint)bVar1;
    if (((bVar1 - 1 < 2) ||
        ((bVar1 != 0 && (uVar5 = FUN_1801faaf0(PTR_PTR_1802fbbf0), (char)uVar5 != '\0')))) &&
       (cVar3 = FUN_1801601d0(*(undefined8 *)puVar2,uVar5), cVar3 != '\0')) {
      lVar6 = *(longlong *)puVar2;
      local_90 = lVar6 + 0x30;
      local_88 = local_4c;
      ppiStack_80 = (int **)&DAT_18020a2c8;
      local_a8 = (int *)0x1;
      uStack_a0 = &local_88;
      local_98 = 1;
      FUN_180160410(&local_78,lVar6,&local_a8);
      if (local_78 != 2) {
        FUN_180161780(&local_78,&local_60);
      }
      goto LAB_180064e83;
    }
  }
  local_78 = 2;
  local_58 = 0;
LAB_180064e83:
  iVar4 = *(int *)(param_1 + 4);
  if (!SCARRY4(local_4c[0],iVar4)) {
    *(int *)(param_1 + 4) = local_4c[0] + iVar4;
    iVar4 = local_4c[0] + iVar4;
  }
  if (0 < iVar4) {
    do {
      FUN_1800ebfe0(&local_a8,param_1 + 0x24,param_3);
      if (local_a8 == (int *)0x0) {
        if ((int)local_78 == 2) {
          return;
        }
        FUN_180161750(&local_78,&local_60);
        lVar6 = local_78;
        if (local_78 == 2) {
          return;
        }
        FUN_1801617b0(&local_78,local_60);
        goto LAB_18006503e;
      }
      local_c8 = (undefined4)local_a8;
      uStack_c4 = local_a8._4_4_;
      uStack_c0 = (undefined4)uStack_a0;
      uStack_bc = uStack_a0._4_4_;
      local_88 = local_a8;
      ppiStack_80 = uStack_a0;
      lVar6 = FUN_180152e90(&local_88);
      iVar4 = *(uint *)(lVar6 + 0x40) - 4;
      if (*(uint *)(lVar6 + 0x40) < 4) {
        iVar4 = 6;
      }
      if ((((iVar4 == 5) || (iVar4 == 3)) && (*(char *)(lVar6 + 0x44) != '\0')) ||
         (lVar6 = FUN_180152e90(&local_88), *(longlong *)(lVar6 + 0x90) != 0)) {
        lVar6 = FUN_180152e90(&local_c8);
        iVar4 = *(int *)(lVar6 + 0x78);
        FUN_18012f440(param_1,&local_c8);
        local_a8 = (int *)CONCAT44(uStack_c4,local_c8);
        uStack_a0 = (int **)CONCAT44(uStack_bc,uStack_c0);
        FUN_1801537a0(local_b0,&local_a8,iVar4 != 1000000000);
      }
    } while (0 < *(int *)(param_1 + 4));
  }
  if (((int)local_78 != 2) && (FUN_180161750(&local_78,&local_60), lVar6 = local_78, local_78 != 2))
  {
    FUN_1801617b0(&local_78,local_60);
LAB_18006503e:
    if (lVar6 != 0) {
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


