/* FUN_18012feb0 @ 18012feb0 */

void FUN_18012feb0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined *local_68;
  longlong local_60;
  longlong *local_58 [2];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if ((*(longlong *)PTR_DAT_1802fd448 == 0) &&
     (((uVar3 = (uint)DAT_1802fb9a0, uVar3 - 1 < 2 ||
       ((uVar3 != 0 && (uVar3 = FUN_1801faaf0(&PTR_DAT_1802fb990), (char)uVar3 != '\0')))) &&
      (cVar2 = FUN_1801601d0(PTR_DAT_1802fb990,uVar3), cVar2 != '\0')))) {
    local_68 = PTR_DAT_1802fb990 + 0x30;
    local_80 = 1;
    uStack_78 = 8;
    local_70 = 0;
    FUN_180160410(&local_60,PTR_DAT_1802fb990,&local_80);
    if (local_60 != 2) {
      FUN_180161780(&local_60,&local_48);
    }
  }
  else {
    local_60 = 2;
    local_40 = 0;
  }
  while (FUN_180150760(&local_80,param_1 + 0x24,param_2), local_80 != 0) {
    local_98 = (undefined4)local_80;
    uStack_94 = local_80._4_4_;
    uStack_90 = (undefined4)uStack_78;
    uStack_8c = uStack_78._4_4_;
    FUN_180152fe0(param_3,&local_98);
  }
  if ((((int)local_60 != 2) && (FUN_180161750(&local_60,&local_48), lVar1 = local_60, local_60 != 2)
      ) && (FUN_1801617b0(&local_60,local_48), lVar1 != 0)) {
    LOCK();
    *local_58[0] = *local_58[0] + -1;
    UNLOCK();
    if (*local_58[0] == 0) {
      FUN_18003cc40(local_58);
    }
  }
  return;
}


