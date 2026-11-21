/* FUN_180138210 @ 180138210 */

void FUN_180138210(uint *param_1,undefined **param_2)

{
  undefined ***pppuVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *local_c8;
  undefined ****local_c0;
  undefined **local_b8;
  undefined *local_b0;
  undefined4 local_a4;
  undefined1 uStack_a0;
  char cStack_9f;
  undefined2 uStack_9e;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined ***local_78;
  undefined ***pppuStack_70;
  undefined **local_60;
  uint *local_58;
  undefined1 local_50;
  char cStack_4f;
  undefined2 uStack_4e;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*param_1 < 4) {
    return;
  }
  local_60 = param_2;
  pppuVar1 = (undefined ***)CONCAT44(local_48._4_4_,(undefined4)local_48);
  if (*(longlong *)PTR_DAT_1802fd448 != 0) goto LAB_18013824a;
  uVar3 = (uint)DAT_1802fc4d8;
  if (1 < uVar3 - 1) {
    pppuVar1 = (undefined ***)CONCAT44(local_48._4_4_,(undefined4)local_48);
    if (uVar3 == 0) goto LAB_18013824a;
    uVar3 = FUN_1801faaf0(&PTR_DAT_1802fc4c8);
    pppuVar1 = (undefined ***)CONCAT44(local_48._4_4_,(undefined4)local_48);
    if ((char)uVar3 == '\0') goto LAB_18013824a;
  }
  cVar2 = FUN_1801601d0(PTR_DAT_1802fc4c8,uVar3);
  pppuVar1 = (undefined ***)CONCAT44(local_48._4_4_,(undefined4)local_48);
  if (cVar2 != '\0') {
    uStack_38 = (undefined ***)(PTR_DAT_1802fc4c8 + 0x30);
    local_78 = &local_60;
    pppuStack_70 = (undefined ***)FUN_18014c370;
    local_c8 = &DAT_18024d688;
    local_c0 = &local_78;
    local_b8 = &local_c8;
    local_b0 = &DAT_18024c458;
    local_50 = 1;
    cStack_4f = 0;
    uStack_4e = 0;
    uStack_4c = 0;
    local_48 = &local_b8;
    uStack_40 = (undefined ***)0x1;
    FUN_180160ae0(PTR_DAT_1802fc4c8,&local_50);
    param_2 = local_60;
    pppuVar1 = local_48;
  }
LAB_18013824a:
  local_48._4_4_ = (undefined4)((ulonglong)pppuVar1 >> 0x20);
  if (*(char *)param_2 == '\0') {
    cStack_4f = *(char *)((longlong)param_2 + 1);
    uStack_4c = (undefined4)*(undefined8 *)((longlong)param_2 + 4);
    local_48._0_4_ = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_2 + 4) >> 0x20);
    local_50 = 0;
  }
  else {
    local_48 = pppuVar1;
    if (*(char *)param_2 == '\x01') {
      (**(code **)param_2[1])(&local_48,param_2 + 4,param_2[2],param_2[3]);
      uStack_4c = *(undefined4 *)((longlong)param_2 + 4);
      local_50 = 1;
      cStack_4f = *(char *)((longlong)param_2 + 1);
    }
    else {
      cVar2 = *(char *)((longlong)param_2 + 1);
      if (SBORROW8(0,(longlong)param_2[1])) {
        uVar4 = 0;
        uVar5 = 0x80000000;
      }
      else {
        FUN_1801ed500(&local_50,param_2 + 1);
        uVar4 = CONCAT22(uStack_4e,CONCAT11(cStack_4f,local_50));
        local_78 = local_48;
        pppuStack_70 = uStack_40;
        uVar5 = uStack_4c;
      }
      local_48 = (undefined ***)CONCAT44(uVar5,uVar4);
      uStack_40 = local_78;
      uStack_38 = pppuStack_70;
      local_50 = 2;
      cStack_4f = cVar2;
    }
  }
  local_80 = local_30;
  uStack_90 = (undefined4)uStack_40;
  uStack_8c = uStack_40._4_4_;
  uStack_88 = (undefined4)uStack_38;
  uStack_84 = uStack_38._4_4_;
  uStack_a0 = local_50;
  cStack_9f = cStack_4f;
  uStack_9e = uStack_4e;
  uStack_9c = uStack_4c;
  local_58 = param_1;
  uStack_98 = local_48;
  FUN_180132bb0(param_1);
  *local_58 = 1;
  *(ulonglong *)(local_58 + 1) =
       CONCAT26(uStack_9e,CONCAT15(cStack_9f,CONCAT14(uStack_a0,local_a4)));
  *(ulonglong *)(local_58 + 3) = CONCAT44((undefined4)uStack_98,uStack_9c);
  *(ulonglong *)(local_58 + 5) = CONCAT44(uStack_90,uStack_98._4_4_);
  *(ulonglong *)(local_58 + 7) = CONCAT44(uStack_88,uStack_8c);
  *(ulonglong *)(local_58 + 8) = CONCAT44(uStack_84,uStack_88);
  *(undefined8 *)(local_58 + 10) = local_80;
  return;
}


