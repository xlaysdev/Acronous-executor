/* FUN_1800ac7d0 @ 1800ac7d0 */

undefined8 * FUN_1800ac7d0(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  char cVar7;
  char *pcVar8;
  char cVar9;
  char cVar10;
  bool bVar11;
  undefined1 local_258 [256];
  undefined8 local_158;
  undefined1 local_150 [256];
  longlong *local_50;
  char local_42;
  char local_41;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  lVar3 = *param_2;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0("called after complete",0x2b,&PTR_s_C__Users_burne__cargo_registry_s_180210890);
  }
  lVar5 = FUN_18016c6f0();
  if (*(char *)(lVar5 + 0x48) == '\x01') {
LAB_1800ac852:
    cVar9 = *(char *)(lVar5 + 0x44);
    cVar10 = *(char *)(lVar5 + 0x45);
    cVar7 = cVar10;
    if (cVar9 != '\x01') {
LAB_1800ac872:
      *(char *)(lVar5 + 0x45) = cVar7;
      local_158 = local_158 & 0xffffffffff000000;
      FUN_18016e8a0((longlong)&local_158 + 1);
      goto LAB_1800ac891;
    }
    if (cVar10 != '\0') {
      cVar7 = cVar10 + -1;
      goto LAB_1800ac872;
    }
    FUN_18016e580(param_3);
    local_158 = local_158 & 0xffffffffff000000;
    pcVar8 = (char *)((longlong)&local_158 + 1);
LAB_1800ac953:
    FUN_18016e8a0(pcVar8);
LAB_1800ac9b4:
    *param_1 = 6;
    return param_1;
  }
  if (*(char *)(lVar5 + 0x48) != '\x02') {
    FUN_1801d8880(lVar5,FUN_1800754a0);
    *(undefined1 *)(lVar5 + 0x48) = 1;
    goto LAB_1800ac852;
  }
  cVar9 = '\0';
  cVar10 = '\0';
LAB_1800ac891:
  puVar1 = (ulonglong *)(lVar3 + 0x30);
  local_42 = cVar9;
  local_41 = cVar10;
  uVar6 = FUN_1801775d0(puVar1,2);
  if ((uVar6 & 2) == 0) {
    if ((uVar6 & 4) == 0) {
      if ((uVar6 & 1) == 0) {
LAB_1800ac8f7:
        FUN_180177560(lVar3 + 0x20,param_3);
        uVar6 = *puVar1;
        do {
          LOCK();
          uVar2 = *puVar1;
          bVar11 = uVar6 == uVar2;
          if (bVar11) {
            *puVar1 = uVar6 | 1;
          }
          else {
            uVar6 = uVar2;
          }
          UNLOCK();
        } while (!bVar11);
        if ((uVar6 & 2) != 0) goto LAB_1800ac960;
      }
      else if ((*(longlong *)(lVar3 + 0x28) != ((longlong *)*param_3)[1]) ||
              (*(longlong *)(lVar3 + 0x20) != *(longlong *)*param_3)) {
        uVar6 = *puVar1;
        do {
          LOCK();
          uVar2 = *puVar1;
          bVar11 = uVar6 == uVar2;
          if (bVar11) {
            *puVar1 = uVar6 & 0xfffffffffffffffe;
          }
          else {
            uVar6 = uVar2;
          }
          UNLOCK();
        } while (!bVar11);
        if ((uVar6 & 2) != 0) {
          LOCK();
          *(ulonglong *)(lVar3 + 0x30) = *(ulonglong *)(lVar3 + 0x30) | 1;
          UNLOCK();
          goto LAB_1800ac960;
        }
        FUN_180177590();
        goto LAB_1800ac8f7;
      }
      pcVar8 = &local_42;
      goto LAB_1800ac953;
    }
  }
  else {
LAB_1800ac960:
    local_42 = '\0';
    lVar5 = *(longlong *)(lVar3 + 0x38);
    *(undefined8 *)(lVar3 + 0x38) = 5;
    if (lVar5 != 5) {
      memcpy(local_258,(void *)(lVar3 + 0x40),0x100);
      FUN_18016e8a0(&local_42);
      if (lVar5 == 6) goto LAB_1800ac9b4;
      goto LAB_1800ac9bd;
    }
  }
  local_42 = '\0';
  FUN_18016e8a0(&local_42);
  lVar5 = 5;
LAB_1800ac9bd:
  memcpy(local_150,local_258,0x100);
  plVar4 = (longlong *)*param_2;
  local_158 = lVar5;
  local_50 = param_2;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_18003d880(param_2);
    }
  }
  *local_50 = 0;
  memcpy(param_1,&local_158,0x108);
  return param_1;
}


