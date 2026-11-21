/* FUN_18018b9e0 @ 18018b9e0 */

undefined8 FUN_18018b9e0(undefined4 param_1,void *param_2,ulonglong param_3)

{
  char *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  undefined *puVar5;
  ulonglong uVar6;
  char cVar7;
  char cVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 *in_RCX;
  longlong lVar11;
  bool bVar12;
  undefined4 extraout_XMM0_Da;
  char *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  char *local_58;
  uint local_50;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  plVar2 = (longlong *)*in_RCX;
  lVar3 = *plVar2;
  pcVar1 = (char *)(lVar3 + 0xc0);
  LOCK();
  bVar12 = *(char *)(lVar3 + 0xc0) == '\0';
  if (bVar12) {
    *(char *)(lVar3 + 0xc0) = '\x01';
  }
  UNLOCK();
  if (!bVar12) {
    param_1 = FUN_180200390(pcVar1);
  }
  puVar5 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    cVar8 = *(char *)(lVar3 + 0xc1);
    uVar4 = local_50;
    local_50 = 0;
  }
  else {
    uVar9 = FUN_180200a50();
    cVar8 = *(char *)(lVar3 + 0xc1);
    param_1 = extraout_XMM0_Da;
    uVar4 = local_50;
    local_50 = uVar9 ^ 1;
  }
  cVar7 = (char)local_50;
  if (cVar8 != '\0') {
    uVar4 = (uint)uStack_90 >> 8;
    uStack_90 = CONCAT31((int3)uVar4,cVar7);
    local_98 = pcVar1;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_98,&PTR_FUN_180266128,
                  &PTR_s_C__Users_burne__cargo_registry_s_180266178);
  }
  uVar6 = 0xd00000003;
  if (*(longlong *)(lVar3 + 200) != 0) {
    if (*(longlong *)(lVar3 + 0x100) == 3) {
      plVar2 = (longlong *)(lVar3 + 0x100);
      local_78 = *(undefined8 *)(lVar3 + 0x120);
      param_1 = *(undefined4 *)plVar2;
      local_98 = (char *)*plVar2;
      uStack_90 = *(undefined4 *)(lVar3 + 0x108);
      uStack_8c = *(undefined4 *)(lVar3 + 0x10c);
      local_88 = *(undefined4 *)(lVar3 + 0x110);
      uStack_84 = *(undefined4 *)(lVar3 + 0x114);
      uStack_80 = *(undefined4 *)(lVar3 + 0x118);
      uStack_7c = *(undefined4 *)(lVar3 + 0x11c);
      *plVar2 = 0;
      if (local_98 != (char *)0x3) {
        local_58 = pcVar1;
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0(&DAT_180265f18,0x28,&PTR_s_C__Users_burne__cargo_registry_s_180266190);
      }
      local_98 = (char *)0x3;
      uVar6 = *(ulonglong *)(lVar3 + 0x108);
    }
    else if (*(longlong *)(lVar3 + 0x100) == 0) {
      local_58 = pcVar1;
      FUN_180189b80(&local_70,*plVar2 + 0x10);
      lVar11 = local_60;
      if ((ulonglong)(local_70 - local_60) < param_3) {
        local_49 = 1;
        FUN_1801f6a80(&local_70,local_60,param_3,1,1);
        lVar11 = local_60;
      }
      memcpy((void *)(local_68 + lVar11),param_2,param_3);
      local_60 = lVar11 + param_3;
      local_49 = 0;
      param_1 = FUN_18018a590(&local_98,*plVar2,&local_70,0,lVar3 + 200);
      pcVar1 = local_58;
      if (local_98 != (char *)0x2) {
        if (((ulonglong)local_98 & 1) != 0) {
          param_3 = CONCAT44(uStack_8c,uStack_90);
        }
        if ((((char)local_50 == '\0') && ((*(ulonglong *)puVar5 & 0x7fffffffffffffff) != 0)) &&
           (cVar8 = FUN_180200a50(param_1,param_3), cVar8 == '\0')) {
          *(undefined1 *)(lVar3 + 0xc1) = 1;
        }
        uVar10 = 0;
        LOCK();
        cVar8 = *pcVar1;
        *pcVar1 = '\0';
        UNLOCK();
        goto joined_r0x00018018bb5a;
      }
      uVar6 = CONCAT44(uStack_8c,uStack_90);
      uVar4 = local_50;
      cVar7 = (char)local_50;
    }
  }
  local_50 = uVar4;
  param_3 = uVar6;
  if (((cVar7 == '\0') && ((*(ulonglong *)puVar5 & 0x7fffffffffffffff) != 0)) &&
     (cVar8 = FUN_180200a50(param_1,param_3), cVar8 == '\0')) {
    *(undefined1 *)(lVar3 + 0xc1) = 1;
  }
  LOCK();
  cVar8 = *pcVar1;
  *pcVar1 = '\0';
  UNLOCK();
  uVar10 = 1;
joined_r0x00018018bb5a:
  if (cVar8 == '\x02') {
    WakeByAddressSingle(pcVar1,param_3);
  }
  return uVar10;
}


