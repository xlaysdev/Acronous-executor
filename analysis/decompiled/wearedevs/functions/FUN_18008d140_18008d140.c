/* FUN_18008d140 @ 18008d140 */

undefined8 FUN_18008d140(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  undefined *puVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  char *pcVar8;
  longlong lVar9;
  undefined8 local_180;
  undefined4 local_178;
  uint local_54;
  char *local_50;
  undefined8 local_48;
  
  puVar4 = PTR_DAT_1802fd600;
  local_48 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  local_50 = (char *)(lVar1 + 0x10);
  pcVar8 = local_50;
  do {
    LOCK();
    cVar5 = *pcVar8;
    if (cVar5 == '\0') {
      *pcVar8 = '\x01';
    }
    UNLOCK();
    if (cVar5 == '\0') {
      if ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) == 0) goto LAB_18008d1ad;
LAB_18008d307:
      uVar6 = FUN_180200a50();
      uVar6 = uVar6 ^ 1;
      cVar5 = *(char *)(lVar1 + 0x11);
      pcVar8 = local_50;
    }
    else {
      FUN_180200390(local_50);
      pcVar8 = local_50;
      if ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0) goto LAB_18008d307;
LAB_18008d1ad:
      uVar6 = 0;
      cVar5 = *(char *)(lVar1 + 0x11);
    }
    if (cVar5 != '\0') {
      uVar3 = (uint)local_178 >> 8;
      local_178 = CONCAT31((int3)uVar3,(char)uVar6);
      local_180 = pcVar8;
                    /* WARNING: Subroutine does not return */
      FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_180,&PTR_FUN_18020e6e0
                    ,&PTR_s_C__Users_burne__cargo_registry_s_18020dd50);
    }
    if (*(int *)(lVar1 + 0xb8) == 1) {
      bVar2 = true;
      if ((*(int *)(param_3 + 0x128) == 4) &&
         (*(ulonglong *)(param_3 + 0x1a0) <=
          (ulonglong)(*(longlong *)(param_3 + 0x180) - *(longlong *)(param_3 + 0x178)))) {
        local_180 = (char *)CONCAT44(*(undefined4 *)(lVar1 + 0xbc),SUB84(local_180,0));
        local_178 = 7;
        local_180 = (char *)CONCAT71(local_180._1_7_,8);
        local_54 = uVar6;
        cVar5 = FUN_18005b0b0(param_3 + 0x48,&local_180);
        pcVar8 = local_50;
        uVar6 = local_54;
        if (cVar5 != '\r') {
          local_180 = (char *)CONCAT71(local_180._1_7_,cVar5);
                    /* WARNING: Subroutine does not return */
          FUN_180201bc0("invalid RST_STREAM frame",0x18,&local_180,&DAT_180211688,
                        &PTR_s_C__Users_burne__cargo_registry_s_180211080);
        }
        goto LAB_18008d230;
      }
    }
    else {
LAB_18008d230:
      *(undefined4 *)(lVar1 + 0xb8) = 0;
      bVar2 = false;
    }
    if ((((char)uVar6 == '\0') && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
       (cVar5 = FUN_180200a50(), pcVar8 = local_50, cVar5 == '\0')) {
      *(undefined1 *)(lVar1 + 0x11) = 1;
    }
    LOCK();
    cVar5 = *pcVar8;
    *pcVar8 = '\0';
    UNLOCK();
    if (cVar5 == '\x02') {
      WakeByAddressSingle(local_50);
      pcVar8 = local_50;
    }
    if (!bVar2) {
      return 0;
    }
    if ((*(int *)(param_3 + 0x128) != 4) ||
       ((ulonglong)(*(longlong *)(param_3 + 0x180) - *(longlong *)(param_3 + 0x178)) <
        *(ulonglong *)(param_3 + 0x1a0))) {
      lVar9 = param_2;
      uVar7 = FUN_18005ccd0(param_3 + 0x48);
      if ((uVar7 & 1) != 0) {
        return 1;
      }
      if (lVar9 != 0) {
        return 0;
      }
      if (*(int *)(param_3 + 0x128) != 4) {
        return 1;
      }
      pcVar8 = local_50;
      if ((ulonglong)(*(longlong *)(param_3 + 0x180) - *(longlong *)(param_3 + 0x178)) <
          *(ulonglong *)(param_3 + 0x1a0)) {
        return 1;
      }
    }
  } while( true );
}


