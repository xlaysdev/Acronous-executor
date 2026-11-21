/* FUN_1801799c0 @ 1801799c0 */

undefined8 FUN_1801799c0(int *param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  ulonglong uVar6;
  longlong lVar7;
  char cVar8;
  char cVar9;
  undefined **local_70;
  code *local_68;
  int *local_60;
  longlong *local_58;
  undefined8 local_50;
  char local_43;
  char local_42;
  undefined1 local_41;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0xb8) == '\x01') {
LAB_180179a27:
    cVar9 = *(char *)(lVar3 + 0xb4);
    cVar8 = *(char *)(lVar3 + 0xb5);
    cVar5 = cVar8;
    if (cVar9 == '\x01') {
      if (cVar8 == '\0') {
        FUN_18016c640(*param_2,&PTR_s_C__Users_burne__cargo_registry_s_180261968);
        return 1;
      }
      cVar5 = cVar8 + -1;
    }
    *(char *)(lVar3 + 0xb5) = cVar5;
  }
  else {
    if (*(char *)(lVar3 + 0xb8) != '\x02') {
      FUN_1801d8880(lVar3 + 0x70,FUN_18016d130);
      *(undefined1 *)(lVar3 + 0xb8) = 1;
      goto LAB_180179a27;
    }
    cVar9 = '\0';
    cVar8 = '\0';
  }
  puVar1 = (ulonglong *)(param_1 + 4);
  uVar6 = *puVar1;
  local_43 = cVar9;
  local_42 = cVar8;
  if (uVar6 == 2) {
    iVar2 = *param_1;
    local_58 = *(longlong **)(param_1 + 2);
    LOCK();
    lVar7 = *local_58;
    *local_58 = *local_58 + 1;
    UNLOCK();
    local_60 = param_1;
    if (iVar2 == 1) {
      local_50 = 1;
      if (lVar7 < 0) {
LAB_180179c15:
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
    }
    else {
      if (lVar7 < 0) goto LAB_180179c15;
      local_50 = 0;
    }
    FUN_180178660(puVar1);
    param_1 = local_60;
    *(undefined8 *)(local_60 + 4) = local_50;
    *(longlong **)(local_60 + 6) = local_58;
    local_60[8] = 0;
    local_60[9] = 0;
    local_60[10] = 0;
    local_60[0xb] = 0;
    local_60[0xc] = 0;
    local_60[0xd] = 0;
    local_60[0xe] = -1;
    local_60[0xf] = -1;
    local_60[0x10] = 0;
    local_60[0x11] = 0;
    local_60[0x14] = 0;
    local_60[0x15] = 0;
    *(undefined1 *)(local_60 + 0x16) = 0;
    local_41 = 1;
    FUN_1801670c0(puVar1,*(undefined8 *)(local_60 + 0x18),local_60[0x1a]);
    uVar6 = *puVar1;
  }
  lVar7 = 0x220;
  if ((uVar6 & 1) != 0) {
    lVar7 = 0x160;
  }
  if (*(int *)(*(longlong *)(param_1 + 6) + 0x98 + lVar7) == 1000000000) {
    local_41 = 1;
                    /* WARNING: Subroutine does not return */
    FUN_180201b60("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                  ,0x73,&PTR_s_C__Users_burne__cargo_registry_s_180260930);
  }
  if (*(char *)(*(longlong *)(param_1 + 6) + 0x88 + lVar7) != '\0') {
    local_70 = &PTR_DAT_180260898;
    local_68 = (code *)&LAB_1800a5660;
    local_41 = 1;
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0(&DAT_1802608a8,&local_70,&PTR_s_C__Users_burne__cargo_registry_s_180260918);
  }
  local_41 = 1;
  FUN_18017a1b0(param_1 + 0x10,*param_2);
  if (*(longlong *)(param_1 + 0xe) == -1) {
    local_43 = (char)param_1[0x16];
    if (local_43 != '\0') {
      local_70 = (undefined **)&local_43;
      local_68 = FUN_180167460;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_180263c58,&local_70,&PTR_s_C__Users_burne__cargo_registry_s_180263c68);
    }
    return 0;
  }
  if (cVar9 != '\0') {
    if (*(char *)(lVar3 + 0xb8) != '\x01') {
      if (*(char *)(lVar3 + 0xb8) == '\x02') {
        return 1;
      }
      local_41 = 0;
      FUN_1801d8880(lVar3 + 0x70,FUN_18016d130);
      *(undefined1 *)(lVar3 + 0xb8) = 1;
    }
    *(undefined1 *)(lVar3 + 0xb4) = 1;
    *(char *)(lVar3 + 0xb5) = cVar8;
  }
  return 1;
}


