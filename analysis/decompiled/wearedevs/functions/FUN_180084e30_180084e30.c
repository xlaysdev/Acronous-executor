/* FUN_180084e30 @ 180084e30 */

void FUN_180084e30(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,void *param_4)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined *puVar4;
  void *pvVar5;
  undefined8 uVar6;
  char cVar7;
  longlong lVar8;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  char local_c0 [40];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  void *local_68;
  uint local_5c;
  char *local_58;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_4a = 1;
  local_68 = param_4;
  lVar8 = FUN_180152e90(param_3);
  pvVar5 = local_68;
  iVar1 = *(int *)(lVar8 + 0x78);
  memcpy(&local_1e8,local_68,0x120);
  uVar2 = *(undefined8 *)((longlong)pvVar5 + 0x120);
  local_58 = *(char **)((longlong)pvVar5 + 0x128);
  local_4a = 0;
  FUN_180158500(local_c0,uVar2,&local_1e8,param_3);
  if (local_c0[0] == '\x03') {
    uStack_94 = 1;
    uStack_90 = param_3[1];
    local_98 = CONCAT31(local_98._1_3_,3);
  }
  else {
    LOCK();
    cVar7 = *local_58;
    if (cVar7 == '\0') {
      *local_58 = '\x01';
    }
    UNLOCK();
    if (cVar7 != '\0') {
      local_49 = 1;
      FUN_180200390(local_58);
    }
    puVar4 = PTR_DAT_1802fd600;
    if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
      local_5c = 0;
      cVar7 = local_58[1];
      uVar6 = local_1e8;
      local_1e8 = local_58;
    }
    else {
      local_49 = 1;
      local_5c = FUN_180200a50();
      local_5c = local_5c ^ 1;
      cVar7 = local_58[1];
      uVar6 = local_1e8;
      local_1e8 = local_58;
    }
    local_58 = local_1e8;
    if (cVar7 != '\0') {
      uVar3 = (uint)uStack_1e0 >> 8;
      uStack_1e0 = CONCAT31((int3)uVar3,(char)local_5c);
                    /* WARNING: Subroutine does not return */
      FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_1e8,&PTR_FUN_18020e730
                    ,&PTR_s_C__Users_burne__cargo_registry_s_18020e248);
    }
    FUN_18008e030(&local_1e8,uVar2,local_1e8 + 8,param_3,param_2,local_c0);
    local_1e8 = (char *)uVar6;
    if ((char)local_1e8 == '\x03') {
      uStack_94 = 0;
      local_98 = CONCAT31(local_98._1_3_,3);
    }
    else {
      uStack_90 = CONCAT44(uStack_1dc,uStack_1e0);
      local_78 = local_1c8;
      local_88 = local_1d8;
      uStack_80 = uStack_1d0;
      local_98 = (undefined4)local_1e8;
      uStack_94 = local_1e8._4_4_;
    }
    if (((char)local_5c == '\0') && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) {
      local_49 = 0;
      cVar7 = FUN_180200a50();
      if (cVar7 == '\0') {
        local_58[1] = '\x01';
      }
    }
    LOCK();
    cVar7 = *local_58;
    *local_58 = '\0';
    UNLOCK();
    if (cVar7 == '\x02') {
      local_49 = 0;
      WakeByAddressSingle();
    }
  }
  local_1e8 = (char *)*param_3;
  uStack_1e0 = *(undefined4 *)(param_3 + 1);
  uStack_1dc = *(undefined4 *)((longlong)param_3 + 0xc);
  FUN_1801537a0(param_2,&local_1e8,iVar1 != 1000000000);
  param_1[4] = local_78;
  param_1[2] = local_88;
  param_1[3] = uStack_80;
  *param_1 = CONCAT44(uStack_94,local_98);
  param_1[1] = uStack_90;
  return;
}


